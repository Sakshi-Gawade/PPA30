import java.lang.*;

class Base
{
    public int i;
    public int j;

    public Base()
    {
        System.out.println("Inside base constructor");
		this.i=10;
		this.j=20;
    } 
	
	public Base(int a, int b)
	{
		this.i = a;
		this.j = b;
	}

    public void fun()
    {
        System.out.println("Inside base fun");
    }

    
}

class Derived extends Base      // class Derived : public Base
{
    public int x;
    public int y;

    public void gun()
    {
        System.out.println("Inside derived gun");
		
    }
}
class DerivedX extends Derived
{
	public int a;
	
	public void sun()
	{
		System.out.println("Inside DerivedX sun");
	}
	
}

class Inheritance4
{
    public static void main(String a[])
    {
     System.out.println("Inside main");
	 DerivedX dobj= new DerivedX();
	 
	 dobj.sun();
    }
}