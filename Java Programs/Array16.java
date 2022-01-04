/*Write Java program which accept array of characters from user and 
replace each small character with its corresponding capital character.

Input : b N j B R b A d G G
Output : B N J B R B A D G G 

*/

import java.util.*;

class Display
{
	public char[]  DisplayCapital(char Arr[])
	{
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]>='a') && (Arr[i]<='z'))
			{
				Arr[i]=(char)((int)Arr[i]-32);
			}
		}
		
		return Arr;
	}
}

class Array16
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the Array of characters :");
		char Arr[]=sobj.next().toCharArray();

		System.out.print("Input :");
		
		for(int i=0;i<Arr.length;i++)
		{
			System.out.print(Arr[i]+"  ");
		}
		System.out.println();
		System.out.println();
		
		Display dobj=new Display();
		Arr=dobj.DisplayCapital(Arr);
		
		System.out.print("Output :");
		for(int i=0;i<Arr.length;i++)
		{
			System.out.print(Arr[i]+"  ");
		}
		System.out.println();
		
	}
}