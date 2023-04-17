// /****************Người thực hiện: Nguyễn Khánh Chi********************/
// #pragma once

// #include "HoaDon.h"

// class DSHD
// {
// private:
// 	HoaDon* HD = nullptr;
// 	int size = 0;
// public:
// 	DSHD(int n);
// 	~DSHD();

// 	void nhap();
// 	void xuat();
// void xem_hd(string ngay)
// };

// DSHD::DSHD(int n)
// {
// 	HD = new HoaDon[n + 1];
// 	this->size = n;
// }

// DSHD::~DSHD()
// {
// 	delete[] HD;
// }

// void DSHD::nhap()
// {
// 	for (int i = 1; i <= size; i++)
// 	{
// 		HD[i].nhap();
// 	}
// }
// void DSHD::xuat()
// {
// 	for (int i = 1; i <= size; i++)
// 	{
// 		HD[i].xuat();
// 	}
// }

// // Xem toàn bộ hóa đơn trong ngày cụ thể
// void DSHD::xem_hd(string ngay)
// {
// 	for (int i = 1; i <= size; i++)
// 	{
// 		if(HD[i].get_ngay_xuat() == ngay)
// 		{
// 			HD[i].xuat();
// 		}
// 	}
// }
