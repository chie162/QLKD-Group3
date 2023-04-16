/****************Nguoi thuc hien: Tran Thi Ngoc Anh****************/

#include <iostream>
#include "NhanVien.h"
#include "DanhSach.h"

using namespace std;

class DSNV : public DanhSach 
{
    private:
        NhanVien * DanhSach = nullptr;
        int size = 0; 
    public:
        DSNV(int n);
        ~DSNV();

        void nhap();
        void xuat();
        void xem_dsnv(int n);
        double get_luong();
        void xem_luongnv(int i);
}; 

DSNV::DSNV(int n)
{
    danh_sach = new NhanVien[n + 1];
    this->size = n;
}

DSNV::~DSNV()
{
    
}

void DSNV::nhap(int i)
{
    for (int i=0; i < size; i++)
    {
        danh_sach[i].nhap();
    }
}
void DSNV::xuat(int i)
{
    for (int i=0; i < size; i++)
    {
        danh_sach[i].xuat();
    }
}
void DSNV::xem_dsnv(int n)
{
    for (int i=0; i < size; i++)
    {
        danh_sach[i].xem_dsnv();
    }
}
void DSNV::xem_luongnv(int i)
{ 
    for(int i=0; i < size; i++)
    {
        if(danh_sach[i].get_luong() >= 5000000)
            danh_sach[i].xuat();
    }
}   

    
