import java.awt.*;
import javax.swing.*;

public class GuiTest extends JFrame{
	GuiTest(){
		JPanel panel = new JPanel();
		panel.setLayout(new GridLayout(2,1));
		
		JPanel panel1 = new JPanel();
		panel1.setLayout(new GridLayout(1,2));
		
		JPanel panel11 = new JPanel();
		panel11.setLayout(new GridLayout(4,1));
		
		JLabel  j1 = new JLabel("이름");  
		JLabel  j2 = new JLabel("학번");  
		JLabel  j3 = new JLabel("전공");  
		JLabel  j4 = new JLabel("연락처");  
		
		panel11.add(j1);
		panel11.add(j2);
		panel11.add(j3);
		panel11.add(j4);
		
		panel1.add(panel11);
		
		JPanel panel12 = new JPanel();
		panel12.setLayout(new GridLayout(4,1));
		
		JTextField j11 = new JTextField();
		JTextField j22 = new JTextField();
		JTextField j33 = new JTextField();
		JTextField j44 = new JTextField();

		panel12.add(j11);
		panel12.add(j22);
		panel12.add(j33);
		panel12.add(j44);
		
		panel1.add(panel12);
		
		JPanel panel2 = new JPanel();
		
		JButton b1 = new JButton("확인");
		JButton b2 = new JButton("취소");
		
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
