import java.awt.*;
import javax.swing.*;

public class BorderLayoutTest extends JFrame{

	public BorderLayoutTest() {
		setTitle("BorderLayout Practice");
		setSize(400,200);
		setLayout(new BorderLayout(5,7));
		JButton b1 = new JButton("NORTH");
		JButton b2 = new JButton("SOUTH");
		JButton b3 = new JButton("EAST");
		JButton b4 = new JButton("WEST");
		JButton b5 = new JButton("CENTER");
		
		add(b1,BorderLayout.NORTH);
		add(b2,BorderLayout.SOUTH);
		add(b3,BorderLayout.EAST);
		add(b4,BorderLayout.WEST);
		add(b5,BorderLayout.CENTER);
		setVisible(true);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		BorderLayoutTest f = new BorderLayoutTest();
	}

}
