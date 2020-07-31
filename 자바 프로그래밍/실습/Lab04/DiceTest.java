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
			System.out.println("주사위1= "+a.getValue()+" 주사위2= "+b.getValue());
		}while(a.getValue()*b.getValue()!=1);
		//둘다 1이 아닐 때 계속 돌린다
		
		System.out.println("(1,1)이 나오는데 걸린 횟수 = "+count);
	}

}
