import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import javax.swing.*;

public class  MouseEventFrame extends JFrame{
	JLabel label;
	
	MouseEventFrame(){
		setSize(200,200);
		JPanel panel = new JPanel();
		
		label = new JLabel("Love Java");
		label.addMouseListener(new MouseAdapter() {
			public void  mouseEntered(MouseEvent e) {
				label.setText("�����");
			}
			public void  mouseExited(MouseEvent e) {
				label.setText("Love Java");
			}	
		});
		
		label.requestFocus();
		label.setFocusable(true);
		
		panel.add(label);
		add(panel);
		setVisible(true);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//������ ���ö� ���� ��������
		MouseEventFrame f = new MouseEventFrame();
	}

}
