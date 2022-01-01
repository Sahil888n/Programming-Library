from functools import reduce

def main():
    num=int(input("Enter the number of elements :"))
    
    Mylist=[];
    
    print("Enter the elements below :");
    for i in range(num):
        Mylist.append(int(input()))
        
    print("The list you Entered :",Mylist);
    
    Mylist1=list(filter(lambda no : ((no%2)==0),Mylist));
    print("The list after being filtered : ",Mylist1);
    
    Mylist2=list(map(lambda no : no*no ,Mylist1));
    print("The list after being Mapped : ",Mylist2);
    
    finalnum=reduce(lambda a,b : a+b,Mylist2);
    
    print("Output after reduce :",finalnum);
    
    
if __name__=="__main__":
    main();
    
    
    
    
    