import java.util.*;

class Reverse
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
	
	public void StringReverse(String crr)
	{
		int iLength=0,i=0;
		iLength=StringLength(crr);
		for(i=iLength;i>0;i--)
		{
			char ch=crr.charAt((i-1));
			System.out.print(ch);
		}
	}
}

class Java5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string");
		String str=sobj.nextLine();
		
		Reverse robj=new Reverse();
		robj.StringReverse(str);
	}
}