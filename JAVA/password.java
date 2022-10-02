/*
Program Name : Write a java program to demonstrate TextField to input a password.
Author: Madhavi Sonawane.
Date : 2nd Oct 2022.
*/

import java.awt.*;
import java.awt.event.*;
class password extends Frame implements WindowListener,ActionListener
{
    Label l1,l2;
    TextField t1,t2;
    password(String s)
    {
        super(s);
        setLocation(550,250);
        setSize(750,500);
        setVisible(true);
        setLayout(null);
        setBackground(Color.lightGray);
        setForeground(Color.black);

        setFont(new Font("Times New Roman",Font.BOLD,20));
        
        l1=new Label("Enter Password : ");
        l2=new Label("Confirm Password : ");
        t1=new TextField();
        t2=new TextField();

        l1.setBounds(150,150,200,50);
        l2.setBounds(150,300,200,50);
        t1.setBounds(400,150,200,50);
        t2.setBounds(400,300,200,50);
        t2.setEditable(false);
        t1.setEchoChar('*');

        add(l1);
        add(l2);
        add(t1);
        add(t2);

        addWindowListener(this);
        t1.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e)
    {
        String s=t1.getText();
        t2.setText(s);
    }
    public void windowClosing(WindowEvent e){
        setVisible(false);
    }
    public void windowClosed(WindowEvent e){}
    public void windowOpened(WindowEvent e){}
    public void windowIconified(WindowEvent e){}
    public void windowDeiconified(WindowEvent e){}
    public void windowActivated(WindowEvent e){}
    public void windowDeactivated(WindowEvent e){}
    public static void main(String []args)
    {
        password pw=new password("Password | Login");
    }
}
