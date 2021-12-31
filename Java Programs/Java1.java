import java.util.*;

class Capital
{
	public int StringLength(String name)
	{
		int iLength=0;
		char Arr[]=name.toCharArray();
		
		for(char c:Arr)
		{
			iLength++;
		}
		return iLength;
	}
	
	public int CapitalCount(String leng)
	{
		int iRec=0,iCnt=0;
		iRec=StringLength(leng);
		
		for(int i=0;i<iRec;i++)
		{
			char ch=leng.charAt(i);
			
			if((ch>='A') && (ch<='Z'))
			{
				iCnt++;
			}
		}
		
		return iCnt;
	}
}

class Java1
{
	public static void main(String arg[])
	{
		int iRes=0;
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string");
		
		String str=sobj.nextLine();
		
		Capital cobj=new Capital();
		iRes=cobj.CapitalCount(str);
		
		System.out.println("The number capital letters in the string = "+iRes);
	}
}