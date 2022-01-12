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
	
	void TargetedPlot()
	{
		int i=0,j=0,iMax=0,row=0,col=0,iSum=0;
		
		for(i=1;i<Arr.length-1;i++)
		{
			for(j=1;j<Arr[i].length-1;j++)
			{
				iSum=Arr[i-1][j-1] + Arr[i-1][j] +Arr[i-1][j+1] + Arr[i][j-1] +Arr[i][j+1] +Arr[i+1][j-1] +Arr[i+1][j] +Arr[i+1][j+1];
				
				if(iSum>iMax)
				{
					iMax=iSum;
					row=i;
					col=j;
				}
				
				iSum=0;
			}
		}
		
		System.out.println("You should Purchase the plot with row Number :"+i+"  and Column Number :"+j);
	}
	
}


class Java39
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
		mobj.TargetedPlot();
	}
}