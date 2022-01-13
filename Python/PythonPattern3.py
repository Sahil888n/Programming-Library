# Accept number of rows and number of columns from user and display below 
# pattern.
# Input : iRow = 4 iCol = 4
# Output : 
#       * * * *
#       * * * #
#       * * # #
#       * # # #


class Pattern:
    def __init__(self,num1,num2):
        self.row=num1
        self.col=num2
        
    def PatternC(self):
        self.temp=self.row+1
        for i in range(1,self.row+1):
            for j in range(1,self.col+1):
                if(j<self.temp):
                    print("*",end="    ")
                else:
                    print("#",end="    ")
                    
            print()
            self.temp-=1
                

def main():
    row=int(input("Enter the number of rows :"))
    col=int(input("Enter the number of columns :"))
    
    obj=Pattern(row,col)
    print("The Pattern is below :")
    obj.PatternC()
    

if __name__=="__main__":
    main()
    