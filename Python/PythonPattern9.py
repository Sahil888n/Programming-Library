#Accept number of rows and number of columns from user and display below 
#pattern.
#Input : iRow = 4 iCol = 5

#Output :        A B C D E
#                A & & & E 
#                A & & & E
#                A B C D E


class Pattern:
    def __init__(self,num1,num2):
        self.row=num1
        self.col=num2
        
    def PatternD(self):
        
        for i in range(1,self.row+1):
            self.char='A'
        
            for j in range(1,self.col+1):
                if((i==1) or (i==self.row) or (j==1) or (j==self.col)):
                    print(self.char,end="    ")
                else:
                    print("&",end="    ")
                
                self.char=ord(self.char)+1
                self.char=chr(self.char) 
                    
                    
            print()
                

def main():
    row=int(input("Enter the number of rows :"))
    col=int(input("Enter the number of columns :"))
    
    obj=Pattern(row,col)
    print("The Pattern is below :")
    obj.PatternD()
    

if __name__=="__main__":
    main()