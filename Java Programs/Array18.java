/*Write Java program which accept array of characters from user and 
return difference between frequency of capital and frequency of small 
characters.

Input : b N e B R b A I O G i
Output : 3 (7 - 4)
*/

import java.util.*;

class Display
{
	public int  CountFrequency(char Arr[])
	{
		int iSmall=0,iCapital=0;
		
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]>='a') && (Arr[i]<='z'))
			{
				iSmall++;
			}
			else if((Arr[i]>='A') && (Arr[i]<='Z'))
			{
				iCapital++;
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

class Array18
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the Array of characters :");
		char Arr[]=sobj.next().toCharArray();

		System.out.print("Array :");
		
		for(int i=0;i<Arr.length;i++)
		{
			System.out.print(Arr[i]+"  ");
		}
		System.out.println();
		
		Display dobj=new Display();
		int iRet=dobj.CountFrequency(Arr);
		
		System.out.println("Difference between frequency of capital and small Character :"+iRet);
	}
}