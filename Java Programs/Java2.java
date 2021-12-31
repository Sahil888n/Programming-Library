import java.util.*;

class Small
{
	public int StringLength(String length)
	{
		int iNum=0;
		char Arr[]=length.toCharArray();
		
		for(char ch:Arr)
		{
			iNum++;
		}
		
		return iNum;
	}
	
	public int CountSmall(String crr)
	{
		int iLength=0,i=0,iCnt=0;
		iLength=StringLength(crr);
		
		for(i=0;i<iLength;i++)
		{
			char c=crr.charAt(i);
			if((c>='a') && (c<='z'))
			{
				iCnt++;
			}
		}
		
		return iCnt;
	}
}

class Java2
{
	public static void main(String arg[])
	{
		int iRes=0;
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string");
		
		String str=sobj.nextLine();
		
		Small obj=new Small();
		iRes=obj.CountSmall(str);
		
		System.out.println("The number of small letters in the string : "+iRes);
	}
}	