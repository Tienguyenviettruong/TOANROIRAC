#ifndef node_h
#define node_h
template <class T>
struct Node{
	T data;
	Node<T> * next;
};
#endif
