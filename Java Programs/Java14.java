import java.io.FileOutputStream;  
import java.util.Scanner;  

public class Java14 
{  
	public static void main(String args[])  
	{  
		try  
		{  
			Scanner sc=new Scanner(System.in);         //object of Scanner class
			
			System.out.print("Enter the file name: ");  
			
			String name=sc.nextLine();              //variable name to store the file name  
			
			FileOutputStream fos=new FileOutputStream(name, true);  // true for append mode           
			
			fos.close();            //close the file  
			
			System.out.println("file saved.");  
		}  
		catch(Exception e)  
		{  
			e.printStackTrace();          
		}  
	}  
}