/****************Người thực hiện: Tái Hồng Chi********************/
#pragma once

#include <iostream>
#include <string>
#include "Ngay.h"
#include "Nguoi.h"

using namespace std;

//Định nghĩa class
class DanhSach
{
    protected:
        //Thuộc tính
        Nguoi *danh_sach = nullptr;
        int size = 0;
    public:
        //Khai báo hàm khởi tạo
        DanhSach();
        DanhSach(int n);
        ~DanhSach();

        //Khai báo phương thức
        void xuat();
        void sap_xep(); // sắp xếp theo tên
        void nhap();
        void chinh_sua();
};

//Định nghĩa hàm khởi tạo
DanhSach::DanhSach() {}
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
    int id_temp;
    cout << "Nhap ID nguoi muon chinh sua thong tin: "; cin >> id_temp;
    for(int i = 0; i < size; i++)
    {
        if(danh_sach[i].get_id() == id_temp)
        {
            danh_sach[i].xuat(i + 1);
            
            int lua_chon = 0;
            cout << "Nhap thong tin can sua tuong ung voi cac con so duoi day:" << endl;
            cout << "1. ID" << endl;
            cout << "2. Ho va ten" << endl;
            cout << "3. SDT" << endl;
            cout << "4. Gioi tinh" << endl;
            cout << "5. Ngay sinh" << endl;
            cout << "6. Dia chi" << endl;
            cin >> lua_chon;

            switch(lua_chon) 
            {
            case 1: 
                {
                int id_moi;
                cout << "Nhap ID moi: "; cin >> id_moi; danh_sach[i].set_id(id_moi);
                break;
                }
            case 2:
                {
                string ten_moi;
                cout << "Nhap ho va ten moi: "; cin >> ten_moi; danh_sach[i].set_ten(ten_moi);
                break;
                }
            case 3:
                {
                string sdt_moi;
                cout << "Nhap SDT moi: "; cin >> sdt_moi; danh_sach[i].set_sdt(sdt_moi);
                break;
                }
            case 4:
                {string gioi_tinh_moi;
                cout << "Nhap gioi tinh moi: "; cin >> gioi_tinh_moi; danh_sach[i].set_gioi_tinh(gioi_tinh_moi);
                break;}
            case 5:
                {string ngay_sinh_moi;
                cout << "Nhap ngay sinh moi: "; cin >> ngay_sinh_moi; danh_sach[i].set_ngay_sinh(ngay_sinh_moi);
                break;}
            case 6:
                {string dia_chi_moi;
                cout << "Nhap dia chi moi: "; cin >> dia_chi_moi; danh_sach[i].set_dia_chi(dia_chi_moi);
                break;}
            //default:
                // code block
            }

            cout << "========\nThong tin vua cap nhat: \n" << endl;
            danh_sach[i].xuat(i + 1);
            break;
        }

    }
}
