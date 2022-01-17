def Display(char):

    if((char>='A') and (char<='Z')):
        char=ord(char)+32
        char=chr(char)
        return char
        
    elif((char>='a') and (char<='z')):
        char=ord(char) - 32
        char=chr(char)
        return char
    
    else:
        print("The character you entered is invalid")
        

def main():
    char=input("Enter the character :")
    
    ret=Display(char)
    print("Result is :",ret)
    
if __name__=="__main__":
    main()