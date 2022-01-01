def Maximum(data):
    max=0
    
    for i in range(len(data)):
        if(max<data[i]):
            max=data[i];
            
        
    return max;


def main():
    no=int(input("Enter how many elements you want : "));
    
    newList=[];
    
    print("Enter the elements below :");
    for i in range(no):
        newList.append(int(input()));
        
    print("List is =",newList);
    
    ret=Maximum(newList);
    print("The Maximum number in the List : ",ret);
    

if __name__=="__main__":
    main();