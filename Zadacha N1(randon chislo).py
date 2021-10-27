import random
x=random.randint(1,100)
a=int(input())
k=1
while x>0:
    if x>a:
        print("загаданное число больше вашего")
        a=int(input())
        k+=1
    if x<a:
        print("Загаданное число меньше вашего")
        a=int(input())
        k+=1
    if x==a:
        print(a)
        break
    if k==6:
        print("У вас закончились попытки")
        break




    
    