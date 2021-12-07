package practice;
class animal
{
	void run()
	{
		System.out.println("running");
		
	}
}
class tiger
{
	void swim()
	{
		System.out.println("swimming");
		
	}
}
class cat extends animal 
{
	void meow()
	{
		System.out.println("meow meow");
	}
}


public class multipleinheritance {

	public static void main(String[] args)
	{
		cat object= new cat();
		object.meow();
		object.run();
		

	}

}
