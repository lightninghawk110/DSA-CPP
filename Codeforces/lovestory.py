def loveStory(s):
    str = "codeforces"
    count = 0
    i =0
    for value in str:
        if value != s[i]:
            count = count+1
        i = i+1  

    print(count);  


n = int(input())
for i in range(0,n):
    inp = input()
    loveStory(inp)