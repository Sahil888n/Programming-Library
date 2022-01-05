#Write a program to remove every third element from list and print that element. At the end print 
#the remaining list.
#input =The numbers you have entered :  [12, 3, 56, 7, 90

#Output :
#Removed element : 56
#Removed element : 7
#Removed element : 90

#Final list : [12, 3]


def ListRemove(data):
    temp=2
    length=len(data)
    for i in range(length-2):
        if(len(data)>temp):
            ret=data.pop(temp)
            print("Removed element :",ret)
        
 
    print("Final list :",data)
            
            

def main():
    num=int(input("Enter the number of elements :"))
    
    listnum=[]
    
    print("Enter the numbers below :")
    for i in range(num):
        listnum.append(int(input()))
        
    print("The numbers you have entered : ",listnum)
    
    ListRemove(listnum)
    
    

if __name__=="__main__":
    main()