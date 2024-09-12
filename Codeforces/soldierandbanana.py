def soldierBanana(k,n,w):
        cost = 0
        for i in range(1,w+1):
                cost += i*k
        return abs(cost-n)
print(soldierBanana(3,17,4))