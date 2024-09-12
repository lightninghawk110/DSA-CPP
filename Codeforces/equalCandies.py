def equalCandies(n,arr):
    minimum = 0
    sum = 0
    minimum = min(arr)
    for i in arr:
        if(i == min):
            continue
        sum+=abs(i-minimum)
    return sum
arr=[100000]
print(equalCandies(1,arr))
