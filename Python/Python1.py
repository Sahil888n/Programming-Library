def Addition(data):
    sum=0
    
    for i in range(len(data)):
        sum=sum + data[i];
        
    return sum;


def main():
    no=int(input("Enter how many elements you want : "));
    
    newList=[];
    
    print("Enter the elements below :");
    for i in range(no):
        newList.append(int(input()));
        
    print("List is =",newList);
    
    ret=Addition(newList);
    print("The addition of list elements : ",ret);
    

if __name__=="__main__":
    main();