start_h,start_m,fin_h,fin_m = input().split()
start_h,start_m,fin_h,fin_m = int(start_h),int(start_m),int(fin_h),int(fin_m)

if start_h==fin_h and start_m==fin_m:
    hr = 24
    min = 0

elif fin_m >= start_m:
    min = fin_m - start_m
    if fin_h >= start_h:
        hr = fin_h - start_h
    else:
        hr = fin_h+24 - start_h
elif fin_m < start_m:
    min = fin_m+60-start_m
    fin_h-=1

    if fin_h >= start_h:
        hr = fin_h - start_h
    else:
        hr = fin_h+24 - start_h
print(f"O JOGO DUROU {hr} HORA(S) E {min} MINUTO(S)")