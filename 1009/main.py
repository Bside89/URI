__author__ = 'bside_000'


name, salary, sells = input(), float(input()), float(input())
print("TOTAL = R$", format(salary + (sells * 0.15), '.2f'))