/****************Nguoi thuc hien: Tran Thi Ngoc Anh****************/

#include <iostream>
#include "NhanVien.h"
#include "DanhSach.h"

using namespace std;

class DSNV 
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
        void nhap1nv();
        void xem_luongnv(int i);
}; 

DSNV::DSNV(int n)
{
    NV = new NhanVien[n + 1];
    this->size = n;
}

DSNV::~DSNV()
{
    delete[] NV; 
}

void DSNV::nhap(int i)
{
    for (int i=0; i < size; i++)
    {
        NV[i].nhap();
    }
}
void DSNV::xuat(int i)
{
    for (int i=0; i < size; i++)
    {
        NV[i].xuat();
    }
}
void DSNV::xem_dsnv(int n)
{
    for (int i=0; i < size; i++)
    {
        NV[i].nhap1nv();
        NV[i].xuat1nv();
    }
}
void DSNV::xem_luongnv(int i)
{
    int m=0; 
    for(int i=0; i < size; i++)
    {
        if(NV[i].luong>=5000000)
        {
            m++;
        }
    }
    cout<<"co "<<m<<"danh sach nhan vien co muc luong >=5000000 "<<endl;
}   

    
