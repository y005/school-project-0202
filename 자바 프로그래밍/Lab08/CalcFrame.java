import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class CalcFrame extends JFrame{
	JTextField num1,num2,result;
	JButton b1;
	
	class cal implements ActionListener{
		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO Auto-generated method stub
			String num11 = num1.getText();
			String num22 = num2.getText();
			int num1 = Integer.parseInt(num11);
			int num2 = Integer.parseInt(num22);
			result.setText(""+num1*num2);
			result.setText(""+num1*num2);
		}
	}
	
	CalcFrame(){
		setSize(500,100);
		setLayout(new GridLayout(1,5));
		setTitle("°è»ê±â");
			
		JPanel panel = new JPanel();
		num1 = new JTextField(5);
		JLabel label = new JLabel("X");
		num2 = new JTextField(5);
		result = new JTextField(10);
		b1 = new JButton("=");
		b1.addActionListener(new cal());
		panel.add(num1);
		panel.add(label);
		panel.add(num2);
		panel.add(b1);
		panel.add(result);	
		add(panel);
		setVisible(true);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		CalcFrame f = new CalcFrame();
	}

}
