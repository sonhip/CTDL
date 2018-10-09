template <class T>
struct Node{
	T data;
	Node <T> *next;
	Node()
	{
	};
	Node(T t)
	{
	    data = t;
	    next = 0;
	};
};
