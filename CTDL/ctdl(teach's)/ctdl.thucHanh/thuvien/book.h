#ifndef book_h
#define book_h
#include <string.h>
class Book
{
private:
	char ts[100];
	char tg[100];
	int nxb;
	int st;
public:
	Book()
	{
	};
	Book(const char *t, const char * a, int y, int p)
	{
		strcpy(ts, t);
		strcpy(tg, a);
		nxb = y;
		st = p;
	};
	const char * GetTenSach() const
	{
		return ts;
	};
	const char * GetTacGia() const
	{
		return tg;
	};
	int GetNamXB() const
	{
		return nxb;
	};
	int GetSoTrang()const
	{
		return st;
	};
};

#endif
