import java.awt.Desktop;  
import java.io.*; 
import java.util.Scanner;
 
public class Java11   
{  
	public static void main(String[] args)   
	{  
		try  
		{  
			Scanner sc=new Scanner(System.in);         //object of Scanner class
			
			System.out.print("Enter the file name: ");  
			
			String name=sc.nextLine();
			
			File file = new File(name);  
			
			if(!Desktop.isDesktopSupported())//check if Desktop is supported by Platform or not 			
			{  
				System.out.println("not supported");  
				return;  
			}  
			
			Desktop desktop = Desktop.getDesktop(); 
		
			if(file.exists())         //checks file exists or not 
			
			desktop.open(file);       //opens the specified file  
		}
		
		catch(Exception e)  
		{  
			e.printStackTrace();  
		}  
	}  
}