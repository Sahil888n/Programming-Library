//Insertion Sort Algorithm to sort elements in ascending order

import java.util.*;

class Sorting
{
	public void InsertionSort(int Arr[])
	{
		int i=0, j=0, key=0, size=Arr.length;
		
		for(i=1; i<size;i++)
		{
			key=Arr[i];
			for(j=i-1;(j>=0) && (Arr[j] > key); j--)
			{
				Arr[j+1]=Arr[j];
			}
			
			Arr[j+1]=key;
		}
	}
}


class Java37
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the Number of elements ");
		int iNo=sobj.nextInt();
		
		int Arr[]=new int[iNo];
		
		System.out.println("Enter the elements below");
		
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		
		Sorting obj=new Sorting();
		
		obj.InsertionSort(Arr);
		
		System.out.println("Elements after Sorting ");
		
		for(int i=0;i<Arr.length;i++)
		{
			System.out.println(Arr[i]);
		}
	}
}