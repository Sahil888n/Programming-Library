import java.util.*;

class Marvellous
{
	public void CharFrequency(String s)
	{
		String s2=s.replaceAll(" ","");
		
		char Arr[]=s2.toCharArray();
		
		HashMap <Character,Integer> hobj=new HashMap<Character,Integer>();
		
		System.out.println("Character Array :");
		
		for(char ch:Arr)
		{
			if(hobj.containsKey(ch))
			{
				i=hobj.get(ch);
				hobj.put(ch,i+1);
			}
			else
			{
				hobj.put(ch,1);
			}
		}
		
		System.out.println("Frequency of each character is :"+hobj);
	}
}

class Java41
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the String :");
		
		String str=sobj.nextLine();
		
		Marvellous mobj=new Marvellous();
		mobj.CharFrequency(str);
	}
}