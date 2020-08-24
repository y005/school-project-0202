import java.awt.*;
import javax.swing.*;

public class PhoneTest extends JFrame{
	
	private String[] labels = {"1","2","3","4","5","6","7","8","9","*","0","#","send", " ","end"};
			
	PhoneTest(){
		setSize(400,400);
		setTitle("전화번호 입력기");
		
		JPanel j = new JPanel();
		j.setLayout(new BorderLayout());
		
		JPanel j1 = new JPanel();
		JTextField t = new JTextField(100);
		j.add(t,BorderLayout.NORTH);
		
		JPanel j2 = new JPanel();
		j2.setLayout(new GridLayout(1,2));
		
		JPanel j21 = new JPanel();
		j21.setLayout(new GridLayout(5,3));
		
		for(int i =0;i<15;i++) {
			String num = labels[i];
			JButton b = new JButton(num);
			j21.add(b);
		}
		j2.add(j21);
		
		JPanel j22 = new JPanel();
		j22.setLayout(new GridLayout(1,1));
		JButton b22 = new JButton("clear");
		j22.add(b22);
		j2.add(j22);
		
		j.add(j2);
		add(j);
		setVisible(true);
		
	}
		
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		PhoneTest f = new PhoneTest();
	}

}
