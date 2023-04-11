/****************Người thực hiện: Nguyễn Khánh Chi********************/

#include "HoaDon.h"

class DSHD
{
private:
	HoaDon* HD = nullptr;
	int size = 0;
public:
	DSHD(int n);
	~DSHD();

	void nhap();
	void xuat();
	void xem_hd(int ngay, int thang, int nam);
};

DSHD::DSHD(int n)
{
	HD = new HoaDon[n + 1];
	this->size = n;
}

DSHD::~DSHD()
{
	delete[] HD;
}

void DSHD::nhap()
{
	for (int i = 1; i <= size; i++)
	{
		HD[i].nhap();
	}
}
void DSHD::xuat()
{
	for (int i = 1; i <= size; i++)
	{
		HD[i].xuat();
	}
}

// Xem toàn bộ hóa đơn trong ngày cụ thể
void DSHD::xem_hd(int ngay, int thang, int nam)
{
	for (int i = 1; i <= size; i++)
	{
		if(HD[i].get_ngay_xuat() == ngay && HD[i].get_thang_xuat() == thang && HD[i].get_nam_xuat() == nam)
		{
			HD[i].xuat();
		}
	}
}
