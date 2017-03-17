__author__ = 'darkwolf'


inferior, superior = [int(x) for x in input().split()]
print(int((inferior + superior) * (superior - inferior + 1) / 2))
