import java.awt.*;
import javax.swing.*;

public class StoryTest extends JFrame {

	public StoryTest(){
		setSize(400,400);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setLayout(null);
		setTitle("SM story");
		
		JLabel j0 = new JLabel("SM story");
		j0.setLocation(50,50);
		j0.setSize(150,60);
		
		JLabel j1 = new JLabel("가을은");
		j1.setLocation(100,100);
		j1.setSize(50,60);
		
		JTextField j2 = new JTextField(15);
		j2.setLocation(150,150);
		j2.setSize(100,30);
		
		JLabel j3 = new JLabel("이다");
		j3.setLocation(250,200);
		j3.setSize(50,60);
		
		add(j0);
		add(j1);
		add(j2);
		add(j3);
		
		setVisible(true);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		StoryTest f = new StoryTest();
	}

}
