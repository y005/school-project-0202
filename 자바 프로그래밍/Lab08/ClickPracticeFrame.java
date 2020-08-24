import java.awt.event.MouseListener;
import java.awt.event.MouseEvent;
import javax.swing.*;

public class ClickPracticeFrame extends JFrame implements MouseListener{
	JLabel label;
	
	ClickPracticeFrame(){
		setSize(300,300);
		setLayout(null);
		addMouseListener(this);
		label = new JLabel("c");
		label.setSize(10, 10);
		label.setLocation(100, 100);
		add(label);
		setVisible(true);
	}

	public void mouseClicked(MouseEvent e) {
		int x= (int)(Math.random()*290);
		int y= (int)(Math.random()*290);//()·Î Àß ¹­ÀÚ
		label.setLocation(x, y);
	}
	
	public void mousePressed(MouseEvent e) {	
	}
	public void mouseReleased(MouseEvent e) {
	}
	public void mouseEntered(MouseEvent e) {
	}
	public void mouseExited(MouseEvent e) {
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ClickPracticeFrame f = new ClickPracticeFrame();
	}

}
