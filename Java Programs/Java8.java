import java.util.*;

class ArrayDemo
{
	public void Division(int Brr[])
	{
		int i=0;
		System.out.println("Even elements which are Divisible by 5 are below");
		for(i=0;i<Brr.length;i++)
		{
			if(((Brr[i]%5)==0) && ((Brr[i]%2)==0))
			{
				System.out.println(Brr[i]);
			}
		}
	}	
}

class Question3
{
	public static void main(String arg[])
	{
		int iNo=0,i=0;
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of elements");
		iNo=sobj.nextInt();
		
		int Arr[]=new int[iNo];
		System.out.println("Enter the elements below");
		for(i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		
		ArrayDemo dobj=new ArrayDemo();
		dobj.Division(Arr);
	}
}
		