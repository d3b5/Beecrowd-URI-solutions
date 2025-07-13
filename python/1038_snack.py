x,y=input().split()
x=int(x)
y=int(y)
match x:
    case 1:
        price=4
    case 2:
        price=4.5
    case 3:
        price=5
    case 4:
        price=2
    case 5:
        price=1.5

z=float(price*y)
print(f"Total: R$ {z:.2f}")