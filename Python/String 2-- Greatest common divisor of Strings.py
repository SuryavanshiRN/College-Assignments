import math

def gcdOfStrings(str1, str2):
        if str1+str2 != str2+str1:
            return '""'
        else: 
            g=math.gcd(len(str1),len(str2))
            return str1[0:g]

w1=input("Word 1: ")            
w2=input("Word 2: ")
print(gcdOfStrings(w1,w2))


# Word 1: AbAbAb
# Word 2: Ab
# Ab

# Word 1: ababababab
# Word 2: aba
# --
