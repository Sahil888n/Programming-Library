import java.util.*;

class Vowel
{
	public int StringLength(String length)
	{
		int iNum=0;
		char Arr[]=length.toCharArray();
		for(char c:Arr)
		{
			iNum++;
		}
		return iNum;
	}
	
	public boolean CheckVowel(String crr)
	{
		int iLength=0,i=0;
		boolean bFlag=false;
		iLength=StringLength(crr);
		for(i=0;i<iLength;i++)
		{
			char ch=crr.charAt(i);
			if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') || (ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U'))
			{
				bFlag=true;
			}
		}
		return bFlag;
	}
}

class Java4
{
	public static void main(String arg[])
	{
		boolean bRet=false;
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string");
		String str=sobj.nextLine();
		
		Vowel vobj=new Vowel();
		bRet=vobj.CheckVowel(str);
		
		if(bRet==true)
		{
			System.out.println("String contains vowel");
		}
		else
		{
			System.out.println("String does not contain any vowel");
		}
	}
}