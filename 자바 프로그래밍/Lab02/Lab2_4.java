
public class Lab2_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		for(int a=1;a<=100;a++) {
			for(int b=1;b<=100;b++) {
				for(int c=Math.max(a, b)+1;c<100;c++) {
					if(Math.pow(a, 2)+Math.pow(b, 2)==Math.pow(c, 2)) {
						System.out.println(a+" "+b+" "+c);
					}
				}
			}
		}
	}

}
