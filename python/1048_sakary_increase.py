salary = float(input())

if 0 <= salary <= 400:
    r =15
    increased = salary*r/100
elif 400 <= salary <= 800:
    r =12
    increased = salary*r/100
elif 800 <= salary <= 1200:
    r =10
    increased = salary*r/100
elif 1200 <= salary <= 2000:
    r =7
    increased = salary*r/100
else:
    r=4
    increased = salary*r/100

print(f"Novo salario: {salary+increased:.2f}")
print(f"Reajuste ganho: {increased:.2f}")
print(f"Em percentual: {r} %")