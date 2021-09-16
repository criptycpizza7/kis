def f (x):
    return x+1

def chet(n):
    if (n%2):
        print("Нечетное")
    else:
        print("Четное")

def pogoda():
    t=float(input("Введите температуру на улице: "))
    if (t<-20):
        print("Холодно")
    elif (t>=-20) & (t<0):
        print("Прохладно")
    elif (t>=0) &( t<20):
        print("Нормально")
    else:
        print("Жарко")

def sum(n):
    s=0
    for   i in range(1,n+1):
        s+=i
    return s

def ss(n):
    s=0; i=1; c=1
    while (i<=n):
        s+=c*i
        c=-c
        i+=1
    return s

def ss1(n):
    s=0; i=1
    while (i<=n):
        if (i%2):
            s+=i
        else:
            s-=i
        i+=1
    return s
        
    
    

        
