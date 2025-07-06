def can_place_flowers(flowerbed,n):
    j=0
    for i in range(len(flowerbed)):
        if flowerbed[i]==0 and flowerbed[i-1]==0 and flowerbed[i+1]==0:
            flowerbed[i]=1
            j=j+1
    if n==j:
        return "true"
    else: return "false"   

flowerbed = [1,0,0,0,1]       
n=2
print(can_place_flowers(flowerbed,n))

#true
