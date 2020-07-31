class Puzzle{
	int num[9]; 
	int zero;
	public:
		Puzzle();
		void move();
		void shuffle(); 
		bool isDone();
		void print();
		void swap(int a,int b);	
};

