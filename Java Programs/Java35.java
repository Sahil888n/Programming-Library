//Bubble Sort Algorithm to sort elements in ascending order efficiently

import java.util.*;

class Sorting
{
	public void Ascending(int Brr[])
	{
		int size=Brr.length,temp=0;
		boolean flag=false;
		
		for(int pass=0, flag=true ;(pass<size) && (flag==true);pass++)
		{
			for(int j=1, flag=false;j<size-pass;j++)
			{
				if(Brr[j-1]>Brr[j])
				{
					flag=true;
					temp=Brr[j-1];
					Brr[j-1]=Brr[j];
					Brr[j]=temp;
				}
			}
			
			if(flag==false)
			{
				break;
			}
			
			System.out.println("Data after Pass "+(pass+1));
			for(int i=0;i<Brr.length;i++)
			{
				System.out.print(Brr[i]+"  ");
			}
			System.out.println();
			
		}
	}
}

class Program259
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
		
		obj.Ascending(Arr);
		
		System.out.println("Elements after Sorting ");
		
		for(int i=0;i<Arr.length;i++)
		{
			System.out.println(Arr[i]);
		}
	}
}