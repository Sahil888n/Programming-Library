#Write a program which accept two numbers and return division of them using EXCEPTION HANDLING.


def Division(A,B):
    ans=0.0
    try:
        ans=A/B
    except ZeroDivisionError as obj:
        print("Exception occured")
        print("The Exception is :",obj)
        
    finally:
        print("Inside Finally")
        
    return ans
    

def main():
    no1=int(input("Enter first number :"))
    no2=int(input("Enter second number :"))
    
    ret=Division(no1,no2)
    print("Division is :",ret)

if __name__=="__main__":
    main()