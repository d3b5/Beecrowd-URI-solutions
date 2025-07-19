a=float(input())
b=float(input())
c=float(input())
d=float(input())
e=float(input())
f=float(input())

l=[a,b,c,d,e,f]
pos,sum=0,0

for i in l:
    if i>0:
        pos+=1
        sum=sum+i
print(f"{pos} valores positivos")
sum = sum/pos
print(f"{sum:.1f}")