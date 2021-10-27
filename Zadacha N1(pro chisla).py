print('Введите трехзначное число')
x=int(input())
f=0
while x>999 or x<100:
    print('Ваше число не трехзначное, напишете другое число')
    x=int(input())
a=x//100
b=(x//10)%10
c=x%10
while f==0:
    if a==b or a==c or b==c:
     print('Ваше число имеет одинаковые цифры, напишете другое число')
     x=int(input())
     a=x//100
     b=(x//10)%10
     c=x%10
    else:
        f=1
print('Все возможные комбинации цифр')
print(a,b,c)
t=c
c=b
b=t
print(a,b,c)
t=a
a=c
c=b
b=t
print(a,b,c)
t=c
c=b
b=t
print(a,b,c)
t=a
a=b
b=c
c=t
print(a,b,c)
t=c
c=b
b=t
print(a,b,c)
print('Максимальное число')
if (a>b) and (a>c):
    if (b>c):
        print(a,b,c,)
    else:
        print(a,c,b)
if (b>a) and (b>c):
    if (a>c):
        print(b,a,c)
    else:
        print(b,c,a)
if (c>a) and (c>b):
    if (a>b):
        print(c,a,b)
    else:
        print(c,b,a)






