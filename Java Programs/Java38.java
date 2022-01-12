import java.util.*;

class Matrix
{
	public int Arr[][];
	Scanner sobj;
	
	public Matrix(int row,int col)
	{
		Arr=new int[row][col];
		sobj=new Scanner(System.in);
	}
	
	public void Accept()
	{
		System.out.println("Enter the elements below :");
		
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
				Arr[i][j]=sobj.nextInt();
			}
		}
	}
	public void Display()
	{
		System.out.println("The Matrix is Below :");
		
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
				System.out.print(Arr[i][j]+"	");
			}
			
			System.out.println();
		}
	}
}


class Java38
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter number of Rows :");
		int rows=sobj.nextInt();
		
		System.out.println("Enter number of columns :");
		int column=sobj.nextInt();
		
		Matrix mobj=new Matrix(rows,column);
		mobj.Accept();
		mobj.Display();
		
	}
}