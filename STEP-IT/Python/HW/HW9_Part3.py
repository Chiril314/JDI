sir = input("Introdu un text: ")

ans = ""
word = ""
for i in range(len(sir)):
    if sir[i] != " ":
        word += sir[i]

    if sir[i] == " " or i == len(sir) - 1:
        newWord = ""
        for j in range(len(word)):
            newWord += word[j]
        for j in range(len(word) - 1, -1, -1):
            newWord += word[j]
        ans += newWord + " "
        word = ""

print(ans.strip())