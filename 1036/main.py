__author__ = 'darkwolf'


def delta(a, b, c):
    return float(b**2 - (4 * a * c))


def root1(a, b, c):
    return float((-b + (delta(a, b, c))**0.5) / (2 * a))


def root2(a, b, c):
    return float((-b - (delta(a, b, c))**0.5) / (2 * a))


try:
    a0, b0, c0 = [float(n) for n in input().split()]
    print("R1 = %.5f" % root1(a0, b0, c0))
    print("R2 = %.5f" % root2(a0, b0, c0))
except:
    print("Impossivel calcular")

