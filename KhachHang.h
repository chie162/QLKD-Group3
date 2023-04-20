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
		//Ham thiet lap voi tham so ngam dinh
        KhachHang(
            string Id = "NULL", 
            string Ho_ten = "NULL", 
            string Sdt = "NULL", 
            string Gioi_tinh = "NULL", 
            string Ngay_sinh = "NULL", 
            string Dia_chi = "NULL", 
            string Ngay_dang_ky = "NULL", 
            double So_tien_da_chi = 0
        );
        ~KhachHang();

        void nhap();
        void xuat();

        string get_ngay_dang_ky() { return ngay_dang_ky;}
        double get_so_tien_da_chi() { return so_tien_da_chi;}

        void set_ngay_dang_ky(string Ngay_dang_ky) { ngay_dang_ky = Ngay_dang_ky;}
        void set_so_tien_da_chi(double So_tien_da_chi) { so_tien_da_chi += So_tien_da_chi;}
};

KhachHang::KhachHang(
            string Id, 
            string Ho_ten, 
            string Sdt, 
            string Gioi_tinh, 
            string Ngay_sinh,
            string Dia_chi, 
            string Ngay_dang_ky, 
            double So_tien_da_chi
        ) : Nguoi(id, ho_ten, sdt, gioi_tinh, ngay_sinh, dia_chi) {
    ngay_dang_ky = Ngay_dang_ky;
    so_tien_da_chi = So_tien_da_chi;
}

KhachHang::~KhachHang() {
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