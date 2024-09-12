


word = input().strip().lower()
distinct_chars = set(word)
count = len(distinct_chars)

if count % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
