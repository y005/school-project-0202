class Dice{
	private int value;
	
	public Dice() {
		value = 0;
	}
	public void roll() {
		this.value = (int) (Math.random()*6)+1;
	}
	
	public int getValue() {
		return this.value;
	}
}
public class DiceTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Dice a = new Dice();
		Dice b = new Dice();
		
		int count = 0;
		
		do {
			++count;
			a.roll();
			b.roll();
			System.out.println("�ֻ���1= "+a.getValue()+" �ֻ���2= "+b.getValue());
		}while(a.getValue()*b.getValue()!=1);
		//�Ѵ� 1�� �ƴ� �� ��� ������
		
		System.out.println("(1,1)�� �����µ� �ɸ� Ƚ�� = "+count);
	}

}
