/*Write a java program which accept two array from user and copy 
the contents of that array into another array and return new array.
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
	
	public void ReverseArray(int Arr1[],int Arr2[],int Arr3[])
	{
		int i=0, j=0;
		
		for(i=0, j=0;i<Arr1.length;i++ ,j++)
		{
			Arr3[i]=Arr1[j];
		}
		
		j=0;
		
		while(i!=Arr3.length)
		{
			Arr3[i]=Arr2[j];
			
			i++;
			j++;
		}
		
	}
		
}


class Array9
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
		
		int Arr3[]=new int[(iNo+Num)];
		
		dobj.ReverseArray(Arr1,Arr2,Arr3);
		
		System.out.print("New Array : ");
		for(int i=0;i<Arr3.length;i++)
		{
			System.out.print(Arr3[i]+"	");
		}
		
		System.out.println();
	}
}