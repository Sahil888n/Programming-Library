//Write a program which accepts N numbers from user and store it into array and display the largest numbers
import java.lang.*;
import java.util.*;

class Java43
{
	public static void main(String arg[])
	{
		int iNo=0,iLarge=0;
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of elements");
		iNo=sobj.nextInt();
		
		int Arr[]=new int[iNo];
		System.out.println("Enter the numbers");
		
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
			for(int j=0;j<Arr.length;j++)
		    {	
			    if(Arr[j]>=iLarge)
			    {
				    iLarge=Arr[j];
			    }
			}
		}
		System.out.println("The Largest number is:"+iLarge);
	}
}
			
		