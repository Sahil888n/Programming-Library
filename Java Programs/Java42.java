import java.util.*;

class Marvellous
{
	public void WordFrequency(String s)
	{
		String s2=s.trim().replaceAll("[ ]{2,}"," ");
		
		String Arr[]=s2.split(" ");
		
		HashMap <String,Integer> hobj=new HashMap<String,Integer>();
		
		System.out.println("Character Array :");
		
		for(String str:Arr)
		{
			if(hobj.containsKey(str))
			{
				hobj.put(str, (hobj.get(str))+1);
			}
			else
			{
				hobj.put(str,1);
			}
		}
		
		System.out.println("Frequency of each Word is :"+hobj);
	}
}

class Java42
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the String :");
		
		String str=sobj.nextLine();
		
		Marvellous mobj=new Marvellous();
		mobj.WordFrequency(str);
	}
}