#pragma once

#include "Ngay.h"
#include "TaiChinh.h"
#include "HangHoa.h"

class PhieuNhapHang
{
private:
	int ma_phieu;
	Ngay ngay_nhap;
	string ten_hh;
	string ten_ncc;
	int so_luong;
	double gia_mua;
public:
	PhieuNhapHang();
	PhieuNhapHang(int Ma_phieu, Ngay Ngay_nhap, string Ten_hh, string Ten_ncc, int So_luong, double Gia_mua);
	~PhieuNhapHang();

	void nhap();
	void ktra_hh(HangHoa HH);
	void xuat();

	string get_ten_hh();
	int get_sl();

	double tinh_tong_tien();
	void update_chi_phi(TaiChinh CP);
	void set_so_luong(HangHoa HH);
};

