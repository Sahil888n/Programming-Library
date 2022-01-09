def Summation(num):
    if(num==1):
        return num
    else:
        return (num*Summation(num-1))
    
def main():
    num=int(input("Enter the number :"))
    ret=Summation(num)
    print("The summation of digits of given Number :",ret)
    
if __name__=="__main__":
    main()