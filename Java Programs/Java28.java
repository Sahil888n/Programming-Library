import java.util.*;

abstract class ArrayX
{
	public int Arr[];
	
	public ArrayX(int size)
	{
		Arr=new int[size];
	}
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the Elements");
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
	}
	
	public void Display()
	{
		System.out.println("Entered data is:");
		for(int i=0;i<Arr.length;i++)
		{
			System.out.println(Arr[i]);
		}
	}
	
	public abstract boolean search(int no);
}

class Searching extends ArrayX
{
	public Searching extends 

class Program252
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the size of Array");
		int size=sobj.nextInt();
		
		int Arr[]=new int[size];
	}
}