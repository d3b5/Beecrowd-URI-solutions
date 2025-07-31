n=int(input())
in_num,out_num=0,0
for i in range(n):
    x=int(input())
    if 10<=x<=20:
        in_num+=1
    else:
        out_num+=1
print(f"{in_num} in")
print(f"{out_num} out")