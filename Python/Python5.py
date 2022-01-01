def ChkPrimeSum(data):
    sum=0
    
    for i in range(len(data)):
        temp=data[i];
        tempX=int(temp/2)
        flag=True;
       
        for j in range(2,(tempX+1)):
            if((temp%j)==0):
                flag=False;
                
        if(flag==True):
            sum=sum+temp;
            
            
    return sum;

        
def main():
    no=int(input("Enter how many elements you want : "));
    
    newList=[];
    
    print("Enter the elements below :");
    for i in range(no):
        newList.append(int(input()));
        
    print("List is =",newList);
    
    
    ret=ChkPrimeSum(newList);
    print("The addition of Prime numbers in List :",ret);
    

if __name__=="__main__":
    main();