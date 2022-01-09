import java.util.*;

class StringX
{
	public String str;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string");
		
		str=sobj.nextLine();
	}
	
	public void Display()
	{
		System.out.println("String is :"+str);
	}
}

class Marvellous extends StringX
{
	public int CountVowel()
	{
		int i=0,iNum=0;
		char Arr[]=str.toCharArray();
		while(i<Arr.length)
		{
			if((Arr[i]=='a') || (Arr[i]=='e') || (Arr[i]=='i') || (Arr[i]=='o') || (Arr[i]=='u') || (Arr[i]=='A') || (Arr[i]=='E') || (Arr[i]=='I') || (Arr[i]=='O') || (Arr[i]=='U'))
			{
				iNum++;
			}
			i++;
		}
		return iNum;
	}
}

class Java23
{
	public static void main(String arg[])
	{
		Marvellous mobj=new Marvellous();
		int iRet=0;
		mobj.Accept();
		mobj.Display();
		
		iRet=mobj.CountVowel();
		System.out.println("The number of vowels in the given string : "+iRet);
	}
}
	