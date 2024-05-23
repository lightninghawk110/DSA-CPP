def replacecharacter(userinput,str1,str2):
    result=""
    for ch in userinput:
        if(ch == str1):
            result = result + str2
        elif(ch == str2):
            result = result + str1
        else:
            result = result + ch
    return result
    

userinput = "apples"
str1 = "a"
str2 = "p"
print(replacecharacter(userinput,str1,str2))