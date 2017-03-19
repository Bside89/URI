# URI Online Judge | 1805
# Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1805

__author__ = 'darkwolf'


inferior, superior = [int(x) for x in input().split()]
print(int((inferior + superior) * (superior - inferior + 1) / 2))
