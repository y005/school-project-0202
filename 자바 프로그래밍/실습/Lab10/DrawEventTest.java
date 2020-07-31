import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.*;
import java.util.Vector;
import javax.swing.JFrame;
import javax.swing.JPanel;

class Point{
	int x,y,w,h = 0;
	Point(int x1,int y1, int x2, int y2){
			x = x1;
			y = y1;
			w = x1-x2;
			h = y1-y2;
			if(x1>x2){x = x2;}
			if(y1<y2){y = y2;}
			if(w<0){w = -w;}
			if(h<0){h = -h;}
			System.out.println(x+" "+y+" "+w+" "+h+" ");
	}
};

public class DrawEventTest extends JFrame{
	class Panel extends JPanel implements MouseListener, MouseMotionListener{
		Vector<Point> arr = new Vector<>();
		int[] point = {0,0,0,0};
		boolean isPressed = false;
		Panel(){
			addMouseListener(this);
			addMouseMotionListener(this);
			requestFocus();
			setFocusable(true);
		}
		public void paintComponent(Graphics g) {
			super.paintComponent(g);
			g.setColor(Color.pink);
			for(Point p : arr) {
				g.drawOval(p.x,p.y,p.w,p.h);
			}	
			Point tmp1 = new Point(point[0], point[1], point[2] ,point[3]);
			g.drawOval(tmp1.x,tmp1.y,tmp1.w,tmp1.h);
		}
		public void mousePressed(MouseEvent e) {
			// TODO Auto-generated method stub
			if(!isPressed) {
				point[0] = e.getX();
				point[1] = e.getY();
				isPressed = true;
			}
			System.out.println(point[0]+" "+point[1]);
		}
		@Override
		public void mouseDragged(MouseEvent e) {
			// TODO Auto-generated method stub
			point[2] = e.getX();
			point[3] = e.getY();
			repaint();
		}
		@Override
		public void mouseReleased(MouseEvent e) {
			// TODO Auto-generated method stub			
			point[2] = e.getX();
			point[3] = e.getY();
			System.out.println(point[0]+" "+point[1]+" "+point[2]+" "+point[3]);
			arr.add(new Point(point[0],point[1],point[2],point[3]));
			isPressed = false;
			repaint();
		}
		@Override
		public void mouseClicked(MouseEvent e) {
			// TODO Auto-generated method stub
		}
		@Override
		public void mouseEntered(MouseEvent e) {
			// TODO Auto-generated method stub
		}
		@Override
		public void mouseExited(MouseEvent e) {
			// TODO Auto-generated method stub
		}
		@Override
		public void mouseMoved(MouseEvent e) {
			// TODO Auto-generated method stub
		}
	}
	DrawEventTest(){
		setSize(400,400);
		add(new Panel());
		setVisible(true);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new DrawEventTest();
	}
}
