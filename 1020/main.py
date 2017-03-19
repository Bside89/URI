# URI Online Judge | 1020
# Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1020

__author__ = 'darkwolf'


time = int(input())
years = months = int(0)
while time >= 365:
    years += 1
    time -= 365
while time >= 30:
    months += 1
    time -= 30
days = time
print("%i ano(s)" % years)
print("%i mes(es)" % months)
print("%i dia(s)" % days)
