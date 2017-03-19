# URI Online Judge | 1021
# Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1021

__author__ = 'darkwolf'


money = float(input())
values = [100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01]
qtty = [0] * len(values)

for i in range(len(values)):
    while money >= values[i]:
        qtty[i] += 1
        money -= values[i]

print("NOTAS:")
for j in range(6):
    print("%i nota(s) de R$ %.2f" % (qtty[j], values[j]))
print("MOEDAS:")
for k in range(6, len(values)):
    print("%i moeda(s) de R$ %.2f" % (qtty[k], values[k]))
