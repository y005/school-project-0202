#include<iostream>
#include<new>
#include"LinkedList.hpp"
using namespace std;
template <class T>
Node::Node(T elem){
	this->elem = elem;
	next = null;
};		
T Node::getElem(){return this->elem;}
void Node::setElem(T elem){this->elem = elem;}
Node<T>* Node::getNext(){return next;}
void Node::setNextNode(Node<T>* b){next = b;}
Node::~Node(){}

template <class T>		
LinkedList::LinkedList(){
	int sz=0;
	Node<T>* head=null;
}
int LinkedList::size(){return sz;}
void LinkedList::push_back(T elem){
	Node<T>* tmp;
	Node<T>* node;
	if(!head){head = new Node<T>(elem);}
	else{
		for(tmp=head;;){
			if(!(tmp->getNext()){break;}
			tmp=tmp->getNext();
		}
		node=new Node<T>(elem);	
		if(node){tmp->setNextNode(new Node<T>(elem));}
	}
	size++;
}
void LinkedList::insert(int i,T elem){
	Node<T>* tmp = head;
	Node<T>* a;
	Node<T>* c = get(i);
	if(size<i){return -1;}
	for(int j=0;j<i-1;j++){tmp = tmp->getNext();}
	Node<T>* b =new Node<T>(elem);
	a = tmp;		
	b->setNextNode(c->getNext());
	a->setNextNode(b);
	c->setNextNode(b); 
	size++;
}
T LinkedList::get(int i){
	Node<T>* tmp;
	if(size<i){return -1;}
	for(int j=0;j<i;j++){tmp = tmp->getNext();}
	return tmp->getElem();
}
void LinkedList::del(int i){
	Node<T> * tmp;
	for(int j=0;j<i;j++){tmp = tmp->}
	size--;
}
void LinkedList::clear(){}
LinkedList::~LinkedList(){}	
