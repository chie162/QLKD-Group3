// /****************Người thực hiện: Nguyễn Khánh Chi********************/
// #pragma once

// #include <iostream>
// #include <string>
// #include "HangHoa.h"
// #include "DSHH.h"
// #include "TaiChinh.h"
// #include "KhachHang.h"

// #include "DSKH.h"

// using namespace std;

// class HoaDon 
// {
// private:
// 	int ma_hd; 
// 	string ngay_xuat;
// 	DSHH danh_sach_mua;
// 	string ten_kh;
// 	string ten_nv;
// 	string *ten_hh;
// 	int sl_hang;    // số loại hàng trong hóa đơn 
// 	int *sl_mua;     // số lượng mua của mỗi mặt hàng
// 	double *gia_ban;
// 	double tong_tien;
// 	double thue;
// public:
// 	HoaDon();
// HoaDon(int Ma_hd, string Ngay_xuat, string Ten_kh, string Ten_nv, string *Ten_hh, int Sl_hang, int *Sl_mua, double *Gia_ban,  double Tong_tien, double Thue);
// 	~HoaDon();

// friend class HangHoa;
// friend class DSHH;
// friend class TaiChinh;
// friend class KhachHang;
// friend class DSKH;




// 	void nhap();
// friend void ktra_sl(DSHH danh_sach, DSHH danh_sach_mua);
// 	void xuat();

// 	void set_so_luong(DSHH danh_sach);
// 	double get_tong_tien();
// 	double get_thue();
// 	string get_ngay_xuat();


// 	void update_doanh_thu(TaiChinh qlkd);
// 	void update_chi_phi(TaiChinh qlkd);
// 	void update_tien_kh_chi(DSKH danh_sach);

// };

// HoaDon::HoaDon()
// {
// 	ma_hd = 0;
// 	ten_kh = ten_nv = "";
// 	ten_hh = new string[sl_hang + 1];
// 	tong_tien = thue = 0;
// 	sl_hang = -1;
// 	sl_mua = new int[sl_hang + 1];
// 	gia_ban = new double[sl_hang + 1];
// }

// HoaDon::HoaDon(int Ma_hd, string Ngay_xuat, string Ten_kh, string Ten_nv, string* Ten_hh, int Sl_hang, int* Sl_mua, double* Gia_ban, double Tong_tien, double Thue)
// {
// 	ma_hd = Ma_hd;
// 	ngay_xuat = Ngay_xuat;
// 	ten_kh = Ten_kh;
// 	ten_nv = Ten_nv;
// 	ten_hh = Ten_hh;
// 	sl_mua = Sl_mua;
// 	gia_ban = Gia_ban;
// 	sl_hang = Sl_hang;
// 	tong_tien = Tong_tien;
// 	thue = Thue;
// }

// HoaDon::~HoaDon()
// {
// 	delete ten_hh, sl_mua, gia_ban;
// }

// void HoaDon::nhap()
// {
// 	cout << "Nhap ma hoa don: "; cin >> ma_hd; cin.ignore();
// 	cout << "Nhap ngay xuat hoa don: ", getline(cin, ngay_xuat);
// 	cout << "Nhap ten khach hang: "; getline(cin, ten_kh);
// 	cout << "Nhap ten nhan vien: "; getline(cin, ten_nv);

// 	cout << "Nhap so loai hang trong hoa don: ";
// 	cin >> sl_hang; cin.ignore();
// 	danh_sach_mua = DSHH(sl_hang); // tạo list hàng hóa kh mua thông qua hàm khởi tạo của class DSHH
// 	int id_temp;
// 	string ten_hh_temp;
// 	int sl_temp;
// 	double gia_ban_temp;

// 	for(int i = 0; i < sl_hang; i++)
// 	{
// 		cout << "Mat hang thu " << i << ": "; 
// 		cout << "Nhap ID: "; cin >> id_temp;
// 		danh_sach_mua[i].set_id(id_temp);


// 		cout << "Nhap so luong: "; cin >> sl_temp;
// 		danh_sach_mua[i].set_so_luong(sl_temp);
// 		ktra_sl(danh_sach, danh_sach_mua);

// 		danh_sach_mua[i].set_gia_ban(gia_ban_temp);


// 	}
// 	cout << endl;
// }

// // Ktra số lượng trong kho dựa vào tên hàng hóa, nếu không đủ số lượng khách hàng 
// // cần thì in ra màn hình số lượng trong kho và nhập lại số lượng

// void ktra_sl(DSHH danh_sach, DSHH danh_sach_mua)
// {
// 	for (int i = 0; i < sl_hang; i++)
// 	{
// 		if (danh_sach[i].get_id() == danh_sach_mua[i].get_id())
// 			//danh_sach_mua[i].set_ten_hh(ten_hh_temp); //gán tên hàng hóa 
			
// 			do
// 			{
// 				cout << "Hang hoa thu" << i << "khong du so luong!" << endl;
// 				cout << "So luong trong kho: " << danh_sach[i].get_sl() << endl;
// 				cout << "Nhap lai so luong hang hoa " << i << endl;
// 				cout << "So luong: "; cin >> sl_temp; danh_sach_mua[i].set_so_luong(sl_temp);

// 			} while (danh_sach[i].get_sl() < danh_sach_mua[i].get_sl());
			
// 	}
// }

// void HoaDon::xuat()
// {
// 	cout << "XAC NHAN HOA DON: " << endl;
// 	cout << endl;
// 	cout << "Ma hoa don: " << ma_hd << endl;
// 	cout << "Ngay xuat: " << ngay_xuat << endl;
// 	cout << "Ten khach hang: " << ten_kh << endl;
// 	cout << "Ten nhan vien: " << ten_nv << endl;
// 	cout << endl;
// 	cout << "Danh sach mua hang: " << endl;
// 	for (int i = 0; i < sl_hang; i++)
// 	{
// 		cout << endl;
// 		cout << "Hang hoa thu " << i << endl;
// 		cout << "Ten: "; danh_sach_mua[i].get_ten();
// 		cout << "So luong: "; danh_sach_mua[i].get_sl();
// 		cout << "Gia: "; danh_sach_mua[i].get_gia_ban();
// 		tong_tien += danh_sach_mua[i].get_gia_ban() * danh_sach_mua[i].get_sl();
		
// 	}
// 	thue = tong_tien * 10 / 100;
// 	cout << endl;
// 	cout << "Tong tien (da bao gom VAT): " << tong_tien << endl;
// 	cout << "Thue VAT 10%: " << thue << endl;
// }

// double HoaDon::get_tong_tien()
// {
// 	return this->tong_tien;
// }
// double HoaDon::get_thue()
// {
// 	return this->thue;
// }

// // Hàm lấy ra ngày, tháng, năm của ngày xuất hóa đơn
// string HoaDon::get_ngay_xuat()
// {
// 	return this->ngay_xuat; // Hàm get ngày của class Ngay
// }

// // Hàm set_so_luong cập nhật lại số lượng trong kho
// void HoaDon::set_so_luong(DSHH danh_sach)
// {
// 	int amount;

// 	for(int i = 0; i < sl_hang; i++)
// 	{
// 		if(danh_sach[i].get_id() == danh_sach_mua[i].get_id())
// 		{
// 			amount = danh_sach[i].get_sl() - danh_sach_mua[i].get_sl();

// 			danh_sach[i].set_so_luong(amount);
// 		}
// 	}
// }

// // Hàm cập nhật lại doanh thu, chi phí (thuế)
// void HoaDon::update_doanh_thu(TaiChinh qlkd)
// {
// 	double x;
// 	x = qlkd.get_doanh_thu() + this->get_tong_tien();
// 	qlkd.set_doanh_thu(x);
// }
// void HoaDon::update_chi_phi(TaiChinh qlkd) // Hàm get, set doanh thu của class TaiChinh
// {
// 	double x;
// 	x = qlkd.get_chi_phi() + this->get_thue(); //Hàm get, set chi phi của class TaiChinh
// 	qlkd.set_chi_phi(x);
// }

// // hàm tăng số tiền đã chi của khách hàng từ tên khách hàng trong hóa đơn
// void HoaDon::update_tien_kh_chi(DSKH danh_sach) // Hàm get, set của class KhachHang
// {
// 	for(int i = 0; i < sizeof(danh_sach); i++)
// 	{
// 		if (danh_sach[i].get_ten() == this->ten_kh)
// 		{
// 			double x;
// 			x = danh_sach[i].get_so_tien_da_chi() + this->get_tong_tien();
// 			danh_sach[i].set_so_tien_da_chi(x);
// 			break;
// 		}

// 	}
// }
