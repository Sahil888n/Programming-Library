#Write a program which contains one lambda function which accepts two parameter and return their multiplication
#input=4  8   output=32

Mult=lambda a,b : a*b;

def main():
    num1=int(input("Enter the First Number :" ))
    
    num2=int(input("Enter the Second Number :" ))

    ret=Mult(num1,num2);
    
    print("Multiplication of given two Numbers :",ret);
    
if __name__=="__main__":
    main();