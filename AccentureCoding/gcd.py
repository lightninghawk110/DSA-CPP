num1 = int(input("Enter First Number:"))
num2 = int(input("Enter Second Number:"))

def gcd(a,b):
    if a > b:
        small =  b
    else:
        small = a
    for i in range(1,small+1):
        if(a%i == 0) and (b % i ==0):
            gcd = i
    print("gcd:",gcd)
gcd(num1,num2)