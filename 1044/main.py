__author__ = 'darkwolf'


num1, num2 = [int(x) for x in input().split()]
if num1 < num2:
    num1, num2 = num2, num1
if num1 % num2:
    print("Nao sao Multiplos")
else:
    print("Sao Multiplos")
