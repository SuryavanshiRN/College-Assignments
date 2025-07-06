import math
def greatestcandies(candies,extraC):
    c=[]
    for i in range(len(candies)):
        if (candies[i]+extraC)>=max(candies):
            c.append(True)
        else: c.append(False)    
    return c    

candies = [4,2,1,1,2]
extraC = 1
print(greatestcandies(candies,extraC))


# [True, False, False, False, False]
