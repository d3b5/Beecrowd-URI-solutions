numbers = input().split()
a,b,c = float(numbers[0]),float(numbers[1]),float(numbers[2])
numbers = [float(i) for i in numbers]
numbers.sort()

if numbers[0]+numbers[1] > numbers[2]:
    perimeter = numbers[2]+numbers[1]+numbers[0]
    print(f"Perimetro = {perimeter:.1f}")
else:
    trapizium = 0.5*(a+b)*c
    print(f"Area = {trapizium:.1f}")