def noOfCarries(num1,num2):
    carry = 0
    sum =0 
    count = 0
    while (num1!=0) and (num2!=0):
        rem1 = num1%10
        rem2 = num2%10
        sum = rem1+rem2 + carry
        if(sum >9):
            carry =  sum // 10
            count = count+1
        else:
            carry = 0
        num1 = num1//10
        num2 = num2//10
        
    return count

n1 = 5451
n2 = 549
print("count = ",noOfCarries(n1,n2))
