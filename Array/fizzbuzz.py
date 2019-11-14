
def print(nums):
    for n in nums:
        i = 1
        for i in range(n) + 1:
            if i % 3 == 0 and i % 5 == 0:
                print("FizzBuzz")
            elif i % 3 == 0:
                print("Fizz")
            elif i % 5 == 0:
                print("Buzz")
            else:
                print(i)


n = int(input())
i = 0
for i in range(n):
    x = input()
    nums.append(x)

print(nums)