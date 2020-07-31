template <class T>
class Node{
	T elem;
	Node<T>* next;
	public:	
		Node(T elem);		
		T getElem();
		void setElem(T elem);
		Node<T>* getNext();
		void setNextNode();
		~Node();		
}; 
template <class T>
class LinkedList{
	int sz;
	Node<T>* head;
	public:
		LinkedList();
		int size();
		void push_back(T elem);
		void insert(int i, T elem);
		T get(int i);
		void del(int i);
		void clear();
		~LinkedList();	
};
