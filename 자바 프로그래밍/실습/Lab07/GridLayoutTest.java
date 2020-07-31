import java.awt.*;
import javax.swing.*;

public class GridLayoutTest extends JFrame{
	public GridLayoutTest() {
		setTitle("Ten Buttons Frame");
		setSize(800,400);
		setLayout(new GridLayout(1,10));
		Color [] arr1 = {Color.red,Color.orange,Color.yellow,Color.green,Color.cyan,Color.blue,Color.magenta,Color.lightGray,Color.pink,Color.gray};
		
		for(int i=0;i<10;i++) {
			String num = Integer.toString(i);
			JButton b0 = new JButton(num);
			Color col = arr1[i];
			b0.setBackground(col);
			add(b0);
		}
		setVisible(true);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		GridLayoutTest f = new GridLayoutTest();
	}

}
