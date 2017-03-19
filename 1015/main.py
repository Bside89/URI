# URI Online Judge | 1015
# Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1015

__author__ = 'darkwolf'


x1, y1 = [float(n) for n in input().split()]
x2, y2 = [float(n) for n in input().split()]
print("%.4f" % ((x2 - x1)**2 + (y2 - y1)**2)**0.5)
