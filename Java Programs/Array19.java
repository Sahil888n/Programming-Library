/*Write Java program which accept array from user and display below 
pattern.
Input : 8 6 4 2 4 5
Output :
* * * * * * * *
* * * * * *
* * * *
* *
* * * *
* * * * *

*/

import java.util.*;

class Display
{	
	public void ArrayDisplay(int Arr[])
	{
		System.out.print("Array : ");
		for(int i=0;i<Arr.length;i++)
		{
			System.out.print(Arr[i]+"  ");
		}
		System.out.println();
	}
	
	public void Pattern(int Arr[])
	{
		this.ArrayDisplay(Arr);
		
		System.out.println("Pattern is Below :");
		
		int temp=0;
		
		for(int i=0;i<Arr.length;i++)
		{
			temp=Arr[i];
			
			while(temp!=0)
			{
				System.out.print("*  ");
				temp--;
			}
			
			System.out.println();
		}
	}
	
}

class Array19
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.print("Enter the number of elements for Array :");
		int iNo=sobj.nextInt();
		
		int Arr[]=new int[iNo];
		
		System.out.println("Enter the elements in Array Below :");
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		
		Display dobj=new Display();
		dobj.Pattern(Arr);
	}
}
		