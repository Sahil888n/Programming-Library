import java.util.*;

class Difference
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
	
	public int FreqDifference(String freq)
	{
		int iLength=0,iCapital=0,iSmall=0;
		iLength=StringLength(freq);
		
		for(int i=0;i<iLength;i++)
		{
			char ch=freq.charAt(i);
			
			if((ch>='A') && (ch<='Z'))
			{
				iCapital++;
			}
			else if((ch>='a') && (ch<='z'))
			{
				iSmall++;
			}
		}
		
		if(iCapital>=iSmall)
		{
			return (iCapital-iSmall);
		}
		else
		{
			return (iSmall-iCapital);
		}
	}
}

class Java3
{
	public static void main(String arg[])
	{
		int iRet=0;
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the String");
		
		String str=sobj.nextLine();
		
		Difference dobj=new Difference();
		iRet=dobj.FreqDifference(str);
		
		System.out.println("Difference between count of capital and small letters : "+iRet);
	}
}
		