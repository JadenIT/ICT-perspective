from math import sqrt, gcd


class MyClass:

    def __init__(self, crdts, R):
        self.crdts = crdts
        self.R = R

        self.transform_crdts()

        self.set_station_increase()

        if self.station_in_scope(self.crdts[1][0], self.crdts[1][1]):
            # Первая станция в скоупе
            s = self.find_stations_by_one_station_in_scope(
                self.crdts[1][0], self.crdts[1][1])
            print(s)
        elif self.station_in_scope(self.crdts[2][0], self.crdts[2][1]):
            # Вторая станция в скоупе
            s = self.find_stations_by_one_station_in_scope(
                self.crdts[2][0], self.crdts[2][1])
            print(s)
        else:
            # Ни одна из станций в скоупе
            s = self.if_not_in_scope()
            print(s)

    crdts = []

    def if_not_in_scope(self):
        tmp_crdts = self.go_until_we_are_in_scope(1)

        if tmp_crdts == 0:
            tmp_crdts = self.go_until_we_are_in_scope(-1)

            if tmp_crdts == 0:
                return 0
            else:
                s = self.find_stations_by_one_station_in_scope(
                    tmp_crdts[0], tmp_crdts[1])
                return s

        else:
            s = self.find_stations_by_one_station_in_scope(
                tmp_crdts[0], tmp_crdts[1])

            return s

        # start_k = 1 or start_k = -1

    def go_until_we_are_in_scope(self, start_k):
        k = start_k
        while True:
            prev_length = self.len_to_house(
                self.crdts[1][0], self.crdts[1][1])
            tmp_x = self.crdts[1][0] + k * self.increase_x
            tmp_y = self.crdts[1][1] + k * self.increase_y

            new_length = self.len_to_house(tmp_x, tmp_y)

            if new_length >= prev_length:
                return 0
            else:
                if self.station_in_scope(tmp_x, tmp_y):
                    return [tmp_x, tmp_y]
                else:
                    if start_k == 1:
                        k += 1
                    elif start_k == -1:
                        k -= 1
        return 0

    # start_k = 1 or start_k = -1
    def find_station_go_down_go_up(self, x, y, start_k):
        s = 0
        k = start_k
        while True:

            tmp_x = x + k * self.increase_x
            tmp_y = y + k * self.increase_y

            if self.station_in_scope(tmp_x, tmp_y):
                s += 1

                if start_k == 1:
                    k += 1
                elif start_k == -1:
                    k -= 1
            else:
                break

        return s

    def find_stations_by_one_station_in_scope(self, x, y):

        # Идем вниз и вверх
        s = 0

        if self.station_in_scope(x, y):
            s += 1

        s += self.find_station_go_down_go_up(x, y, 1)

        s += self.find_station_go_down_go_up(x, y, -1)

        return s

    def transform_crdts(self):
        a = 0 - crdts[0][0]
        b = 0 - crdts[0][1]

        for i in self.crdts:
            i[0] += a
            i[1] += b

    def station_in_scope(self, x, y):
        a = abs(self.crdts[0][0] - x)
        b = abs(self.crdts[0][1] - y)
        c = sqrt(a*a + b*b)

        if c > self.R:
            return False
        else:
            return True

    def len_to_house(self, station_x, station_y):
        a = abs(self.crdts[0][0] - station_x)
        b = abs(self.crdts[0][1] - station_y)
        return sqrt(a*a + b*b)

    def set_station_increase(self):
        self.increase_x = self.crdts[1][0] - self.crdts[2][0]
        self.increase_y = self.crdts[1][1] - self.crdts[2][1]
        gcd_tmp = gcd(self.increase_x, self.increase_y)
        self.increase_x /= gcd_tmp
        self.increase_y /= gcd_tmp


x_0, y_0, R = map(int, input().split())
x_1, y_1, x_2, y_2 = map(int, input().split())

crdts = [
    [x_0, y_0],
    [x_1, y_1],
    [x_2, y_2]
]

main_instance = MyClass(crdts, R)
