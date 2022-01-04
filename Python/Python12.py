class Circle:
    PI=3.14
    
    def __init__(self):
        self.Radius=0
        self.Area=0
        self.Circumference=0
        
    def Accept(self):
        self.Radius=float(input("Enter the Radius :"))
    
    def CalculateArea(self):
        self.Area=self.PI*self.Radius*self.Radius
        
    def CalculateCircumference(self):
        self.Circumference=2*self.PI*self.Radius
        
    def Display(self):
        print("Radius of given circle :",self.Radius)
        print("Area of given circle :",self.Area)
        print("Circumference of given circle :",self.Circumference)
        
        
def main():
    print("First circle :-")
    obj1=Circle()
    obj1.Accept()
    obj1.CalculateArea()
    obj1.CalculateCircumference()
    obj1.Display()
    
    print("Second circle :-")
    
    obj2=Circle()
    obj2.Accept()
    obj2.CalculateArea()
    obj2.CalculateCircumference()
    obj2.Display()
    
    
if __name__=="__main__":
    main()
        