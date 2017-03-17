__author__ = 'darkwolf'


time, velocity = int(input()), int(input())
fuel_spent = float((velocity * time) / 12)
print("%.3f" % fuel_spent)
