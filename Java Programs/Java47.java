import java.lang.*;

class Demo
{
	public void Display()
	{
		for(int i=1;i<=10;i++)
		{
			System.out.println("Demo:"+i);
		}
	}
}
class Hello
{
	public void Display()
	{
		for(int i=1;i<=10;i++)
		{
			System.out.println("Hello:"+i);
		}
	}
}
class Java47
{
	public static void main(String arg[])
	{
		Demo dobj=new Demo();
		Hello hobj=new Hello();
		dobj.Display();
		hobj.Display();
	}
}

