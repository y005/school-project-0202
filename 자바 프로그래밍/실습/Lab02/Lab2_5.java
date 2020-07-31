import java.util.Scanner;

public class Lab2_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		System.out.print("출력할 항의 개수: ");
		int num = scan.nextInt();
		int a = 0;
		int b = 1;
		for(int i=0;i<num;i++) {
			if(i % 2 ==0){
				System.out.print(a+" ");
				a = a+b;
				continue;
			}
				System.out.print(b+" ");
				b = a+b;
		}
		scan.close();
	}
}
