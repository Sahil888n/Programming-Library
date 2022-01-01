from functools import reduce

def Filternum(no):
    flag=True
    for i in range(2,int(no/2)+1):
        if((no%i)==0):
            flag=False;
            break;
            
    if(flag==True):
        return no;


def Mapnum(no):
    return no*2;
    
def Reducenum(val1,val2):
    if(val1>=val2):
        return val1;
    else:
        return val2;
        

def main():
    num=int(input("Enter the number of elements :"))
    
    Mylist=[];
    
    print("Enter the elements below :");
    for i in range(num):
        Mylist.append(int(input()))
        
    print("The List you entered :",Mylist);
    
    Mylist1=list(filter(Filternum,Mylist))
    print("List after being filtered :",Mylist1);
    
    Mylist2=list(map(Mapnum,Mylist1));
    print("List after being Mapped :",Mylist2);
    
    final=reduce(Reducenum,Mylist2);
    print("Output After Reduction :",final);
    
    
if __name__=="__main__":
    main();
    

        
        