import java.lang.*;
import java.awt.*;
import java.awt.event.*;
class Demo
{
	public int Add(int iNo1,int iNo2)
	{
		int iAns;
		iAns=iNo1+iNo2;
		return iAns;
	}
	
}
class MarvellousFrame extends WindowAdapter implements ActionListener
{

}

public void actionPerformed(ActionEvent obj)
	{
		Demo dobj = new Demo();
		int Add = dobj.Add();
		tobj.setText("Jay Ganesh..");
	}
}

class FrameDemo5
{
    public static void main(String arg[])
    {
        
        MarvellousFrame mobj = new MarvellousFrame("PPA");

    }
}