def productSmallestPair(sum,arr):
       arr.sort()
       if(arr[0] + arr[1]) < sum:
              return arr[0] * arr[1]
       else :
            return 0

arr=[5,2,4,3,9,7,1]
sum = 9
print(productSmallestPair(sum,arr))

