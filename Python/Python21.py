class Pattern:
    def __init__(self,R,C):
        self.row=R
        self.col=C
        self.char='A'
        
    def alphabetPattern(self):
        for i in range(self.row):
            self.char='A'
            for j in range(self.col):
                print(self.char, end="  ")
                self.temp=ord(self.char[0]) + 1  #ord method is used to convert str into int
                self.char=chr(self.temp)         #chr method is used to convert int into str
            
            print()


def main():
    row=int(input("Enter the number of Rows :"))
    col=int(input("Enter the number of Columns :"))
    
    obj=Pattern(row,col)
    
    obj.alphabetPattern()
    
    
if __name__=="__main__":
    main()
    
    