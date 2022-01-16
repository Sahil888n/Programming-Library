#Accept number of rows and number of columns from user and display below 
#pattern.
#Input : iRow = 4 iCol = 5

#Output :          
#           A B C D 1
#           F G H 2 J
#           K L 3 O P     
#           Q 4 S T U
#           5 W X Y Z

class Pattern:
    def __init__(self,num1,num2):
        self.row=num1
        self.col=num2
        
    def PatternD(self):
        self.char='A'
        
        for i in range(1,self.row+1):
        
            for j in range(1,self.col+1):
                if(j==self.row+1-i):
                    print(i,end="   ")
                else:
                    print(self.char,end="   ")
                
                self.char=ord(self.char)+1
                self.char=chr(self.char) 
                   
                   
            print()
                

def main():
    row=int(input("Enter the number of rows :"))
    col=int(input("Enter the number of columns :"))
    
    if(row==col):
        obj=Pattern(row,col)
        print("The Pattern is below :")
        obj.PatternD()
        
    else:
        print("Number of rows and columns are not equal")
    

if __name__=="__main__":
    main()