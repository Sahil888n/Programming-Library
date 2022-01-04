#Write a program which contains one class named as BankAccount. 
#BankAccount class contains two instance variables as Name & Amount.
#That class contains one class variable as ROI which is initialise to 10.5. 
#Inside init method initialise all name and amount variables by accepting the values from user. 
#There are Four instance methods inside class as Display(), Deposit(), Withdraw(),CalculateIntrest().
#Deposit() method will accept the amount from user and add that value in class instance variable Amount.
#Withdraw() method will accept amount to be withdrawn from user and subtract that amount 
#from class instance variable Amount.
#CalculateIntrest() method calculate the interest based on Amount by considering rate of interest 
#which is Class variable as ROI.
#And Display() method will display value of all the instance variables as Name and Amount.
#After designing the above class call all instance methods by creating multiple objects.


class BankAccount:
    ROI=10.5
    
    def __init__(self,A,B):
        self.Name=A
        self.Amount=B
        
    def Deposit(self,dep):
        self.Amount= self.Amount+dep
        return self.Amount
        
    def Withdraw(self,wit):
        self.Amount=self.Amount - wit
        return self.Amount
        
    def CalculateIntrest(self):
        self.Amount = self.Amount*self.ROI*1
        
    def Display(self):
        print("Name :",self.Name)
        print("Amount with Intrest :",self.Amount)
        

def main():
    string=str(input("Enter your Name :"))
    val=float(input("Enter the initial value :"))
    
    obj=BankAccount(string,val)
    deo=float(input("Enter the value you want to Deposit :"))
    ret=obj.Deposit(deo)
    print("Money after Depositing :",ret)
    
    deo=float(input("Enter the value you want to Withdraw :"))
    ret=obj.Withdraw(deo)
    print("Money after Withdrawing :",ret)
    
    obj.CalculateIntrest()
    
    obj.Display()
    
    
if __name__=="__main__":
    main()
    
    