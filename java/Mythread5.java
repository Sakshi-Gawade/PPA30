import java.lang.*;
class Demo extends Thread
{
  public void run()
  {
    for(int i=0; i<10; i++)
	{
	 System.out.println("Value of i:"+i);
	 try
	 {
	 Thread.sleep(5000);
	 }
	 catch(Exception obj)
	 {}
	}
  }
}
class Mythread5
{
  public static void main(String ar[])
  {
   Demo obj1 = new Demo();
   Thread t1 = new Thread(obj1,"First");
   Demo obj2 = new Demo();
   Thread t2 = new Thread(obj2,"Second");
   
   t1.start();
   t2.start();
   
   
   
   //Dead state
  }
}
