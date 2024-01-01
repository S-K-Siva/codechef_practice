#rating : 1098

for _ in range(int(input())):
    n,x = map(int,input().split())
    arr = []
    d = dict()
    result = 0
    for _ in range(n):
        s,r = map(int,input().split())
        if s <= x:
            result = max(result,r)
    print(result)
    