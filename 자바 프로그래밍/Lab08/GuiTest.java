import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

public class GuiTest extends JFrame{
	JTextField j11,j22,j33,j44;
	JButton b1,b2;
	
	class listen implements ActionListener{
		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO Auto-generated method stub
			System.out.print(j11.getText()+" ");
			System.out.print(j22.getText()+" ");
			System.out.print(j33.getText()+" ");
			System.out.print(j44.getText());
		}
		
	}
	class del implements ActionListener{
		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO Auto-generated method stub
			j11.setText("");
			j22.setText("");
			j33.setText("");
			j44.setText("");

		}
	}
	
	GuiTest(){
		JPanel panel = new JPanel();
		panel.setLayout(new GridLayout(2,1));
		
		JPanel panel1 = new JPanel();
		panel1.setLayout(new GridLayout(1,2));
		
		JPanel panel11 = new JPanel();
		panel11.setLayout(new GridLayout(4,1));
		
		JLabel  j1 = new JLabel("�̸�");  
		JLabel  j2 = new JLabel("�й�");  
		JLabel  j3 = new JLabel("����");  
		JLabel  j4 = new JLabel("����ó");  
		
		panel11.add(j1);
		panel11.add(j2);
		panel11.add(j3);
		panel11.add(j4);
		
		panel1.add(panel11);
		
		JPanel panel12 = new JPanel();
		panel12.setLayout(new GridLayout(4,1));
		
		j11 = new JTextField();
		j22 = new JTextField();
		j33 = new JTextField();
		j44 = new JTextField();
		
		panel12.add(j11);
		panel12.add(j22);
		panel12.add(j33);
		panel12.add(j44);
		
		panel1.add(panel12);
		
		JPanel panel2 = new JPanel();
	
		b1 = new JButton("Ȯ��");
		b1.addActionListener(new listen());
		
		b2 = new JButton("���");
		b2.addActionListener(new del());
		
		panel2.add(b1);
		panel2.add(b2);
		
		panel.add(panel1);
		panel.add(panel2);
		add(panel);
		setSize(200,200);
		setVisible(true);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		GuiTest f = new GuiTest();
	}

}
