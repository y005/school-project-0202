import java.util.ArrayList;
import java.util.Scanner;

class User{
	private String userId,password;
	
	public User(String userId, String password) {
		this.userId = userId;
		this.password = password;
	}
	public String getId() {
		return this.userId;
	}
	public String getPass() {
		return this.password;
	}	
}	

public class UserList {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		ArrayList<User> user = new ArrayList<>();
		
		while(true) {
			System.out.println("====================");
			System.out.println("1. Sign Up\n2. Login\n3. Print All Users\n4. Exit");
			System.out.println("====================");
			System.out.println("��ȣ �Է�:");
			
			int num = scan.nextInt();
			scan.nextLine();//���๮�ڰ� ����Ǵ� ���� ����
			switch(num){
				case 1://ȸ������
					System.out.println("ID: ");
					String id = scan.nextLine();
					System.out.println("PASSWORD: ");
					String psw = scan.nextLine();
					user.add(new User(id,psw));
					break;
				
				case 2://�α���
					System.out.println("ID: ");
					String id1 = scan.nextLine();
					System.out.println("PASSWORD: ");
					String psw1 = scan.nextLine();
					boolean result = false;
					
					for(int i=0;i<user.size();i++) {
						if(user.get(i).getId().equals(id1)&&user.get(i).getPass().equals(psw1)){ 
							result = true;
						}
					}//string ���� �ٸ� Ŭ�����̹Ƿ� �� ������ "=="�� �ƴ� equals�޼ҵ带 �̿��ؾ� �Ѵ�!!
					 //"=="�� ����ϸ� ��ü�� �ּҰ��� �����Ѵ�
					if(result){System.out.println("�α��� ����");}
					else{System.out.println("�α��� ����");}
					break;
					
				case 3://ȸ������ ���
					for(int j=0;j<user.size();j++){
						System.out.println("{"+ user.get(j).getId()+", "+user.get(j).getPass()+"}");
					}
					break;
				case 4:
					System.out.println("����");
					break;
				default:
					System.out.println("����");
					break;
			}
		}
	}
}
