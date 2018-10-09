template <class T>
class List
{
private:
	T a[100];
	int N;
public:
	List()
	{
		N = 0;
	};	
	void Add(T v)
	{
		a[N] = v;
		N++;
	};
	void PrintAll() const
	{
		for(int i = 0; i<N; i++)
			cout<<a[i]<<" ";
		cout<<endl;

	};
	void Change(int pos, T value)
	{
		a[pos-1] = value;	
	};	
	int Count() const
	{
		return N;
	};
	
};
