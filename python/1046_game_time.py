start,fin = input().split()
start,fin = int(start), int(fin)

if start==fin:
    print("O JOGO DUROU 24 HORA(S)")
elif start>fin:
    time = 24-start+fin
    print(f"O JOGO DUROU {time} HORA(S)")
else:
    time = fin-start
    print(f"O JOGO DUROU {time} HORA(S)")