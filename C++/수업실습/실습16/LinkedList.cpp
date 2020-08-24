#include<iostream>
#include<new>
#include"LinkedList.hpp"
using namespace std;

template <class T>
Node::Node(T elem){
	this->elem = elem;
	next = null;
};		
T Node::getElem(){
	return this->elem;
};
void Node::setElem(T elem){
	this->elem = elem;
};
Node* Node::getNext(){
	return next;
};
void Node::setNextNode(Node* b){
	next = b;
};
Node::~Node(){
};

template <class T>		
LinkedList::LinkedList(){
	int size=0;
	Node* head=null;
};
void LinkedList::push_back(T elem){
	Node* tmp;
	if(!head){head = new Node(elem);}
	else{
		for(tmp=head;;){
			if(!(tmp->getNext()){break;}
				tmp=tmp->getNext();
		}	
		if(new Node(elem)){
			tmp->setNextNode(new Node<T>()elem));
		}
		
	}
};
void LinkedList::insert(int i,T elem){
	Node* tmp = head;
	Node* a = null;
	Node* c = get(i);
	if(size<i){return -1;}
	for(int j=0;j<i-1;j++){
		tmp = tmp->getNext();
	}
	Node* b =new Node<T>(elem);
	a = tmp;//now-1
	b-> = c->getNext 	//now
};
Node LinkedList::get(int i){
	Node * tmp;
	if(size<i){return -1;}
	for(int j=0;j<i;j++){
		tmp = tmp->getNext();			
	}
	return tmp;
};
void LinkedList::del(int i){
	Node * tmp;
	for(int j=0;j<i;j++){
		tmp = Node
			
	}
};
void LinkedList::clear(){
};
LinkedList::~LinkedList(){
};	

