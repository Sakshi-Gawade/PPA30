import java.lang.*;
import java.util.*;

class Exception3
{
	public static void main(String a[])
	{
		int Arr[]={10,20,30,40,50};
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the index");
		int index=sobj.nextInt();
		
		try
		{
		System.out.println("Element at that index is:"+Arr[index]);
		}
		
		
		catch(ArrayIndexOutOfBoundsException obj)
		{
			System.out.println("Inside catch");
			System.out.println(obj);
		}
		catch(Exception obj)
		{
			System.out.println(obj);
		}
	
		System.out.println("End of application");
	}
}