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
	public Frame fobj;
	public Button bobj;
	public Button iobj;
	public TextField tobj;
    
    public MarvellousFrame(String name)
    {
        fobj = new Frame(name);
	    bobj=new Button("Marvellous");
		iobj=new Button("Infosystems");
		tobj=new TextField();
		
		tobj.setBounds(60,60,170,20);
		bobj.setBounds(110,130,90,20);
		iobj.setBounds(110,130,90,20);
		
		fobj.add(bobj);
		fobj.add(tobj);
		fobj.add(iobj);
		
        fobj.setSize(600,600);
        fobj.setVisible(true);
		fobj.setLayout(null);
		
        bobj.addActionListener(this);
        fobj.addWindowListener(this);
    }



    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
	public void actionPerformed(ActionEvent obj)
	{
		Demo dobj = new Demo();
		int str = dobj.Add();
		//tobj.setText("Jay Ganesh..");
	}
}

class FrameDemo5
{
    public static void main(String arg[])
    {
        
        MarvellousFrame mobj = new MarvellousFrame("PPA");

    }
}