#pragma once

#include <string>
#include "Nguoi.h"

using namespace std;

class NhanVien : public Nguoi {
    private:
        string ngay_vao_lam;
        double luong;
    public:
		//Ham thiet lap voi tham so ngam dinh
        NhanVien(
            string id = "NULL", 
            string ho_ten = "NULL", 
            string sdt = "NULL", 
            string gioi_tinh = "NULL", 
            string ngay_sinh = "NULL", 
            string dia_chi = "NULL", 
            string ngay_vao_lam = "NULL", 
            double luong = 0
        );
        ~NhanVien();

        void nhap();
        void xuat();

        string get_ngay_vao_lam() { return ngay_vao_lam;}
        double get_luong() { return luong;}

        void set_ngay_vao_lam(string Ngay_vao_lam) { ngay_vao_lam = Ngay_vao_lam;}
        void set_luong(double Luong) { luong = Luong; }
};

NhanVien::NhanVien(
            string Id, 
            string Ho_ten, 
            string Sdt, 
            string Gioi_tinh, 
            string Ngay_sinh, 
            string Dia_chi, 
            string Ngay_vao_lam, 
            double Luong
        ) : Nguoi(id, ho_ten, sdt, gioi_tinh, ngay_sinh, dia_chi) {
    ngay_vao_lam = Ngay_vao_lam;
    luong = Luong;
}

NhanVien::~NhanVien() {
}

void NhanVien::nhap() {
    Nguoi::nhap();
    cout << "Nhap ngay vao lam: ";
    cin >> ngay_vao_lam;
    cout << "Nhap luong: ";
    cin >> luong;
}

void NhanVien::xuat() {
    Nguoi::xuat();
    cout << "Ngay vao lam: " << ngay_vao_lam << endl;
    cout << "Luong: " << luong << endl;
}