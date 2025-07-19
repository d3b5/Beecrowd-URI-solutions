a=float(input())
b=float(input())
c=float(input())
d=float(input())
e=float(input())

l=[a,b,c,d,e]
even=0
for x in l:
    if x%2==0:
        even+=1

print(f"{even} valores pares")
