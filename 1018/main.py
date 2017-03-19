# URI Online Judge | 1018
# Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1018

__author__ = 'darkwolf'


money = int(input())
n100 = n50 = n20 = n10 = n5 = n2 = n1 = int(0)
print(money)

while money >= 100:
    n100 += 1
    money -= 100
while money >= 50:
    n50 += 1
    money -= 50
while money >= 20:
    n20 += 1
    money -= 20
while money >= 10:
    n10 += 1
    money -= 10
while money >= 5:
    n5 += 1
    money -= 5
while money >= 2:
    n2 += 1
    money -= 2
while money >= 1:
    n1 += 1
    money -= 1

print("%i nota(s) de R$ 100,00" % n100)
print("%i nota(s) de R$ 50,00" % n50)
print("%i nota(s) de R$ 20,00" % n20)
print("%i nota(s) de R$ 10,00" % n10)
print("%i nota(s) de R$ 5,00" % n5)
print("%i nota(s) de R$ 2,00" % n2)
print("%i nota(s) de R$ 1,00" % n1)
