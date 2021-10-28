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
print(100*a+10*b+c)
t=c
c=b
b=t
if a!=0:
 print(100*a+10*b+c)
t=a
a=c
c=b
b=t
if a!=0:
 print(100*a+10*b+c)
t=c
c=b
b=t
if a!=0:
 print(100*a+10*b+c)
t=a
a=b
b=c
c=t
if a!=0:
 print(100*a+10*b+c)
t=c
c=b
b=t
if a!=0:
 print(100*a+10*b+c)
print('Максимальное число')
if (a>b) and (a>c):
    if (b>c):
        print(a*100+10*b+c)
    else:
        print(100*a+10*c+b)
if (b>a) and (b>c):
    if (a>c):
        print(100*b+10*a+c)
    else:
        print(100*b+10*c+a)
if (c>a) and (c>b):
    if (a>b):
        print(100*c+10*a+b)
    else:
        print(100*c+10*b+a)






