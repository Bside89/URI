# URI Online Judge | 1017
# Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1017

__author__ = 'darkwolf'


time, velocity = int(input()), int(input())
fuel_spent = float((velocity * time) / 12)
print("%.3f" % fuel_spent)
