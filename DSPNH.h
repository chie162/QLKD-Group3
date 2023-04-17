/****************Nguoi thuc hien Tran Le Ngoc Chau********************/
#pragma once
#include<iostream>
#include<string.h>
#include"PhieuNhapHang.h"
using namespace std;
class DSPNH
{
	private:
		PhieuNhapHang*danh_sach = nullptr;
		int size = 0;
	public:
		DSPNH(int n);
		~DSPNH();

		void xuat();
        void nhap();

};

DSPNH :: DSPNH(int n)
{
	danh_sach = new PhieuNhapHang[n];
	this -> size = n;
}

DSPNH :: ~DSPNH()
{
	delete[] danh_sach;
}

void DSPNH::nhap()
{
    for(int i = 0; i < size; i++)
    { danh_sach[i].nhap(i + 1);}
}

void DSPNH::xuat()
{
    cout << "===============";
    for(int i = 0; i < size; i++)
    { danh_sach[i].xuat(i + 1);}
}