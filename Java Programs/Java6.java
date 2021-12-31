import java.util.*;

class Difference
{
	public int SummationDiff(int Brr[])
	{
		int i=0,iOdd=0,iEven=0;
		for(i=0;i<Brr.length;i++)
		{
			if((Brr[i]%2)==0)
			{
				iEven=iEven + Brr[i];
			}
			else
			{
				iOdd=iOdd + Brr[i];
			}
		}
		
		if(iEven>=iOdd)
		{
			return (iEven-iOdd);
		}
		else
		{
			return (iOdd-iEven);
		}
	}
}

class Question1
{
	public static void main(String arg[])
	{
		int iNo=0,i=0,iRet=0;
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of elements");
		iNo=sobj.nextInt();
		
		int Arr[]=new int[iNo];
		System.out.println("Enter the elements below");
		for(i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		
		Difference dobj=new Difference();
		iRet=dobj.SummationDiff(Arr);
		
		System.out.println("Difference between Summation of odd and even numbers : "+iRet);
	}
}