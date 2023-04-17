/****************Nguoi thuc hien Tran Le Ngoc Chau********************/
#pragma once

#include<iostream>
#include<string.h>
#include"HangHoa.h"
//#include"DanhSach.h"
using namespace std;

class DSHH
{
	private:
		HangHoa*danh_sach = nullptr;
		int size = 0;
	public:
		DSHH();
		DSHH(int n);
		~DSHH();
		
		void nhap();
		void xuat();
		friend void ktra_sl(DSHH danh_sach, DSHH danh_sach_mua);

		
};
DSHH::DSHH() {}

DSHH::DSHH(int n)
{
	danh_sach = new HangHoa[n];
	this -> size = n;
}

DSHH :: ~DSHH()
{
	delete[] danh_sach;
}

  void DSHH::nhap()
  {
  	for (int i=0; i<size; i++)
	  {
	  danh_sach[i].nhap(i + 1); 
	   } 
   } 
 void DSHH::xuat()
 {
 	cout << "\n============Danh sach hang hoa" << endl;
	for (int i=0; i<size; i++)
	 {
	 	danh_sach[i].xuat(i + 1); 
	  } 
  } 




