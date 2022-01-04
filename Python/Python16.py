#Write a program which contains one class named as Numbers. 
#Arithmetic class contains one instance variables as Value. 
#Inside init method initialise that instance variables to the value which is accepted from user. 
#There are four instance methods inside class as ChkPrime(), ChkPerfect(), SumFactors(), 
#Factors().
#ChkPrime() method will returns true if number is prime otherwise return false.
#ChkPerfect() method will returns true if number is perfect otherwise return false.
#Factors() method will display all factors of instance variable.
#SumFactors() method will return addition of all factors. Use this method in any another method 
#as a helper method if required.
#After designing the above class call all instance methods by creating multiple objects.


class Numbers:
    def __init__(self,A):
        self.value=A
        
    def ChkPrime(self):
        flag=True
        for i in range(2,int(self.value/2)+1):
            if((self.value%i)==0):
                flag=False
                break
                
        if(flag==True):
            print("The given number is a Prime Number")
            print()
        else:
            print("The given number is not a Prime Number")
            print()
            
        
    def SumFactors(self):
        sum=0
        for i in range(1,int(self.value/2)+1):
            if((self.value%i)==0):
                sum=sum+i
        
        return sum
        
        
    def ChkPerfect(self):
        sumfact=self.SumFactors()
        
        if(sumfact==self.value):
            print("The given number is perfect Number")
            print()
        else:
            print("The given number is not perfect number")
            print()
            
    
    def Factors(self):
        print("Factors of given number are Below :")
        
        for i in range(1,int(self.value/2)+1):
            if((self.value%i)==0):
                print(i, end="  ")
        
        print()


def main():
    num=int(input("Enter the desired Number :"))
    print()
    
    obj=Numbers(num)
    obj.ChkPrime()
    obj.ChkPerfect()
    
    ret=obj.SumFactors()
    print("The sum of all factors of given Number :",ret)
    print()
    
    obj.Factors()
    

if __name__=="__main__":
    main()