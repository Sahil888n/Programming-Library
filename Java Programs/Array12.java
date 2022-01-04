/*Write java program which accept array from user and replace each 
member with summation of its digit.
Input : 89 687 56 549 87 9
Output : 17 21 11 18 15 9
*/

import java.util.*;

class Display
{
	public int[] Summation(int Arr[])
	{
		int Brr[]=new int[Arr.length];
		
		int temp=0,iDigit=0;
		
		for(int i=0;i<Arr.length;i++)
		{
			temp=Arr[i];
			int iSum=0;
			
			while(temp!=0)
			{
				iDigit=temp%10;
				iSum= iSum + iDigit;
				temp=temp/10;
			}
			
			Brr[i]=iSum;
		}
		
		return Brr;
	}
	
}

class Array12
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.print("Enter the number of elements for Array : ");
		int iNo=sobj.nextInt();
		
		int Arr[]=new int[iNo];
		
		System.out.println("Enter the elements below :");
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		
		Display dobj=new Display();
		int Brr[]=dobj.Summation(Arr);
		
		System.out.println("Array after reversing every Element :");
		for(int i=0;i<Brr.length;i++)
		{
			System.out.print(Brr[i]+"	");
		}
		
		System.out.println();
	}
}