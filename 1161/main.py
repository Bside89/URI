# URI Online Judge | 1161
# Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1161


def fat(n):
    if n is 0:
        return 1
    else:
        return n*fat(n - 1)

if __name__ == '__main__':
    while True:
        try:
            n1, n2 = [int(x) for x in input().split()]
            print(fat(n1) + fat(n2))
        except:
            break
