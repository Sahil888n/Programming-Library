#Write a program to remove every thied element from the list of elements and show the list
#input = [5,6,7,8,9]
#Output = Data after removing third element [5,6,8,9]
#       = Data after removing third element [5,6,9]
#       = Data after removing third element [5,6]



def ListRemove(data):
    temp=2
    length=len(data)
    for i in range(length-2):
        if(len(data)>temp):
            data.pop(temp)
            print("Data after removing third element :",data)
        else:
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