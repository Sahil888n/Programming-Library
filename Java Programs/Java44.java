import java.lang.*;

class Arithmetic
{
	//characteristics
	public int no1;
	public int no2;
	
	public Arithmetic()        //Default constructor
	{
		this.no1=0;
		this.no2=0;
	}
	public Arithmetic(int x,int y)	//parameterised constructor
	{
		this.no1=x;
		this.no2=y;
	}
	public int Addition()    //Behaviour
	{
		int ans=0;
		ans=this.no1+this.no2;
		return ans;
	}
	public int Subtraction()    //Behaviour
	{
		int ans=0;
		ans=this.no1-this.no2;
		return ans;
	}
}
class Java44
{
	public static void main(String arg[])
	{
		System.out.println("Inside main");
		Arithmetic obj1;     //Reference
		obj1=new Arithmetic();  //Dynamic memory allocation
		Arithmetic obj2=new Arithmetic(21,10);
		int ret=0;
		ret=obj2.Addition();
		System.out.println("Addition is:"+ret);
		
		ret=obj2.Subtraction();
		System.out.println("Subtraction is:"+ret);
		
	}
}




