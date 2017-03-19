# URI Online Judge | 1044
# Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1044

__author__ = 'darkwolf'


num1, num2 = [int(x) for x in input().split()]
if num1 < num2:
    num1, num2 = num2, num1
if num1 % num2:
    print("Nao sao Multiplos")
else:
    print("Sao Multiplos")
