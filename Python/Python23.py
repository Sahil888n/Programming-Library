def Pattern(num):
    i=6
    if(num>0):
        i=i-num
        num=num-1
        print(i,end="   ")
        Pattern(num)
        

def main():
    Pattern(5)
    
if __name__=="__main__":
    main()