//Question 4
import java.awt.Desktop;  
import java.io.*; 
import java.util.Scanner;
 
public class Java13   
{  
	public static void main(String[] args)   
	{  
		try  
		{  
			Scanner sc=new Scanner(System.in);         //object of Scanner class
			
			System.out.print("Enter the file name: ");  
			
			String name=sc.nextLine();
			
			File file = new File(name);   
			
			FileWriter fw=new FileWriter(name);
			
			System.out.println("Enter the Data to add in File :");
			
			String str=sc.nextLine();
			
			fw.write(str);
			fw.close();
			
			System.out.println("Data added successfully");
		}
		
		catch(Exception e)  
		{  
			e.printStackTrace();  
		}  
	}  
}