#pragma once
#include <string>
#include <vector>
#include <fstream>

#include "HangHoa.h"
using namespace std;

class PhieuNhapHang {
    private:
        string ma_phieu;
        string ngay_tao;
        string ten_nha_cung_cap;
        double tong_tien;
        vector<HangHoa> danh_sach_hang_hoa;
    public:
        PhieuNhapHang();
        ~PhieuNhapHang();
        void nhap();
        void xuat();
        void tinh_tong_tien();
        void them_hang_hoa();
        void luu_phieu_nhap_hang();
        void luu_hang_hoa(vector<HangHoa> &danh_sach_hang_cu);
};

PhieuNhapHang::PhieuNhapHang() {
    ma_phieu = "";
    ngay_tao = "";
    ten_nha_cung_cap = "";
    tong_tien = 0;
}

PhieuNhapHang::~PhieuNhapHang() {
}

void PhieuNhapHang::nhap() {
    cout << "Nhap ma phieu: ";
    cin >> ma_phieu;
    cout << "Nhap ngay tao: ";
    cin >> ngay_tao;
    cout << "Nhap ten nha cung cap: ";
    cin >> ten_nha_cung_cap;
}

void PhieuNhapHang::xuat() {
    cout << "Ma phieu: " << ma_phieu << endl;
    cout << "Ngay tao: " << ngay_tao << endl;
    cout << "Ten nha cung cap: " << ten_nha_cung_cap << endl;
    cout << "Danh sach hang nhap: " << endl;
    cout << left << setw(10) << "Ma HH";
	cout << left << setw(30) << "Ten HH";
	cout << left << setw(10) << "Xuat xu";
	cout << left << setw(20) << "Gia mua";
	cout << left << setw(10) << "So luong" << endl;
    for (int i = 0; i < danh_sach_hang_hoa.size(); i++) {
        danh_sach_hang_hoa[i].xuat();
    }
    tinh_tong_tien();
    cout << "Tong tien: " << tong_tien << "000 VND" << endl;
}

void PhieuNhapHang::tinh_tong_tien() {
    tong_tien = 0;
    for (int i = 0; i < danh_sach_hang_hoa.size(); i++) {
        tong_tien += danh_sach_hang_hoa[i].get_gia_ban() * danh_sach_hang_hoa[i].get_so_luong();
    }
}

void PhieuNhapHang::them_hang_hoa() {
    HangHoa hang_hoa;
    hang_hoa.nhap();
    danh_sach_hang_hoa.push_back(hang_hoa);
}

void PhieuNhapHang::luu_phieu_nhap_hang() {
    ofstream file_out("phieu_nhap_hang.txt", ios::app);
    file_out << "Ma phieu: " << ma_phieu << endl;
    file_out << "Ngay tao: " << ngay_tao << endl;
    file_out << "Ten nha cung cap: " << ten_nha_cung_cap << endl;
    file_out << "Danh sach hang nhap: " << endl;
    for (int i = 0; i < danh_sach_hang_hoa.size(); i++) {
        file_out << danh_sach_hang_hoa[i].get_ma_hh() << " ";
        file_out << danh_sach_hang_hoa[i].get_ten_hh() << " ";
        file_out << danh_sach_hang_hoa[i].get_xuat_xu() << " ";
        file_out << danh_sach_hang_hoa[i].get_gia_ban() << " ";
        file_out << danh_sach_hang_hoa[i].get_so_luong() << endl;
    }
    tinh_tong_tien();
    file_out << "Tong tien: " << tong_tien << endl;
    file_out << "----------------------------------------" << endl;
    file_out.close();
}

void PhieuNhapHang::luu_hang_hoa(vector<HangHoa> &danh_sach_hang_cu) {
    for (int i = 0; i < danh_sach_hang_hoa.size(); i++) {
        for (int j = 0; j < danh_sach_hang_cu.size(); j++) {
            if (danh_sach_hang_hoa[i].get_ma_hh() == danh_sach_hang_cu[j].get_ma_hh()) {
                danh_sach_hang_cu[j].set_so_luong(danh_sach_hang_cu[j].get_so_luong() + danh_sach_hang_hoa[i].get_so_luong());
                if (danh_sach_hang_cu[j].get_gia_ban() < danh_sach_hang_hoa[i].get_gia_ban() * 1.4) {
                    danh_sach_hang_cu[j].set_gia_ban(danh_sach_hang_hoa[i].get_gia_ban() * 1.4);
                }
            } else {
                HangHoa temp = danh_sach_hang_hoa[i];
                temp.set_gia_ban(temp.get_gia_ban() * 1.4);
                danh_sach_hang_cu.push_back(temp);
            }
        }
    }
}