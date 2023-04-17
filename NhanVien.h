#pragma once

#include <string>
#include "Nguoi.h"

using namespace std;

class NhanVien : public Nguoi {
    private:
        string ngay_vao_lam;
        double luong;
    public:
        NhanVien();
        NhanVien(string ngay_vao_lam, double luong);
        ~NhanVien();

        void nhap();
        void xuat();

        string get_ngay_vao_lam();
        double get_luong();

        void set_ngay_vao_lam(string ngay_vao_lam);
        void set_luong(double luong);
};

NhanVien::NhanVien() : Nguoi() {
    ngay_vao_lam = "NULL";
    luong = 0;
}

NhanVien::NhanVien(string ngay_vao_lam, double luong) : Nguoi(id, ho_ten, sdt, gioi_tinh, dia_chi, ngay_sinh) {
    this->ngay_vao_lam = ngay_vao_lam;
    this->luong = luong;
}

NhanVien::~NhanVien() {
}

string NhanVien::get_ngay_vao_lam() {
    return ngay_vao_lam;
}

double NhanVien::get_luong() {
    return luong;
}

void NhanVien::set_ngay_vao_lam(string ngay_vao_lam) {
    this->ngay_vao_lam = ngay_vao_lam;
}

void NhanVien::set_luong(double luong) {
    this->luong = luong;
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