#pragma once

#include <iostream>
#include <iomanip>

using namespace std;

class HangHoa
{
	private:
		string ma_hh;
		string ten_hh;
		string xuat_xu;
		double gia_ban; //nghin VND
		int so_luong;
	public:
		HangHoa();
		HangHoa(string Ma_hh, string Ten_hh, string Xuat_xu, double Gia_ban, int So_luong);
		~HangHoa();

		void nhap();
		void xuat();

		string get_ma_hh();
		string get_ten_hh();
		string get_xuat_xu();
		double get_gia_ban();
		int get_so_luong();

		void set_ma_hh(string Ma_hh);
		void set_ten_hh(string Ten_hh);
		void set_xuat_xu(string Xuat_xu);
		void set_gia_ban(double Gia_ban);
		void set_so_luong(int So_luong);
};

HangHoa::HangHoa()
{
	ma_hh = "";
	ten_hh = "";
	xuat_xu = "";
	gia_ban = 0;
	so_luong = 0;
}

HangHoa::HangHoa(string Ma_hh, string Ten_hh, string Xuat_xu, double Gia_ban, int So_luong)
{
	ma_hh = Ma_hh;
	ten_hh = Ten_hh;
	xuat_xu = Xuat_xu;
	gia_ban = Gia_ban;
	so_luong = So_luong;
}

HangHoa::~HangHoa()
{
}

void HangHoa::nhap()
{
	cout << "Nhap ma hang: ";
	cin >> ma_hh;
	cout << "Nhap ten hang: ";
	cin >> ten_hh;
	cout << "Nhap xuat xu: ";
	cin >> xuat_xu;
	cout << "Nhap gia ban: ";
	cin >> gia_ban;
	cout << "Nhap so luong: ";
	cin >> so_luong;
}

void HangHoa::xuat()
{
	cout << left << setw(10) << ma_hh;
	cout << left << setw(30) << ten_hh;
	cout << left << setw(10) << xuat_xu;
	cout << left << setw(20) << to_string(int(gia_ban * 1000)) + "VND";
	cout << left << setw(10) << so_luong << endl;
}

string HangHoa::get_ma_hh()
{
	return ma_hh;
}

string HangHoa::get_ten_hh()
{
	return ten_hh;
}

string HangHoa::get_xuat_xu()
{
	return xuat_xu;
}

double HangHoa::get_gia_ban()
{
	return gia_ban;
}

int HangHoa::get_so_luong()
{
	return so_luong;
}

void HangHoa::set_ma_hh(string Ma_hh)
{
	ma_hh = Ma_hh;
}

void HangHoa::set_ten_hh(string Ten_hh)
{
	ten_hh = Ten_hh;
}

void HangHoa::set_xuat_xu(string Xuat_xu)
{
	xuat_xu = Xuat_xu;
}

void HangHoa::set_gia_ban(double Gia_ban)
{
	gia_ban = Gia_ban;
}

void HangHoa::set_so_luong(int So_luong)
{
	so_luong = So_luong;
}