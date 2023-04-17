/****************Nguoi thuc hien: Tran Thi Ngoc Anh****************/
#pragma once

#include <iostream>
#include "NhanVien.h"
#include "DanhSach.h"

using namespace std;

class DSNV: public DanhSach
{
    private:
        NhanVien * danh_sach = nullptr;
        int size = 0; 
    public:
        DSNV(int n);
        ~DSNV();

        void nhap();
        void xuat();
        void xem_luongnv();
}; 

DSNV::DSNV(int n)
{
    danh_sach = new NhanVien[n];
    this->size = n;
}

DSNV::~DSNV()
{
    delete[] danh_sach; 
}

void DSNV::nhap()
{
    for (int i=0; i < size; i++)
    {
        danh_sach[i].nhap(i + 1);
    }
}
void DSNV::xuat()
{
 	cout << "\n============ Danh sach nhan vien ============" << endl;
    for (int i=0; i < size; i++)
    {
        danh_sach[i].xuat(i + 1);
    }
}

void DSNV::xem_luongnv()
{
    int m=0; 
    for(int i=0; i<= size; i++)
    {
        if(danh_sach[i].get_luong() >=5000000)
        {
            m++;
        }
    }
    cout<<"co "<<m<<"danh sach nhan vien co muc luong >=5000000 "<<endl;
}   

    