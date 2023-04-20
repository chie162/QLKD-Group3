#pragma once
#include <iostream>
#include "HangHoa.h"
#include <fstream>

using namespace std;

class HoaDon {
	private:
		string ma_hoa_don;
		string ngay_tao;
		string id_khach_hang;
		string id_nhan_vien;
		double tong_tien;
		double thue;
		vector<HangHoa> danh_sach_hang_hoa;
	public:
		HoaDon();
		~HoaDon();
		void nhap();
		void xuat();
		void tinh_tong_tien();
		void tinh_thue();
		void them_hang_hoa(HangHoa hang_hoa);
		void luu_hoa_don();
		double get_thue() {	return thue;}
		double get_tong_tien() { return tong_tien;}
};

HoaDon::HoaDon() {
	ma_hoa_don = "";
	ngay_tao = "";
	id_khach_hang = "";
	id_nhan_vien = "";
	tong_tien = 0;
	thue = 0;
}

HoaDon::~HoaDon() {
}

void HoaDon::nhap() {
	cout << "\nNhap ma hoa don: ";
	cin >> ma_hoa_don;
	cout << "Nhap ngay tao: ";
	cin >> ngay_tao;
	cout << "Nhap id khach hang: ";
	cin >> id_khach_hang;
	cout << "Nhap id nhan vien: ";
	cin >> id_nhan_vien;
}

void HoaDon::xuat() {
	cout << "\nXac nhan hoa don:" << endl;
	cout << "Ma hoa don: " << ma_hoa_don << endl;
	cout << "Ngay tao: " << ngay_tao << endl;
	cout << "Id khach hang: " << id_khach_hang << endl;
	cout << "Id nhan vien: " << id_nhan_vien << endl;
	cout << "Danh sach mua: " << endl;
	cout << left << setw(10) << "Ma HH";
	cout << left << setw(30) << "Ten HH";
	cout << left << setw(10) << "Xuat xu";
	cout << left << setw(20) << "Gia ban";
	cout << left << setw(10) << "So luong" << endl;
	for (int i = 0; i < danh_sach_hang_hoa.size(); i++) {
		danh_sach_hang_hoa[i].xuat();
	}
	tinh_tong_tien();
	tinh_thue();
	cout << "Tong tien: " << tong_tien << "000 VND" << endl;
	cout << "Thue: " << thue << "000 VND" << endl;
}

void HoaDon::tinh_tong_tien() {
	tong_tien = 0;
	for (int i = 0; i < danh_sach_hang_hoa.size(); i++) {
		tong_tien += danh_sach_hang_hoa[i].get_gia_ban() * danh_sach_hang_hoa[i].get_so_luong();
	}
}

void HoaDon::tinh_thue() {
	thue = tong_tien * 0.1;
}

void HoaDon::them_hang_hoa(HangHoa hang_hoa) {
	danh_sach_hang_hoa.push_back(hang_hoa);
}

void HoaDon::luu_hoa_don() {
	ofstream file_out;
	file_out.open("hoa_don.txt", ios::app);
	file_out << "Ma hoa don: " << ma_hoa_don << endl;
	file_out << "Ngay tao: " << ngay_tao << endl;
	file_out << "ID khach hang: " << id_khach_hang << endl;
	file_out << "ID nhan vien: " << id_nhan_vien << endl;
	file_out << "So loai san pham mua: " << danh_sach_hang_hoa.size() << endl;
	for (int i = 0; i < danh_sach_hang_hoa.size(); i++) {
		file_out << danh_sach_hang_hoa[i].get_ma_hh() << " ";
		file_out << danh_sach_hang_hoa[i].get_ten_hh() << " ";
		file_out << danh_sach_hang_hoa[i].get_gia_ban() << " ";
		file_out << danh_sach_hang_hoa[i].get_so_luong() << endl;
	}
	file_out << "Tong tien: " << tong_tien << "000 VND" << endl;
	file_out << "Thue: " << thue << "000 VND" << endl;
	file_out << "----------------------------------------" << endl;
	file_out.close();
}