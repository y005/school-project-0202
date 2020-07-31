import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class PieChartFrame extends JFrame{
	class Panel extends JPanel implements ActionListener{	
		JTextField j1,j2,j3,j4;
		int[] arr = {0,0,0,0};
		public void actionPerformed(ActionEvent e) {
			// TODO Auto-generated method stub
			arr[0] = (int)Integer.parseInt(j1.getText());
			arr[1] = (int)Integer.parseInt(j2.getText());
			arr[2] = (int)Integer.parseInt(j3.getText());
			arr[3] = (int)Integer.parseInt(j4.getText());
			repaint();
		}
		Panel(){
			setLayout(new BorderLayout());
			JPanel p1 = new JPanel();
			JLabel l1 = new JLabel("apple");
			JLabel l2 = new JLabel("cherry");
			JLabel l3 = new JLabel("strawberry");
			JLabel l4 = new JLabel("prune");
			j1 = new JTextField(10);
			j2 = new JTextField(10);
			j3 = new JTextField(10);
			j4 = new JTextField(10);
			j1.addActionListener(this);
			j2.addActionListener(this);
			j3.addActionListener(this);
			j4.addActionListener(this);
			p1.add(l1);
			p1.add(j1);
			p1.add(l2);
			p1.add(j2);
			p1.add(l3);
			p1.add(j3);
			p1.add(l4);
			p1.add(j4);
			add(p1,BorderLayout.NORTH);
			setVisible(true);
		}
		public void paintComponent(Graphics g) {
			super.paintComponent(g);
			Color[] color = {Color.red,Color.blue,Color.magenta,Color.orange};
			String[] name = {"apple","cherry","strawberry","prune"};
			double total=0;
			for(int i=0;i<arr.length;i++) {
				total += arr[i];
			}
			for(int i=0;i<arr.length;i++) {
				g.setColor(color[i]);
				String line = name[i];
				String percent = ": "+(int)(arr[i]*100/total);
				g.drawString(line+percent+"%",160*i+200,50);
			}
			double current=0;
			int start =0 ;
			for(int i=0;i< arr.length;i++) {
				start = (int) (current*360/total);
				int angle = (int) (arr[i]*360/total);
				g.setColor(color[i]);
				g.fillArc(420, 100, 200, 200, start, angle);
				current += arr[i];
			}
		}
	}
	PieChartFrame(){
		setSize(1000,400);
		add(new Panel());
		setVisible(true);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new PieChartFrame();
	}
}
