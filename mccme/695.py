k = int(input())
nums = []

for i in range(1, 10):
    x = i
    while len(str(x)) <= 2000:
        if x % k == 0:
            nums.append(x)
        x = x * 10 + i

if not nums:
    print('Impossible')
else:
    num = min(nums)
    print(str(num)[0], len(str(num)))