
public class Rectangle {
	int x,y,width,height;
	
	Rectangle(int x, int y,int width,int height){
		this.x = x;
		this.y = y;
		this.width = width;
		this.height = height;
	}
	
	int square(){
		return width*height;
	}
	
	void show(){
		System.out.println("("+x+","+y+") ũ�Ⱑ "+width+"x"+height+"�� �簢��");
	}
		
	boolean contains(Rectangle r){
		//���� ���ڸ� �����ϴ��� Ȯ��
		if(((this.x)<(r.x))&&(((r.y)+(r.height))<((this.y)+(this.height))))
		{return true;}
		else{return false;}
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Rectangle r = new Rectangle(2,2,8,7);
		Rectangle s = new Rectangle(5,5,6,6);
		Rectangle t = new Rectangle(1,1,10,10);
		r.show();
		System.out.println("s�� ������ "+ s.square());
		if(t.contains(r)) {System.out.println("t�� r�� �����մϴ�.");}
		if(t.contains(s)) {System.out.println("t�� s�� �����մϴ�.");}
		
	}

}
