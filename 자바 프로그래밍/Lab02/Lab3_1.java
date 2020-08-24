class Dog{
	
	String breed;
	int age;
	String color;
	
	Dog(String type,int year, String color){
		this.breed = type;
		this.age = year;
		this.color = color;
	}
	
	void barking(){
		System.out.println("barking()");
	}
	
	void hungry() {
		System.out.println("hungry()");		
	}
	
	void sleeping() {
		System.out.println("sleeping()");		
	}
	
	void inform() {
		System.out.println("("+this.breed+","+this.age+","+this.color+")");		
	}
}

public class Lab3_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Dog obj = new Dog("york",1,"orange");
		obj.inform();
		obj.barking();
		obj.hungry();
		obj.sleeping();
	}

}
