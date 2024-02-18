x,y = map(float,input().split())

if int(x+0.5)%5 != 0 or x+0.5 > y:
    print("{:.2f}".format(y))
else:
    if y-(x+0.50) >= 0.0:
        print("{:.2f}".format((y-(x+0.50))))
    else:
        print("{:.2f}".format(y))