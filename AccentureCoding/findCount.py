def calculate(arr,num,diff):
    count=0
    for n in arr:
        if (abs(n-num) <= diff):
            count = count+1
    return count

arr = [12,3,14,56,77,13]
num = 14
diff = 1
print(calculate(arr,num,diff))
