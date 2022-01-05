//Question 5
import java.io.File;
import java.util.Scanner;

public class Java15
{
    public static void main(String[] args)
	{
		try
		{
			Scanner sobj=new Scanner(System.in);
			
			System.out.print("Enter the Directory :");  
			
			String name=sobj.nextLine();
			
			File file = new File(name);  // creates a file object

			String[] fileList = file.list();  // returns an array of all files

			for(String str : fileList)
			{
				System.out.println(str);
			}
		}
		
		catch(Exception obj)
		{
			obj.printStackTrace(); 
		}
	}
}