#include <string.h>
class Sach
{
private:
	char TenSach[100];
	char TenTg[100];
	int Nxb;
	int SoTrang;
public:
	Sach(){};
	Sach(const char *s, const char *t, int n, int st )
	{
		strcpy(TenSach, s);
		strcpy(TenTg, t);
		Nxb=n;
		SoTrang=st;
	}
	const char * GetTenSach()const
	{
		return TenSach;
	}
	const char * GetTenTg()const
	{
		return TenTg;
	}
	int GetNxb()const
	{
		return Nxb;
	}
	int GetSoTrang()const
	{
		return SoTrang;
	}
	
};