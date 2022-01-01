/*Write a java program which accept two array from user and check 
whether that array and its elements are palindrome or not.

Input : 11 252 387783 252 11
Output : TRUE

Input : 11 252 387783 77 11
Output : FALSE

Input : 11 252 786 252 11
Output : FALSE

Input : 11 252 786 253 11
Output : FALSE
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
		this.DisplayArray(Arr1,Arr2);
		
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
	
	public boolean PallinDrome(int Arr1[],int Arr2[],int Arr3[])
	{
		this.ReverseArray(Arr1,Arr2,Arr3);
		
		boolean bFlag=true;
		int iTemp=0,iDigit=0;
		
		for(int i=0;i<Arr3.length;i++)
		{
			iTemp=Arr3[i];
			int iSum=0;
			
			while(iTemp!=0)
			{
				iDigit=iTemp%10;
				iSum= (iSum*10) +iDigit;
				iTemp=iTemp/10;
			}
			
			if(iSum!=Arr3[i])
			{
				bFlag=false;
				break;
			}
		}
		
		return bFlag;
	}		
}


class Array10
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
		
		int Arr3[]=new int[(iNo+Num)];
		
		Display dobj=new Display();
		
		boolean bRet=dobj.PallinDrome(Arr1,Arr2,Arr3);
		
		if(bRet==true)
		{
			System.out.println("Both the Arrays are Pallindrome");
		}
		else
		{
			System.out.println("Arrays are not Pallindrome");
		}
		
	}
}