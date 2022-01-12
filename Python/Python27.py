# Write recursive program which display below pattern
# input=10
# output= 1   2   3   4   5   6   7   8   9   10

i=1
def Pattern(num):
    global i
    
    if(num>0):
        print(i, end="   ")
        i=i+1
        num=num-1
        Pattern(num)


def main():
    num=0
    num=int(input("Enter the desired number :"))
    
    print("The Pattern is Below :")
    
    Pattern(num)
    print()
    
   
    
if __name__=="__main__":
    main()