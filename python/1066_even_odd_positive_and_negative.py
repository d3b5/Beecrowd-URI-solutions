even,odd,pos,neg=0,0,0,0
for i in range(0,5):
    x=int(input())
    if x%2==0:
        even+=1
    else:
        odd+=1
    if x>0:
        pos+=1
    elif x<0:
        neg+=1
print(f"{even} valor(es) par(es)")
print(f"{odd} valor(es) impar(es)")
print(f"{pos} valor(es) positivo(s)")
print(f"{neg} valor(es) negativo(s)")