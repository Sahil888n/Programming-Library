def Minimum(data):
    i=0;
    min=data[i];
    
    for i in range(len(data)):
        if(min > data[i]):
            min=data[i];
            
        
    return min;


def main():
    no=int(input("Enter how many elements you want : "));
    
    newList=[];
    
    print("Enter the elements below :");
    for i in range(no):
        newList.append(int(input()));
        
    print("List is =",newList);
    
    ret=Minimum(newList);
    print("The Minimum number in the List : ",ret);
    

if __name__=="__main__":
    main();