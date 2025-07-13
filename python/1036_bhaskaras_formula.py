from math import sqrt
a,b,c = input().split()
a,b,c = float(a),float(b),float(c)
d =  b**2 - 4*a*c
if d < 0 or a==0:
    print("Impossivel calcular")
else:
    x1 = (-b + sqrt(d)) / (2*a)
    x2 = (-b - sqrt(d)) / (2*a)
    print(f"R1 = {x1:.5f}")
    print(f"R2 = {x2:.5f}")