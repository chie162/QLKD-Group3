/****************Nguoi thuc hien Tran Le Ngoc Chau********************/
#include<iostream>
#include<string.h>
#include"Danhsach.cpp"
using namespace std;
class DSHH : public DanhSach
{
	private:
		Hanghoa*danh_sach = nulptr;
		int size = 0;
	public:
		DSHH(int n);
		~DSHH();
		
		void nhap();
		void xuat();
		void chinh_sua();
		
		
};

DSHH :: DSHH(int n)
{
	dshh = new Hanghoa[n];
	this -> size = n;
}

DSHH :: ~DSHH()
{
	delete[] dshh;
}



