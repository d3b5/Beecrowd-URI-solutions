cash = float(input())
n100,n50,n20,n10,n5,n2 = 0,0,0,0,0,0
c100,c50,c25,c10,c5,c1=0,0,0,0,0,0
coin = int((cash - int(cash))*100)
cash = int(cash)

#notes
if cash >=100:
    n100 = int(cash/100)
    cash = cash%100
if cash >=50:
    n50 = int(cash/50)
    cash = cash%50
if cash >=20:
    n20 = int(cash/20)
    cash = cash%20
if cash >=10:
    n10 = int(cash/10)
    cash = cash%10
if cash >=5:
    n5 = int(cash/5)
    cash = cash%5
if cash >=2:
    n2 = int(cash/2)
    cash = cash%2
else:
    c100 = cash
#coins
if coin>=50:
    c50 = int(coin/50)
    coin = coin%50
if coin>=25:
    c25 = int(coin/25)
    coin = coin%25
if coin>=10:
    c10 = int(coin/10)
    coin = coin%10
if coin>=5:
    c5 = int(coin/5)
    coin = coin%5
if coin>=1:
    c1 = int(coin)


print("NOTAS:")
print(f"{n100} nota(s) de R$ 100.00")
print(f"{n50} nota(s) de R$ 50.00")
print(f"{n20} nota(s) de R$ 20.00")
print(f"{n10} nota(s) de R$ 10.00")
print(f"{n5} nota(s) de R$ 5.00")
print(f"{n2} nota(s) de R$ 2.00")
print("MOEDAS:")
print(f"{c100} moeda(s) de R$ 1.00")
print(f"{c50} moeda(s) de R$ 0.50")
print(f"{c25} moeda(s) de R$ 0.25")
print(f"{c10} moeda(s) de R$ 0.10")
print(f"{c5} moeda(s) de R$ 0.05")
print(f"{c1} moeda(s) de R$ 0.01")

