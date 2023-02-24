import java.lang.*;
class Virtual
{
	public static void main(String arg[]);
	{
		//Base bobj = new Base();  //no casting
		//Derived dobj = new Derived();  //no casting
		
		Base obj = new Derived();  //Upcasting
		//Derived obj2 = new Base();  //Downcasting
		
		obj.fun();
		obj.gun();
		obj.sun();
		//obj.run();
	}
}
class Base
{
   public int i,j;	
   public void fun()
   {System.out.println("Base fun");}  //definition
   
   public void gun()
   {System.out.println("Base gun");}  //definition

   public void sun()
   {System.out.println("Base sun");}  //definition

}

class Derived extends Base
{
	public int x,y;
	
	public void fun()
	{System.out.println("Derived fun");}  //overriding
	
	public void sun()
	{System.out.println("Derived sun");}  //overriding
	
	public void run()
	{System.out.println("Derived run");}  //definition
}	
