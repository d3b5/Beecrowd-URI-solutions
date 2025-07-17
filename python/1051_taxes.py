salary = float(input())
salary_taxed_on = salary-2000
tax=float(0)

if salary_taxed_on>0:
    if salary_taxed_on >= 1000:
        tax += 1000 * 0.08
        salary_taxed_on -= 1000
    else:
        tax += salary_taxed_on * 0.08
        salary_taxed_on =0

if salary_taxed_on>0:
    if salary_taxed_on >= 1500:
        tax += 1500 * 0.18
        salary_taxed_on -= 1500
    else:
        tax += salary_taxed_on * 0.18
        salary_taxed_on = 0

if salary_taxed_on > 0:
    tax += salary_taxed_on * 0.28

if tax==0:
    print('Isento')
else:
    print(f"R$ {tax:.2f}")
