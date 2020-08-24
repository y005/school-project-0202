//사진도 같이 제출
import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import javax.swing.*;

public class ColorFontTest extends JFrame{
	Font f1,f2,f3;
	class myPanel extends JPanel{
		public void paintComponent(Graphics g){
			super.paintComponent(g);
			g.setFont(f1);
			g.setColor(Color.blue);
			g.drawString("주소: 서울시 서초구(굴림)",10,30);
			g.setFont(f2);
			g.setColor(Color.green);
			g.drawString("성명: 문정현(궁서)",10,60);
			g.setFont(f3);
			g.setColor(Color.yellow);
			g.drawString("학번: 1815060(돋움)",10,90);
		}
	}
	ColorFontTest(){
		setSize(300,150);
		f1 = new Font("굴림",Font.PLAIN,20);
		f2 = new Font("돋음",Font.ITALIC,20);
		f3 = new Font("궁서",Font.BOLD,20);
		add(new myPanel());
		setVisible(true);
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new ColorFontTest();
	}

}
