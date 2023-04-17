/****************Người thực hiện: Nguyễn Khánh Chi********************/
#pragma once

#include "TaiChinh.h"
#include "HangHoa.h"

class PhieuNhapHang
{
private:
	int ma_phieu;
	string ngay_nhap;
	string ten_hh;
	string ten_ncc;
	int so_luong;
	double gia_mua;
	double tong_tien;
public:
	PhieuNhapHang(int Ma_phieu = 0, string Ngay_nhap = "", string Ten_hh = "", string Ten_ncc = "", int So_luong = 0, double Gia_mua = 0);
	~PhieuNhapHang();

	void nhap(int i);
	void xuat(int i);

	string get_ten_hh();
	int get_sl();

	double tinh_tong_tien();
	void update_chi_phi(TaiChinh CP);
	void set_so_luong(HangHoa HH);
};

PhieuNhapHang::PhieuNhapHang(int Ma_phieu, string Ngay_nhap, string Ten_hh, string Ten_ncc, int So_luong, double Gia_mua)
	:ma_phieu(Ma_phieu), ngay_nhap(Ngay_nhap), ten_hh(Ten_hh), ten_ncc(Ten_ncc), so_luong(So_luong), gia_mua(Gia_mua) {}

PhieuNhapHang::~PhieuNhapHang() {};

void PhieuNhapHang::nhap(int i)
{
	cout << "Nhap ma phieu: "; cin >> ma_phieu;
	cin.ignore();
	cout << "Nhap ngay nhap phieu: " << endl;
	getline(cin, ngay_nhap);
	cout << "Nhap ten hang hoa: "; getline(cin, ten_hh);
	cout << "Nhap ten nha cung cap: "; getline(cin, ten_ncc);
	cout << "Nhap so luong: "; cin >> so_luong;
	cout << "Nhap gia mua: "; cin >> gia_mua;
	cin.ignore();

}

string PhieuNhapHang::get_ten_hh()
{
	return this->ten_hh;
}

void PhieuNhapHang::xuat(int i)
{
	cout << endl;
	cout << "XAC NHAN PHIEU NHAP HANG: " << endl;
	cout << "Ma phieu: " << ma_phieu << endl;
	cout << "Ten nha cung cap: " << ten_ncc << endl;
	cout << "Ten hang hoa: " << ten_hh << endl;
	cout << "So luong: " << so_luong << endl;
	cout << "Gia mua: " << gia_mua << endl;
}

double PhieuNhapHang::tinh_tong_tien()
{
	tong_tien = gia_mua * so_luong;
	return tong_tien;
}

int PhieuNhapHang::get_sl()
{
	return this->so_luong;
}

// hàm set_so_luong cập nhật lại số lượng trong kho
void PhieuNhapHang::set_so_luong(HangHoa HH)
{
	int x;
	if (HH.get_ten_hh() == this->get_ten_hh())
	{
		x = HH.get_sl() + this->get_sl();
	}
	HH.set_so_luong(x);  // Hàm set số lượng của class HangHoa
}

// hàm cập nhật lại chi phí
void PhieuNhapHang::update_chi_phi(TaiChinh CP)
{
	double x;
	x = CP.get_chi_phi() + this->tinh_tong_tien();
	CP.set_chi_phi(x);
}
