# Write a recursive program which accept number from user and return summation of its digits

# input = 546
# output = 15(5+4+6)

sum=0

def Summation(num):
    global sum
    
    if(num!=0):
        digit=num%10
        sum=sum+digit
        num=int(num/10)
        Summation(num)
        
    return sum


def main():
    num=0
    num=int(input("Enter the desired number :"))
    
    ret=Summation(num)
    print("The summation of digits in given number :",ret)
    
   
    
if __name__=="__main__":
    main()