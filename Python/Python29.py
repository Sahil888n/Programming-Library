# Write a recursive program which accept number fron user abd return its factorial

# input = 5
# output = 120

fact=1
def Factorial(num):
    global fact
    
    if(num>0):
        fact=fact*num
        num=num-1
        Factorial(num)
        
    return fact
    

def main():
    num=0
    num=int(input("Enter the desired number :"))
    
    ret=Factorial(num)
    print("The Factorial of given number :",ret)
    
   
    
if __name__=="__main__":
    main()