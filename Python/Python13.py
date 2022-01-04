class Arithmetic:
    def __init__(self):
        self.Value1=0
        self.Value2=0
        
    def Accept(self):
        self.Value1=int(input("Enter first Number :"))
        self.Value2=int(input("Enter second Number :"))
        
    def Addition(self):
        return self.Value1+self.Value2
        
    def Subtraction(self):
        return self.Value1-self.Value2
        
    def Multiplication(self):
        return self.Value1*self.Value2
        
    def Division(self):
        return self.Value1/self.Value2
            

def main():
    obj1=Arithmetic()
    obj1.Accept()
    ret=obj1.Addition()
    print("Addition :",ret)
    
    ret=obj1.Subtraction()
    print("Subtraction :",ret)
    
    ret=obj1.Multiplication()
    print("Multiplication :",ret)
    
    ret=obj1.Division()
    print("Division :",ret)
    
    
if __name__=="__main__":
    main()