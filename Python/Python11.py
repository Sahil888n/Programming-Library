class Demo:
    Value=20
    
    def __init__(self,A,B):
        self.no1=A
        self.no2=B
        
    def Fun(self):
        print("First instance Variable :",self.no1);
        
    def Gun(self):
        print("Second instance Variable :",self.no2);
    
    @classmethod
    def Sun(cls):
        cls.temp=Value
        print("Value of class Variable :",temp)
        

def main():
    obj1=Demo(12,23)
    obj2=Demo(34,45)
    
    print("First object :-")
    obj1.Fun();
    obj1.Gun();
    
    print("Second object :-")
    obj2.Fun();
    obj2.Gun();
    
    
if __name__=="__main__":
    main()