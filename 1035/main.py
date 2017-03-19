# URI Online Judge | 1035
# Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1035

__author__ = 'darkwolf'


a, b, c, d = [int(n) for n in input().split()]
if b > c and d > a and (c + d) > (a + b) and c >= 0 and d >= 0 and a % 2 == 0:
    print("Valores aceitos")
else:
    print("Valores nao aceitos")
