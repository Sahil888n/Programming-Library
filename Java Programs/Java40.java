import java.util.*;

class Java40
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the String :");
		String str=sobj.nextLine();
		
		System.out.println("Entered String :"+str);
		System.out.println("Length of String :"+str.length());
		
		String s1=str.trim();
		
		System.out.println("New string is :"+s1);
		System.out.println("Length of String :"+s1.length());
		
		
		
		/*String s2=str.replaceAll(" ","");
		
		System.out.println("New string is :"+s2);
		System.out.println("Length of String :"+s2.length());*/
		
		
		
		String s2=str.replaceAll("[ ]{2,}"," ");
		//replaceAll has two inputs first one is data you want to find and second one is the data
		//that you want to replace with the first one
		
		System.out.println("New string is :"+s2);
		System.out.println("Length of String :"+s2.length());
		
		
		String s1=str.trim().replaceAll("[ ]{2,}"," ");
		
		String Arr[]=s1.split(" ");
		
		for(int i=0;i<Arr.length;i++)
		{
			System.out.println(Arr[i]);
		}
		
	}
}