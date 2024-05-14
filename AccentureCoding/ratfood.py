def calculate(r,unit,arr,n):
    sum = 0
    if n==0 :
        return -1
    food = r*unit
    for num in arr :
        sum = sum + num
        if (sum >= food):
                return sum - food
        
    else :
         return 0
r = 7
unit = 2
n = 8
arr = [2,8,3,5,7,4,1,2]
print(calculate(r,unit,arr,n))