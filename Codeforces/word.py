def word(s):
    countupr = 0
    countlwr = 0
    for char in s:
        if char.isupper(): 
                countupr+=1
        else:
             countlwr+=1
    # print(countupr)
    # print(countlwr)
    if(countupr>countlwr):
        return s.upper()
    else:
        return s.lower()
print(word(input()))