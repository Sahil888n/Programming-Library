def Summation(num):
    if(num==0):
        return 0
    return (num%10 + Summation(int(num/10)))
    
def main():
    num=int(input("Enter the number :"))
    ret=Summation(num)
    print("The summation of digits of given Number :",ret)
    
if __name__=="__main__":
    main()