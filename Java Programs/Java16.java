import java.util.Scanner;
import java.io.*;

public class Java16
{
    public static void main(String[] args)
    {
        String fname,line,ffname;
        Scanner scan = new Scanner(System.in);
        
        // enter filename along with its extension
        System.out.print("Enter the Existing file name: ");
        fname = scan.nextLine();
		
		System.out.print("Enter the new file name: ");
        ffname = scan.nextLine();
        
        try
        {
			FileOutputStream fos=new FileOutputStream(ffname, true);
			
            FileReader fileReader = new FileReader(fname);
            
            // always wrap the FileReader in BufferedReader
            BufferedReader bufferedReader = new BufferedReader(fileReader);
			
			line = bufferedReader.readLine();
			
			FileWriter fw=new FileWriter(ffname);
			
			fw.write(line);
			
			fw.close();
        }
        catch(IOException ex)
        {
            System.out.println("\nError occurred");
            System.out.println("Exception Name: " +ex);
        }
    }
}