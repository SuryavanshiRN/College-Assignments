def mergeAlternately(word1, word2):
        s = ""
        n = min(len(word1),len(word2))
        for i in range(n):
            s = s + word1[i] + word2[i]
        if len(word1) > len(word2):
            s = s + word1[n:]
        else:
            s = s + word2[n:]
        return s 
w1=input("word 1: ")      
w2=input("word 2: ") 
print(mergeAlternately(w1,w2))
    

# word 1: hello
# word 2: bye
# hbeylelo
