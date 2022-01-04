#Write a program which contains one class named as BookStore. 
#BookStore class contains two instance variables as Name ,Author. 
#That class contains one class variable as NoOfBooks which is initialise to 0. 
#There is one instance methods of class as Display which displays name , Author and number of 
#books. 
#Initialise instance variable in init method by accepting the values from user as name and author.
#Inside init method increment value of NoOfBooks by one.
 
#After creating the class create the two objects of BookStore class as
#Obj1 = BookStore(“Linux System Programming”, “Robert Love”)
#Obj1.Display() # Linux System Programming by Robert Love. No of books : 1
#Obj2 = BookStore(“C Programming”, “Dennis Ritchie”)
#Obj2.Display() # C Programming by Dennis Ritchie. No of books : 2


class BookStore:
    NoOfBooks=0
    def __init__(self,str1,str2):
        self.Name=str1
        self.Author=str2
        self.NoOfBooks= self.NoOfBooks+1
        
    def Display(self):
        print("Name of Book :",self.Name)
        print("Name of Author :",self.Author)
        print("No of Books :",self.NoOfBooks)


def main():
    print("Enter the Name of the Book :")
    book1=str(input())
    
    print("Enter the Name of the Author :")
    book2=str(input())
    
    obj=BookStore(book1,book2)
    obj.Display()
    
    print("Next Book :")
    
    print("Enter the Name of the Book :")
    book1=str(input())
    
    print("Enter the Name of the Author :")
    book2=str(input())
    
    obj2=BookStore(book1,book2)
    obj2.Display()
    
    
if __name__=="__main__":
    main()