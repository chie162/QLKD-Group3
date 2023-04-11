/****************Người thực hiện: Nguyễn Khánh Chi********************/

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

PhieuNhapHang::PhieuNhapHang()
{
	ma_phieu = 0;
	ten_hh = ten_ncc = "";
	so_luong = gia_mua = 0;
}
PhieuNhapHang::PhieuNhapHang(int Ma_phieu, Ngay Ngay_nhap, string Ten_hh, string Ten_ncc, int So_luong, double Gia_mua)
{
	ma_phieu = Ma_phieu;
	ngay_nhap = Ngay_nhap;
	ten_hh = Ten_hh;
	ten_ncc = Ten_ncc;
	so_luong = So_luong;
	gia_mua = Gia_mua;
}
PhieuNhapHang::~PhieuNhapHang() {};

void PhieuNhapHang::nhap()
{
	cout << "Nhap ma phieu: "; cin >> ma_phieu;
	cin.ignore();
	cout << "Nhap ngay nhap phieu: " << endl;
	ngay_nhap.nhap();
	cout << "Nhap ten hang hoa: "; getline(cin, ten_hh);
	cout << "Nhap ten nha cung cap: "; getline(cin, ten_ncc);
	cin.ignore();
	cout << "Nhap so luong: "; cin >> so_luong;
	cout << "Nhap gia mua: "; cin >> gia_mua;
}

string PhieuNhapHang::get_ten_hh()
{
	return this->ten_hh;
}

// hàm ktra xem tên hàng hóa nhập đã có trong kho chưa,
// nếu chưa thì gọi hàm thêm thông tin hàng hóa

void PhieuNhapHang::ktra_hh(HangHoa HH)
{
	if (HH.get_ten_hh() != this->get_ten_hh())
	{
		HH.them_hh(); // Hàm thêm hàng hóa trong class HangHoa
	}
}

void PhieuNhapHang::xuat()
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
	return gia_mua * so_luong;
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
