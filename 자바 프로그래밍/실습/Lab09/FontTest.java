import java.awt.Font;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
import javax.swing.border.Border;

public class FontTest extends JFrame implements ActionListener{
	JRadioButton r1,r2,r3;

	JCheckBox j1,j2;
	ButtonGroup g1;
	
	JComboBox<String> combo;
	
	JTextField t1;
	JLabel result;
	
	FontTest(){
		setSize(400,400);
		setTitle("Font ¼³Á¤");
		JPanel panel = new JPanel();
		panel.setLayout(new GridLayout(5,1));
		
		JPanel panel1 = new JPanel();
		JPanel panel2 = new JPanel();
		JPanel panel3 = new JPanel();
		JPanel panel4 = new JPanel();
		JPanel panel5 = new JPanel();
		
		JLabel l1 = new JLabel("Font ¼³Á¤");
		JLabel l2 = new JLabel("Style ¼³Á¤");
		JLabel l3 = new JLabel("Size ¼³Á¤");
		JLabel l4 = new JLabel("Text ¼³Á¤");
		result = new JLabel("Hello Java!");
		//////////////////
		r1 = new JRadioButton("±¼¸²");
		r2 = new JRadioButton("µ¸¿ò");
		r3 = new JRadioButton("±Ã¼­");
		
		g1 = new ButtonGroup();
		g1.add(r1);
		g1.add(r2);
		g1.add(r3);
		
		r1.addActionListener(this);
		r2.addActionListener(this);
		r3.addActionListener(this);
		
		panel1.add(l1);
		panel1.add(r1);
		panel1.add(r2);
		panel1.add(r3);
		panel.add(panel1);
		/////////////////
		j1 = new JCheckBox("BOLD");
		j2 = new JCheckBox("ITALIC");
			
		j1.addActionListener(this);
		j2.addActionListener(this);
		
		panel2.add(l2);
		panel2.add(j1);
		panel2.add(j2);
		
		panel.add(panel2);
		//////////////
		panel3.add(l3);
		String[] arr = {"10","15","20","25","30"};
		combo = new JComboBox<String>(arr);
		combo.addActionListener(this);
		panel3.add(combo);
		panel.add(panel3);	
		/////////////
		panel4.add(l4);
		t1 = new JTextField(15);
		t1.addActionListener(this);
		panel4.add(t1);
		panel.add(panel4);
		////////////////
		Border resultBorder = BorderFactory.createTitledBorder("Font ¼³Á¤ °á°ú");
		panel5.setBorder(resultBorder);
		panel5.add(result);
		panel.add(panel5);
		/////////////
		add(panel);
		pack();
		setVisible(true);
	}
	
	public void actionPerformed(ActionEvent e) {	
		String font = null;
		int style = 0; 
		int size = 10;
		Font change;
		String line = t1.getText();	
		String tmp = combo.getItemAt(combo.getSelectedIndex());
		if(tmp!=null){size = Integer.parseInt(tmp);}
		if(j1.isSelected()){style = Font.BOLD;}
		if(j2.isSelected()){style = Font.ITALIC;}
		if(r1.isSelected()){font = "±¼¸²";}
		if(r2.isSelected()){font ="µ¸¿ò";}
		if(r3.isSelected()){font = "±Ã¼­";}
		result.setText(line);
		change = new Font(font,style,size);	
		result.setFont(change);
	}
	public static void main(String[] args) {
	// TODO Auto-generated method stub
		new FontTest();
	}
}
