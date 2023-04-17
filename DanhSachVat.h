/****************Người thực hiện: Tái Hồng Chi********************/
#pragma once

#include <iostream>
#include <string>
#include "Nguoi.h"

using namespace std;

//Định nghĩa class
class DanhSach
{
    private:
        //Thuộc tính
        Nguoi *danh_sach = nullptr;
        int size = 0;
    public:
        //Khai báo hàm khởi tạo
        DanhSach(int n);
        ~DanhSach();

        //Khai báo phương thức
        void xuat();
        void sap_xep(); // sắp xếp theo tên
        void nhap();
        void chinh_sua();
};

//Định nghĩa hàm khởi tạo
DanhSach::DanhSach(int n)
{
    danh_sach = new Nguoi[n];
    this->size = n;
}

//Định nghĩa hàm hủy
DanhSach::~DanhSach() 
{
    delete[] danh_sach;
}

//Định nghĩa các phương thức
void DanhSach::nhap()
{
    for(int i = 0; i < size; i++)
    { danh_sach[i].nhap(i + 1);}
}

void DanhSach::sap_xep()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if(danh_sach[j].get_ten() > danh_sach[j + 1].get_ten())
            {
                Nguoi temp = danh_sach[j];
                danh_sach[j] = danh_sach[j + 1];
                danh_sach[j + 1] = temp;
            }
        }
    }
}

void DanhSach::xuat()
{
    cout << "===============";
    for(int i = 0; i < size; i++)
    { danh_sach[i].xuat(i + 1);}
}

void DanhSach::chinh_sua()
{
    string ten_temp;
    cout << "Nhap ho va ten nguoi muon chinh sua thong tin: "; cin >> ten_temp;
    for(int i = 0; i < size; i++)
    {
        if(danh_sach[i].get_ten() == ten_temp)
        {
            danh_sach[i].set_ten(ten_temp);
            //return 0;
        }
    } 
}
