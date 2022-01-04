/*Write java program which accept array of characters from user and 
count number of capital characters.
Input : b N j B R b A d G G
Output : 6
*/

import java.util.*;

class Display
{
	public int Capital(char Arr[])
	{	
	int iCnt=0;
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]>='A') && (Arr[i])<='Z')
			{
				iCnt++;
			}
		}
		
		return iCnt;
	}
	
}

class Array13
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the Array below :");
		char Arr[]=sobj.next().toCharArray();
		
		Display dobj=new Display();
		int iRet=dobj.Capital(Arr);
		
		System.out.println("Number of capital elements in Array are :"+iRet);
		
		System.out.println();
	}
}