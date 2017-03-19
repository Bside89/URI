# URI Online Judge | 1043
# Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1043

__author__ = 'darkwolf'


def exist_triangle(a, b, c):
    if abs(b - c) < a < b + c and abs(a - c) < b < a + c and abs(a - b) < c < a + b:
        return True
    else:
        return False


a0, b0, c0 = [float(x) for x in input().split()]
if exist_triangle(a0, b0, c0):
    print("Perimetro = %.1f" % (a0 + b0 + c0))
else:
    print("Area = %.1f" % ((a0 + b0) * c0 / 2))
