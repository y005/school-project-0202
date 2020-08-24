import java.awt.BorderLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Vector;
import javax.swing.*;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;

public class ListTest extends JFrame implements ActionListener,ListSelectionListener{
	JTextField tf1,tf2;
	JList<String> list;
	Vector<String> vec;
	JButton b1,b2;
	
	ListTest(){
		setSize(300,300);
		setTitle("리스트 테스트");
		JPanel panel = new JPanel();
		panel.setLayout(new BorderLayout());
		
		tf1 = new JTextField(10);
		tf1.addActionListener(this);
		
		panel.add(tf1,BorderLayout.NORTH);
		/////////////
		vec = new Vector<String>();
		list = new JList<String>(vec);
		list.addListSelectionListener(this);
		list.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
		JScrollPane p = new JScrollPane(list);
		//스크롤 기능이 포함된 "패널"이다.
		panel.add(p,BorderLayout.CENTER);
		/////////////	
		JPanel panle3 = new JPanel();
		
		tf2 = new JTextField(8);
		b1 = new JButton("수정");
		b2 = new JButton("삭제");
		
		tf2.addActionListener(this);
		b1.addActionListener(this);
		b2.addActionListener(this);
		
		panle3.add(tf2);
		panle3.add(b1);
		panle3.add(b2);
		
		panel.add(panle3,BorderLayout.SOUTH);
		/////////////
		add(panel);
		setVisible(true);
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new ListTest();
	}
	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		if(e.getSource()==tf1) {
			vec.add(tf1.getText());
			list.setListData(vec);
			tf1.setText("");
		}
		if(e.getSource()==b1) {
			if((tf2.getText()==null)) {
				list.setListData(vec);
			}
			else {
				String modify = tf2.getText(); 
				vec.set(list.getSelectedIndex(),modify);
				list.setListData(vec);
			}
		}
		if(e.getSource()==b2) {
			if((tf2.getText()!= null)&&(vec.contains(tf2.getText()))) {
				vec.remove((String)list.getSelectedValue());
				list.setListData(vec);
			}
			else {
				list.setListData(vec);
			}
		}
	}
	@Override
	public void valueChanged(ListSelectionEvent e) {
		// TODO Auto-generated method stub
		String txt = list.getSelectedValue();
		tf2.setText(txt);
	}
}
