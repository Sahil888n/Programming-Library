#Write a python program to find unique triplets whose three elements gives the sum of zero from an
#array of integers
#input = [6,0,-6,5,2,-7]
#output = The triplets are : ([6,0,-6]) ([5,2,-7])


from itertools import *

def Triplets(data):
    data.sort()
    result=[]
    
    possibilities=list(combinations(data,3))
    
    print("The triplets whose elements gives the sum 0 are below : ")
    for i in possibilities:
        if(sum(i)==0):
            if(result!=i):
                result=i
                print(result)

    

def main():
    num=int(input("Enter the number of elements :"))
    
    listnum=[]
    
    print("Enter the numbers below :")
    for i in range(num):
        listnum.append(int(input()))
        
    print("The numbers you have entered : ",listnum)
    
    Triplets(listnum)
    
    

if __name__=="__main__":
    main()