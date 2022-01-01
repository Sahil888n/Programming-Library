#Write a program which contains one lambda function which accepts one parameter and return power of two
#input=4   output=16

power=lambda a : a*a;

def main():
    print("Enter the Number below :");
    num=int(input())

    ret=power(num);
    
    print("Power of two for given Number :",ret);
    
if __name__=="__main__":
    main();