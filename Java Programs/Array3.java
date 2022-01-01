/*Write Java program which accept two arrays from user and display 
odd contents of each array.
Input : 2 9 6 5 2 3
45 6 12 18 23 4
Output : 9 5 3
		45 23
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


class Array3
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
		
		System.out.print("Odd elements in Array 1 :");
		for(int i=0;i<Arr1.length;i++)
		{
			if((Arr1[i]%2)!=0)
			{
				System.out.print(Arr1[i]+"	");
			}
		}
		
		System.out.println();
		
		System.out.print("Odd elements in Array 2 :");
		for(int i=0;i<Arr2.length;i++)
		{
			if((Arr2[i]%2)!=0)
			{
				System.out.print(Arr2[i]+"	");
			}
		}
		System.out.println();
	}
}