# URI Online Judge | 1796
# Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1796

__author__ = 'darkwolf'


y = n = int(0)
q = int(input())
list1 = [int(x) for x in input().split()]

for i in list1:
    if i == 1:
        n += 1
    else:
        y += 1

if y > n:
    print('Y')
else:
    print('N')
