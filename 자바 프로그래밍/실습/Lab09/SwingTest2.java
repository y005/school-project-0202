import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class SwingTest2 extends JFrame implements ActionListener{
	JComboBox<String>combo;
	JTextField t1;
	
	SwingTest2(){
		
		setSize(400,400);
		setTitle("이름 추가");
		JPanel panel = new JPanel();
		t1 = new JTextField(15);
		t1.addActionListener(this);
		combo = new JComboBox<String>();
		
		panel.add(t1);
		panel.add(combo);
		
		add(panel);
		pack();
		setVisible(true);
	}
	
	public void actionPerformed(ActionEvent e) {
		String text = t1.getText();
		combo.addItem(text);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new SwingTest2();
	}

}
