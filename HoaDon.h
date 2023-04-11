#pragma once

#include <iostream>
#include <string>
#include "Ngay.h"
#include "HangHoa.h"
#include "TaiChinh.h"
#include "KhachHang.h"

using namespace std;

class HoaDon :public HangHoa
{
private:
	int ma_hd; 
	Ngay ngay_xuat;
	string ten_kh;
	string ten_nv;
	string *ten_hh;
	int sl_hang;    // số loại hàng trong hóa đơn 
	int *sl_mua;     // số lượng mua của mỗi mặt hàng
	double *gia_ban;
	double tong_tien;
	double thue;
public:
	HoaDon();
	HoaDon(int Ma_hd, Ngay Ngay_xuat, string Ten_kh, string Ten_nv, string *Ten_hh, int Sl_hang, int *Sl_mua, double *Gia_ban,  double Tong_tien, double Thue);
	~HoaDon();

	void nhap();
	void ktra_sl(HangHoa HH);
	void xuat();

	void set_so_luong(HangHoa HH);
	double get_tong_tien();
	double get_thue();
	int get_ngay_xuat();
	int get_thang_xuat();
	int get_nam_xuat();

	void update_doanh_thu(TaiChinh DT);
	void update_chi_phi(TaiChinh CP);
	void update_tien_kh_chi(KhachHang KH);

};

