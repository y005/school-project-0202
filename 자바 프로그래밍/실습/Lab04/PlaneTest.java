
class Plane{
	
	private String model;
	private int max;
	private static int total = 0;
	
	Plane(String model, int max ){
		this.model = model;
		this.max = max;
		++total;
	}
	
	Plane(){
		this("������� - A380",500);
	}

	public String getmodel(){
		return this.model;
	}
	
	public int getmax(){
		return this.max;
	}
	
	public void setPlane(String model,int max){
		this.model = model;
		this.max = max;
	}
	
	public static int getPlanes(){
		return Plane.total;
	}
	
	public String toString() {
		return "Plane [model="+this.getmodel()+", seats="+this.getmax()+"]";
	}
	
}

public class PlaneTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Plane a = new Plane();
		Plane b = new Plane();
		Plane c = new Plane();
		
		a.setPlane("���� 777", 200);
		c.setPlane("���� 737", 120);
		
		System.out.println("��ü ���� ����� �� = "+Plane.getPlanes());
		System.out.println("�� ����� ���� ���\n"+a.toString()+"\n"+b.toString()+"\n"+c.toString());
	}

}
