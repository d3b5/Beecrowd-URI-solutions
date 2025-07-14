numbers = input().split()
numbers = [int(i) for i in numbers]
numbers.sort()

if numbers[1]%numbers[0] == 0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")
