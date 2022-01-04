/*Write Java program which accept array of characters from user and 
replace each capital character with its corresponding small character.

Input : b N j B R b A d G G
Output : b n j b r b a d g g

*/

import java.util.*;

class Display
{
	public char[]  SmallCharacter(char Arr[])
	{
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]>='A') && (Arr[i]<='Z'))
			{
				Arr[i]=(char)((int)Arr[i]+32);
			}
		}
		
		return Arr;
	}
}

class Array15
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
		Arr=dobj.SmallCharacter(Arr);
		
		System.out.print("Output :");
		for(int i=0;i<Arr.length;i++)
		{
			System.out.print(Arr[i]+"  ");
		}
		System.out.println();
		
	}
}