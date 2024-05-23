def decitoN(n, num):
    remainder = []
    res = ""
    quotient = num // n
    remainder.append(num%n)
    while(quotient != 0):
        remainder.append(quotient%n)
        quotient = quotient//n
    #print(remainder)
    for i in remainder:
        if(i > 9):
            res = res + (chr(i - 9 + 64)) #assuming it as num, so I added it wrong way...
        else:
            res += str(i)
    return res
n = 12
num = 718
print('result is:')
print((decitoN(n,num))[::-1])