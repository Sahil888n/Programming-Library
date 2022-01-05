#Write a python function that takes a sequence of numbers and determines whether all the numbers
#are different from each other
#Input = 23 5 8 7 32
#Output = All the numbers are different

#Input = 12 8 9 8 6
#Output= The numbers are not different

def CheckList(data):
    flag=True
    
    for i in range(len(data)-1):
        num=data[i]
        
        for j in range(i+1,len(data)):
            if(num==data[j]):
                flag=False
                break
                
    return flag


def main():
    num=int(input("Enter the number of elements :"))
    
    listnum=[]
    
    print("Enter the numbers below :")
    for i in range(num):
        listnum.append(int(input()))
        
    print("The numbers you have entered : ",listnum)
    
    ret=CheckList(listnum)
    
    if(ret==True):
        print("All the numbers are different")
    else:
        print("The numbers are not different")


if __name__=="__main__":
    main()