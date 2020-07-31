class Date{
	int year;
	int month;
	int day;
		
	void print1() {
		System.out.println(year+"."+month+"."+day);
	}
	
	void print2() {
		String monthEng=null;
		switch(this.month) {
			case 1:
				monthEng = "January";
				break;
			case 2:
				monthEng = "Febuary";
				break;
			case 3:
				monthEng = "March";
				break;
			case 4:
				monthEng = "April";
				break;
			case 5:
				monthEng = "May";
				break;
			case 6:
				monthEng = "June";
				break;
			case 7:
				monthEng = "July";
				break;
			case 8:
				monthEng = "August";
				break;
			case 9:
				monthEng = "September";
				break;
			case 10:
				monthEng = "October";
				break;
			case 11:
				monthEng = "November";
				break;
			case 12:
				monthEng = "December";
				break;
		}
		System.out.println(monthEng+" "+this.day+", "+this.year);
	}
	
}

public class Lab3_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Date d;
		d =new Date();
		d.year = 2019;
		d.month = 9;
		d.day = 24;
		d.print1();
		d.print2();
	}

}
