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
			System.out.println("번호 입력:");
			
			int num = scan.nextInt();
			scan.nextLine();//개행문자가 저장되는 것을 방지
			switch(num){
				case 1://회원가입
					System.out.println("ID: ");
					String id = scan.nextLine();
					System.out.println("PASSWORD: ");
					String psw = scan.nextLine();
					user.add(new User(id,psw));
					break;
				
				case 2://로그인
					System.out.println("ID: ");
					String id1 = scan.nextLine();
					System.out.println("PASSWORD: ");
					String psw1 = scan.nextLine();
					boolean result = false;
					
					for(int i=0;i<user.size();i++) {
						if(user.get(i).getId().equals(id1)&&user.get(i).getPass().equals(psw1)){ 
							result = true;
						}
					}//string 역시 다른 클래스이므로 비교 연산자 "=="가 아닌 equals메소드를 이용해야 한다!!
					 //"=="를 사용하면 객체의 주소값을 연산한다
					if(result){System.out.println("로그인 성공");}
					else{System.out.println("로그인 실패");}
					break;
					
				case 3://회원정보 출력
					for(int j=0;j<user.size();j++){
						System.out.println("{"+ user.get(j).getId()+", "+user.get(j).getPass()+"}");
					}
					break;
				case 4:
					System.out.println("종료");
					break;
				default:
					System.out.println("종료");
					break;
			}
		}
	}
}
