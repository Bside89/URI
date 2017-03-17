__author__ = 'darkwolf'


a, b, c = [int(n) for n in input().split()]
comp_ab = int((a + b + abs(a - b)) / 2)
comp_abc = int((comp_ab + c + abs(comp_ab - c)) / 2)
print("%i eh o maior" % comp_abc)
