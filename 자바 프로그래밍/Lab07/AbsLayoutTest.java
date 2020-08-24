import java.awt.*;
import javax.swing.*;

public class AbsLayoutTest extends JFrame {

	public AbsLayoutTest(){
		setTitle("Random Labels");
		setSize(300,300);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setLayout(null);
		
		for(int i =0;i<20;i++) {
			String num = Integer.toString(i);
			JLabel d = new JLabel(num);
			int x = (int) (Math.random()*200)+50;
			int y = (int) (Math.random()*200)+50;
			d.setSize(15,15);
			d.setLocation(x,y);
			d.setBackground(Color.cyan);
			d.setOpaque(true);	
			add(d);
		}
		setBackground(Color.white);
		setVisible(true);		
	}
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		AbsLayoutTest f = new AbsLayoutTest();
	}

}
