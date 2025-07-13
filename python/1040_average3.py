n1,n2,n3,n4=input().split()
n1,n2,n3,n4=float(n1),float(n2),float(n3),float(n4)
avg = ((n1*2)+(n2*3)+(n3*4)+n4)/10
print(f"Media: {avg:.1f}")
if avg>=7:
    print("Aluno aprovado.")
elif 5 <= avg <= 6.9:
    print("Aluno em exame.")

    n = float(input())
    print(f"Nota do exame: {n:.1f}")
    #print("\n")
    avg = (n + avg) / 2

    if avg >= 5:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    print(f"Media final: {avg:.1f}")
else:
    print("Aluno reprovado.")


