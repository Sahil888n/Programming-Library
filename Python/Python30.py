# Write a python program to print a string, convert the string to a list and print all the characters
# and their frequencies


def Repetition(data):
    for i in range(len(data)):
        char=data[i]
        freq=0
        for i in range(len(data)):
            if(char==data[i]):
                freq=freq+1
        
        print("Frequency of character ",char ,": ",freq)
    

def main():
    stringX=str(input("Enter the desired string :"))
    
    liststr=[]
    
    for i in range(len(stringX)):
        liststr.append(stringX[i])
        
    print("List is :"liststr)
    
    Repetition(liststr)
    
    
if __name__=="__main__":
    main()