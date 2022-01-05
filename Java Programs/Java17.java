import java.io.*;
import java.util.Scanner;

public class Java17
{
    public static void main(String args[])
    {
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter the File name: ");
		String str=scan.nextLine();
		try
		{
			File f = new File(str);

			if (f.exists())
			{
				System.out.println("Regular");
			}

			else
			{
				System.out.println("It is not Regular");
			}
		}
		
		catch(Exception e)
		{
			e.printStackTrace();
		}

    }
}