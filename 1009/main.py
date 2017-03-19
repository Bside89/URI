# URI Online Judge | 1009
# Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1009

__author__ = 'bside_000'


name, salary, sells = input(), float(input()), float(input())
print("TOTAL = R$", format(salary + (sells * 0.15), '.2f'))