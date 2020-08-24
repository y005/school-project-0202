class SortAlgorithm{
	protected:
		int* values;
	public:
		SortAlgorithm(int* values,int num);
		void print();
		virtual void sort(int l,int r) = 0;
		virtual ~SortAlgorithm();
};
class QuickSort : public SortAlgorithm{
		int partition(int l,int r);
	public:
		QuickSort(int * values,int num): SortAlgorithm(values,num){};
		void sort(int l,int r);
		~QuickSort();	
};
class CountSort : public SortAlgorithm{
	public:
		CountSort(int * values,int num): SortAlgorithm(values,num){};
		void sort(int l,int r);
		~CountSort();	
};
