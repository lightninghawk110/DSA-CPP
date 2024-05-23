def Count(num):
    count = 0
    while(num%2==0 and num!=0):
        count+=1
        num= num//2
    return count
def maxExponent(a,b):
    max = 0
    for i in range(a,b+1):
        temp = Count(i)
        if(temp>max):
            max= i

    return max

a = 7
b=12
print(maxExponent(a,b))
