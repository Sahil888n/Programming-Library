def Frequency(data,value):
    freq=0;
    
    for i in range(len(data)):
        if(value == data[i]):
            freq= freq+1;
            
        
    return freq;


def main():
    no=int(input("Enter how many elements you want : "));
    
    newList=[];
    
    print("Enter the elements below :");
    for i in range(no):
        newList.append(int(input()));
        
    print("List is =",newList);
    
    num=int(input("Enter the element to search in the List : "));
    
    ret=Frequency(newList,num);
    print("The frequency of given number in the List : ",ret);
    

if __name__=="__main__":
    main();