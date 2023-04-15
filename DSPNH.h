/****************Nguoi thuc hien Tran Le Ngoc Chau********************/
#include<iostream>
#include<string.h>
#include"DanhSach.h"
using namespace std;
class DSPNH : public 
{
	private:
		PhieuNhapHang*danh_sach = nullptr;
	public:
		DSPNH(int n);
		~DSPNH();
};

DSPNH :: DSPNH(int n)
{
	dshh = new PhieuNhapHang[n];
	this -> size = n;
}

DSPNH :: ~DSPNH()
{
	delete[] dspnh;
}
