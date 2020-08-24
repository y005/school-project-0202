
import java.awt.GridLayout;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
import javax.swing.*;

public class SwingTest1 extends JFrame{
	JCheckBox j1,j2;
	JTextField t1;	
	JPanel panel;
	
	SwingTest1(){
		setSize(400,200);
		setTitle("üũ�ڽ��� �ؽ�Ʈ �Է�");
		JPanel panel = new JPanel();
		
		panel.setLayout(new GridLayout(2,1));
		JPanel panel1 = new JPanel();
		JPanel panel2 = new JPanel();
		
		j1 = new JCheckBox("�ؽ�Ʈ �Է� �����Ұ�");
		j2 = new JCheckBox("�ؽ�Ʈ �Է� ���߱�");
		t1 = new JTextField("�ؽ�Ʈ �Է� ����");
		
		Action1 a1 = new Action1();
		Action2 a2 = new Action2();
		
		j1.addItemListener(a1);
		j2.addItemListener(a2);
		
		panel1.add(j1);
		panel1.add(j2);
		panel2.add(t1);
		panel.add(panel1);
		panel.add(panel2);	
		add(panel);
		
		setVisible(true);
	}
	class Action1 implements ItemListener{
		@Override
		public void itemStateChanged(ItemEvent e) {
			// TODO Auto-generated method stub
			if(j1.isSelected()) {
				t1.setEnabled(false);		
			}
			else {
				t1.setEnabled(true);			
			}
		}	
	}
	
	class Action2 implements ItemListener{
		@Override
		public void itemStateChanged(ItemEvent e) {
			// TODO Auto-generated method stub
			if(j2.isSelected()) {
				t1.setVisible(false);		
			}
			else {
				t1.setVisible(true);			
			}
		}	
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new SwingTest1();
	}
}
