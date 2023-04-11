#pragma once

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

