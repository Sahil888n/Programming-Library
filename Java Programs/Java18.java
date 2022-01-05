import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class Java18 {

    public static void main(String args[]) throws IOException
	{
        Scanner reader = new Scanner(System.in);
        boolean success = false;

        System.out.println("Enter path of directory to create");
        String dir = reader.nextLine();

        // Creating new directory in Java, if it doesn't exists
        File directory = new File(dir);
        if (directory.exists())
		{
            System.out.println("Directory already exists ...");

        } 
		else
		{
            System.out.println("Directory not exists, creating now");

            success = directory.mkdir();
            if (success)
			{
                System.out.printf("Successfully created new directory : %s%n", dir);
            } 
			else
			{
                System.out.printf("Failed to create new directory: %s%n", dir);
            }
        }
        // close Scanner to prevent resource leak
        reader.close();
    }
}