for _ in range(int(input())):
    x,y = map(int,input().split())
    price = x - y 
    x += (x//100)*10
    print(x - price)