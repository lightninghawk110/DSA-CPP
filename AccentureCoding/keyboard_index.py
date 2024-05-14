def timeTakenToMail(keyboard: str, s: str) -> int:
    sum,prev=0,0 #initilize like this
    for char in s : #for iterating char in string s
        index = keyboard.index(char) #index of a character of s  in string keyboard
        
        sum=sum+abs(prev- index) # finding sum of diff of distance
        prev = index #storing current in prev and moving index
    return(sum)
