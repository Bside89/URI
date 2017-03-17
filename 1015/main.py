__author__ = 'darkwolf'


x1, y1 = [float(n) for n in input().split()]
x2, y2 = [float(n) for n in input().split()]
print("%.4f" % ((x2 - x1)**2 + (y2 - y1)**2)**0.5)
