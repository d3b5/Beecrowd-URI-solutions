x=int(input())
y=int(input())
if x>y:
    x,y=y,x
s = 0
for i in range(x+1,y,1):
    if i % 2 == 1:
        s += i
print(s)
