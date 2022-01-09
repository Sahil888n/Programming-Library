import java.util.*;

class Pattern
{
	public void alphabetPattern(int R,int C)
	{
		for(int i=0;i<R;i++)
		{
			char ch='A';
			
			for(int j=0;j<C;j++)
			{
				System.out.print(ch +"	");
				ch++;
			}
			
			System.out.println();
		}
	}
}
class Java21
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of Rows :");
		int row=sobj.nextInt();
		
		System.out.println("Enter the number of Columns :");
		int col=sobj.nextInt();
		
		Pattern pobj=new Pattern();
		System.out.println("The Pattern is Below :");
		pobj.alphabetPattern(row,col);
		
	}
}	