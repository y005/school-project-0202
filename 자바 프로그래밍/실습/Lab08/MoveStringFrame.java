import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class MoveStringFrame extends JFrame implements KeyListener{
	JPanel panel;
	JLabel label;

	MoveStringFrame(){
		setSize(200,200);
		panel = new JPanel();
		label = new JLabel("Love Java");
		
		panel.add(label);		
		panel.addKeyListener(this);
		panel.requestFocus();
		panel.setFocusable(true);
		
		add(panel);//panel의 설정 끝나고 추가하기	
		
		setVisible(true);	
	}
	@Override
	public void keyTyped(KeyEvent e) {
		// TODO Auto-generated method stub	
	}
	@Override
	public void keyPressed(KeyEvent e) {
		// TODO Auto-generated method stub
		int key = e.getKeyCode();
		if(key == KeyEvent.VK_LEFT) {
			String text = label.getText();
			String text1 = text.substring(1,9);
			String text2 = ""+text.charAt(0);
			String newText = text1.concat(text2);
			label.setText(newText);
		}
	}
	@Override
	public void keyReleased(KeyEvent e) {
		// TODO Auto-generated method stub
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MoveStringFrame f = new MoveStringFrame();
	}
}