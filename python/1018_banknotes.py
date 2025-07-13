cash = int(input())
print(cash)
n100,n50,n20,n10,n5,n2,n1 = 0,0,0,0,0,0,0
while cash > 0:
    if cash>=100:
        n100 = int(cash/100)
        cash = cash%100
    elif cash>=50:
        n50 = int(cash/50)
        cash = cash%50
    elif cash>=20:
        n20 = int(cash/20)
        cash = cash%20
    elif cash>=10:
        n10 = int(cash/10)
        cash = cash%10
    elif cash>=5:
        n5 = int(cash/5)
        cash = cash%5
    elif cash>=2:
        n2 = int(cash/2)
        cash = cash%2
    elif cash>=1:
        n1 = cash
        break
print(f"{n100} nota(s) de R$ 100,00")
print(f"{n50} nota(s) de R$ 50,00")
print(f"{n20} nota(s) de R$ 20,00")
print(f"{n10} nota(s) de R$ 10,00")
print(f"{n5} nota(s) de R$ 5,00")
print(f"{n2} nota(s) de R$ 2,00")
print(f"{n1} nota(s) de R$ 1,00")
