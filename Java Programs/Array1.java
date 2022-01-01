/*Write Java program which accept two arrays from user and display 
contents of each array.
Input : 2 9 7 5 2 3
		9 3 5 5
Output : 2 9 7 5 2 3
		9 3 5 5
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


class Array1
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
		
		System.out.print("Array 1 :");
		for(int i=0;i<Arr1.length;i++)
		{
			System.out.print(Arr1[i]+"	");
		}
		
		System.out.println();
		
		System.out.print("Array 2 :");
		for(int i=0;i<Arr2.length;i++)
		{
			System.out.print(Arr2[i]+"	");
		}
		System.out.println();
	}
}