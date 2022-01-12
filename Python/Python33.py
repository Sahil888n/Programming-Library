def Display(data):
    for i in range(len(data)):
        temp=data[i]
        
        if((temp%5)==0):
            print(temp,end="    ")


def main():
    num=int(input("Enter the number of elements :"))
    
    listNum=[]
    
    print("Enter the numbers below :")
    
    for i in range(num):
        listNum.append(int(input()))
        
    
    print("The list is :",listNum)
    
    Display(listNum)
    

if __name__=="__main__":
    main()