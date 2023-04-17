#pragma once

#include <iostream>
#include <string>
#include "Nguoi.h"

using namespace std;

class KhachHang : public Nguoi {
    private:
        string ngay_dang_ky;
        double so_tien_da_chi;
    public:
        KhachHang();
        KhachHang(string ngay_dang_ky, double so_tien_da_chi);
        ~KhachHang();

        void nhap();
        void xuat();

        string get_ngay_dang_ky();
        double get_so_tien_da_chi();

        void set_ngay_dang_ky(string ngay_dang_ky);
        void set_so_tien_da_chi(double so_tien_da_chi);
};

KhachHang::KhachHang() : Nguoi() {
    ngay_dang_ky = "NULL";
    so_tien_da_chi = 0;
}

KhachHang::KhachHang(string ngay_dang_ky, double so_tien_da_chi) : Nguoi(id, ho_ten, sdt, gioi_tinh, dia_chi, ngay_sinh) {
    this->ngay_dang_ky = ngay_dang_ky;
    this->so_tien_da_chi = so_tien_da_chi;
}

KhachHang::~KhachHang() {
}

string KhachHang::get_ngay_dang_ky() {
    return ngay_dang_ky;
}

double KhachHang::get_so_tien_da_chi() {
    return so_tien_da_chi;
}

void KhachHang::set_ngay_dang_ky(string ngay_dang_ky) {
    this->ngay_dang_ky = ngay_dang_ky;
}

void KhachHang::set_so_tien_da_chi(double so_tien_da_chi) {
    this->so_tien_da_chi += so_tien_da_chi;
}

void KhachHang::nhap() {
    Nguoi::nhap();
    cout << "Nhap ngay dang ky: ";
    cin >> ngay_dang_ky;
    cout << "Nhap so tien da chi: ";
    cin >> so_tien_da_chi;
}

void KhachHang::xuat() {
    Nguoi::xuat();
    cout << "Ngay dang ky: " << ngay_dang_ky << endl;
    cout << "So tien da chi: " << so_tien_da_chi << endl;
}