/*Write Java program which accept two arrays from user and form 
new array which is combination of contents of first and second array.
Input : 12 57 28 3
99 23 54 58 6 67
Output : 12 57 28 3 99 23 54 58 6 67
*/

import java.util.*;

class Display
{
	Scanner sobj;
	
	public Display()
	{
		sobj=new Scanner(System.in);
	}
	
	public void DisplayArray(int Arr1[],int Arr2[])
	{
		System.out.println("Enter the elements in Array1 :");
		
		for(int i=0;i<Arr1.length;i++)
		{
			Arr1[i]=sobj.nextInt();
		}
		
		System.out.println("Enter the elements in Array2 :");
		
		for(int i=0;i<Arr2.length;i++)
		{
			Arr2[i]=sobj.nextInt();
		}
	}
}


class Array4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.print("Enter the number of elements in Array1 :");
		int iNo=sobj.nextInt();
		int Arr1[]=new int[iNo];
		
		System.out.print("Enter the number of elements in Array2 :");
		int Num=sobj.nextInt();
		int Arr2[]=new int[Num];
		
		
		Display dobj=new Display();
		dobj.DisplayArray(Arr1,Arr2);
		
		System.out.print("Elements in both Arrays :");
		for(int i=0;i<Arr1.length;i++)
		{
			System.out.print(Arr1[i]+"	");
		}
		
		for(int i=0;i<Arr2.length;i++)
		{
			System.out.print(Arr2[i]+"	");
		}
		
		System.out.println();
	}
}