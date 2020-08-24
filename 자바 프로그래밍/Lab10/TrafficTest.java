import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class TrafficTest extends JFrame{
	class Panel extends JPanel implements ActionListener{
		int light_num =0;
		public Panel() {
			setLayout(new BorderLayout());
			JButton b = new JButton("신호변경");
			b.addActionListener(this);
			add(b,BorderLayout.SOUTH);
		}
		protected void paintComponent(Graphics g) {
			super.paintComponent(g);
			if(light_num == 0) {
				g.setColor(Color.red);
				g.fillOval(60,30,60,60);
			}
			if(light_num == 1) {
				g.setColor(Color.green);	
				g.fillOval(60,90,60,60);
			}
			if(light_num == 2) {
				g.setColor(Color.orange);
				g.fillOval(60,150,60,60);
			}
			g.setColor(Color.black);
			g.drawOval(60, 30, 60, 60);
			g.drawOval(60, 90, 60, 60);
			g.drawOval(60, 150, 60, 60);
		}
		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO Auto-generated method stub
			if(++light_num >= 3) {
				light_num = 0;
			}
			repaint();
		}
	}	
	public TrafficTest() {
			setSize(200,300);
			setTitle("신호변경");
			add(new Panel());
			setVisible(true);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new TrafficTest();
	}

}
