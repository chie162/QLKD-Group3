/****************Người thực hiện: Nguyễn Khánh Chi********************/

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
	HoaDon(int Ma_hd = 0, Ngay Ngay_xuat, string Ten_kh = "None", string Ten_nv = "None", string *Ten_hh, int Sl_hang = 0, int *Sl_mua, double *Gia_ban,  double Tong_tien = 0, double Thue = 0);
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

HoaDon(int Ma_hd = 0, Ngay Ngay_xuat, string Ten_kh = "None", string Ten_nv = "None", string *Ten_hh, int Sl_hang = 0, int *Sl_mua, double *Gia_ban,  double Tong_tien = 0, double Thue = 0)
{
	
}

HoaDon::~HoaDon()
{
	delete ten_hh, sl_mua, gia_ban;
}

void HoaDon::nhap()
{
	cout << "Nhap ma hoa don: "; cin >> ma_hd;
	cout << "Nhap ngay xuat: " << endl;
	ngay_xuat.nhap();
	cin.ignore();
	cout << "Nhap ten khach hang: "; getline(cin, ten_kh);
	cout << "Nhap ten nhan vien: "; getline(cin, ten_nv);
	cout << "Nhap so loai hang trong hoa don: ";
	cin >> sl_hang; cin.ignore();
	ten_hh = new string[sl_hang + 1];
	sl_mua = new int[sl_hang + 1];
	gia_ban = new double[sl_hang + 1];
	for (int i = 1; i <= sl_hang; i++)
	{
		cout << "Hang thu " << i << endl;
		cout << "Nhap ten hang: "; getline(cin, ten_hh[i]);
		cout << "Nhap so luong: "; cin >> sl_mua[i];
		cout << "Nhap gia: "; cin >> gia_ban[i];
		cin.ignore();
	}
	cout << endl;
}

// Ktra số lượng trong kho dựa vào tên hàng hóa, nếu không đủ số lượng khách hàng 
// cần thì in ra màn hình số lượng trong kho và nhập lại số lượng

void HoaDon::ktra_sl(HangHoa HH)
{
	for (int i = 1; i <= this->sl_hang; i++)
	{
		if (HH.get_ten_hh() == this->ten_hh[i])
			if (HH.get_sl() < this->sl_mua[i])
			{
				cout << "Hang hoa" << i << "khong du so luong!" << endl;
				cout << "So luong trong kho: " << HH.get_sl() << endl;
				cout << "Nhap lai so luong hang hoa " << i << endl;
				cout << "So luong: "; cin >> sl_mua[i];
			}
	}
}

void HoaDon::xuat()
{
	cout << "XAC NHAN HOA DON: " << endl;
	cout << endl;
	cout << "Ma hoa don: " << ma_hd << endl;
	cout << "Ngay xuat: " << endl; ngay_xuat.xuat();
	cout << "Ten khach hang: " << ten_kh << endl;
	cout << "Ten nhan vien: " << ten_nv << endl;
	cout << endl;
	cout << "Danh sach mua hang: " << endl;
	for (int i = 1; i <= sl_hang; i++)
	{
		cout << endl;
		cout << "Hang hoa thu " << i << endl;
		cout << "Ten: " << ten_hh[i] << endl;
		cout << "So luong: " << sl_mua[i] << endl;
		cout << "Gia: " << gia_ban[i] << endl;
		tong_tien = tong_tien + gia_ban[i] * sl_mua[i];
		thue = tong_tien * 10 / 100;
	}
	cout << endl;
	cout << "Tong tien: " << tong_tien << endl;
	cout << "Thue: " << thue << endl;
}

double HoaDon::get_tong_tien()
{
	return this->tong_tien;
}
double HoaDon::get_thue()
{
	return this->thue;
}

// Hàm lấy ra ngày, tháng, năm của ngày xuất hóa đơn
int HoaDon::get_ngay_xuat()
{
	return ngay_xuat.get_ngay(); // Hàm get ngày của class Ngay
}
int HoaDon::get_thang_xuat()
{
	return ngay_xuat.get_thang();
}
int HoaDon::get_nam_xuat()
{
	return ngay_xuat.get_nam();
}

// Hàm set_so_luong cập nhật lại số lượng trong kho
void HoaDon::set_so_luong(HangHoa HH)
{
	int x;
	for (int i = 1; i <= this->sl_hang; i++)
	{
		if (HH.get_ten_hh() == this->ten_hh[i])
		{
			x = HH.get_sl() - this->sl_mua[i];
		}
	}
	HH.set_so_luong(x);  // Hàm set_so_luong của class HangHoa
}

// Hàm cập nhật lại doanh thu, chi phí (thuế)
void HoaDon::update_doanh_thu(TaiChinh DT)
{
	double x;
	x = DT.get_doanh_thu() + this->get_tong_tien();
	DT.set_doanh_thu(x);
}
void HoaDon::update_chi_phi(TaiChinh CP) // Hàm get, set doanh thu của class TaiChinh
{
	double x;
	x = CP.get_chi_phi() + this->get_thue(); //Hàm get, set chi phi của class TaiChinh
	CP.set_chi_phi(x);
}

// hàm tăng số tiền đã chi của khách hàng từ tên khách hàng trong hóa đơn
void HoaDon::update_tien_kh_chi(KhachHang KH) // Hàm get, set của class KhachHang
{
	if (KH.get_ten_kh() == this->ten_kh)
	{
		double x;
		x = KH.get_so_tien_da_chi() + this->get_tong_tien();
		KH.set_so_tien_da_chi(x);
	}
}
