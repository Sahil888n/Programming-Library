/*Write Java program which accept array of characters from user and 
accept one character. Return occurrence of that character without 
considering case.

Input : b N e B R b A i G i B
b
Output : 4
*/

import java.util.*;

class Display
{
	public int  CountCharacter(char Arr[],char ch)
	{
		int iCnt=0;
		
		if((ch>='a') && (ch<='z'))
		{
			ch=(char)((int)ch-32);
		}
		
		for(int i=0;i<Arr.length;i++)
		{
			if( ( Arr[i]==ch ) || ( Arr[i]==(char)((int)ch+32)))
			{
				iCnt++;
			}
		}
		
		return iCnt;
	}
}

class Array17
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the Array of characters :");
		char Arr[]=sobj.next().toCharArray();
		
		System.out.println("Enter the character that you want to Search :");
		char ch=sobj.next().charAt(0);
		
		Display dobj=new Display();
		int iRet=dobj.CountCharacter(Arr,ch);
		
		System.out.println("Occurance of given character :"+iRet);
		
	}
}