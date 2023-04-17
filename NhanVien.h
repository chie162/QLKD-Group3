/****************Nguoi thuc hien: Tran Thi Ngoc Anh****************/ 
#pragma once

#include <iostream> 
#include <string>
#include "Nguoi.h"

using namespace std;

class NhanVien : public Nguoi
{
    protected:
        string ngay_vao_lam;
        double luong;
    public:
        NhanVien(string ngay_vao_lam = "none", double luong = 0);
        ~NhanVien();


        void nhap(int i);
        void xuat(int i);
        //void chinh_sua(char choice);
       
        double get_luong() {return this->luong; }


        void set_ngay_vao_lam(string ngay_vao_lam) {this->ngay_vao_lam = ngay_vao_lam; }
        void set_luong(double luong) {this->luong = luong; }
};


NhanVien::NhanVien(string ngay_vao_lam, double luong)
    :Nguoi(id, ten, sdt, gioi_tinh, ngay_sinh, dia_chi), ngay_vao_lam(ngay_vao_lam), luong(luong)
{
  
}


NhanVien::~NhanVien()
{

}


void NhanVien::nhap(int i)
{
    Nguoi::nhap(i);
    cout<<"Nhap ngay vao lam: "; getline(cin, this->ngay_vao_lam);
    cout<<"Nhap luong:"; cin >> this->luong; cin.ignore();
}


void NhanVien::xuat(int i)
{
    Nguoi::xuat(i);
    cout<<"Ngay vao lam:" << ngay_vao_lam << endl;
    cout<<"Luong:"<< luong << endl;
}

// void NhanVien::chinh_sua(char choice)
// { 
//     do{
//         cout<<"Nhap ten nhan vien:"; cin>>ten;
//         cout<<"Nhap ma nhan vien:"; cin>>ma_nv;
//         cout<<"Ban co muon chinh sua thong tin nhan vien nay:"\n[Y]es\t[N]o\n; cin>>choice; 
//     }
//     while ((choice == 'Y') || (choice == 'N'));
//     return 0; 
// }