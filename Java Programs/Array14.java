/* Write java program which accept marks of N students from user 
and display class of each student.

Less than 35 - Fail
Less than 50 - Pass class
Less than 60 - Second class
Less than 70 - First class
Greater than 70 - First class with Distinction

Input : 67.3 45.8 88.9 77.5 55.2
Output : 67.3 First class
45.8 Pass class
88.9 First class with Distinction
77.5 First class with Distinction
55.2 Second class
*/

import java.util.*;

class Student
{
	public void Criteria(double Arr[])
	{
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]<35))
			{
				System.out.println("Student "+(i+1) + ":  Fail");
			}
			else if((Arr[i]>=35) && (Arr[i]<50))
			{
				System.out.println("Student "+(i+1) + ":  Pass Class");
			}
			else if((Arr[i]>=50) && (Arr[i]<60))
			{
				System.out.println("Student "+(i+1) + ":  Second Class");
			}
			else if((Arr[i]>=60) && (Arr[i]<70))
			{
				System.out.println("Student "+(i+1) + ":  First Class");
			}
			else if(Arr[i]>=70)
			{
				System.out.println("Student "+(i+1) + ":  First Class with Destination");
			}
		}
	}
	
}

class Array14
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.print("Enter the number of students : ");
		int iNo=sobj.nextInt();
		
		double Arr[]=new double[iNo];
		
		System.out.println("Enter the marks below :");
		
		for(int i=0;i<Arr.length;i++)
		{
			System.out.print("Student"+(i+1)+" : ");
			Arr[i]=sobj.nextDouble();
		}
		
		Student obj=new Student();
		
		System.out.println("Results are below :");
		
		obj.Criteria(Arr);
	}
}