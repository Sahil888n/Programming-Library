def Difference(data):
    sumOdd=0
    sumEven=0
    
    for i in range(len(data)):
        temp=data[i]
        
        if((temp%2)==0):
            sumEven = sumEven + temp
            
        else:
            sumOdd = sumOdd + temp
            
    if(sumEven >=sumOdd):
        return (sumEven - sumOdd)
    else:
        return (sumOdd - sumEven)
        

def main():
    num=int(input("Enter the number of elements :"))

    listNum=[]
    
    print("Enter the number below :")
    
    for i in range(num):
        listNum.append(int(input()))
        
    print("The list is :",listNum)
    
    ret=Difference(listNum)
    
    print("The difference between even and odd numbers :",ret)
    

if __name__=="__main__":
    main()