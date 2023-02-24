import java.lang.*;

class Employee
{
	public String name;
	public int salary;
	
	public Employee(String str,int no)	
	{
		this.name = str;
		this.Salary = no;
	}
}	
	
class Object1
{
	public static void main(String arg[])
	{
		Employee eobj = new Employee("Sakshi",11000);
		System.out.println("eobj.toString");
	}
}