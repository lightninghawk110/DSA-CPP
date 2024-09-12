def  ultraFastMathematician( a,b):
    return bin(a^b)
print((ultraFastMathematician(int('0b'+input(),2),int('0b'+input(),2)))[2:])