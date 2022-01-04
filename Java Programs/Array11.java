/*Write java program which accept array from user and reverse each 
number of that array.
Input : 89 687 56 549 87 9
Output : 98 786 65 945 78 9
*/

import java.util.*;

class Display
{
	public int[] Reverse(int Arr[])
	{
		int Brr[]=new int[Arr.length];
		
		int temp=0,iDigit=0;
		
		for(int i=0;i<Arr.length;i++)
		{
			temp=Arr[i];
			int iRev=0;
			
			while(temp!=0)
			{
				iDigit=temp%10;
				iRev= (iRev*10) + iDigit;
				temp=temp/10;
			}
			
			Brr[i]=iRev;
		}
		
		return Brr;
	}
	
}

class Array11
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
		int Brr[]=dobj.Reverse(Arr);
		
		System.out.println("Array after reversing every Element :");
		for(int i=0;i<Brr.length;i++)
		{
			System.out.print(Brr[i]+"	");
		}
		
		System.out.println();
	}
}