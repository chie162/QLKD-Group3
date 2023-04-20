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
		double gia_ban; //don vi tinh: 1000 VND
		int so_luong;
	public:
		//Ham thiet lap voi tham so ngam dinh
		HangHoa(
			string Ma_hh = "NULL", 
			string Ten_hh = "NULL", 
			string Xuat_xu = "NULL", 
			double Gia_ban = 0, 
			int So_luong = 0);
		~HangHoa();

		void nhap();
		void xuat();

		string get_ma_hh() { return ma_hh;}
		string get_ten_hh() { return ten_hh;}
		string get_xuat_xu() { return xuat_xu;}
		double get_gia_ban() { return gia_ban;}
		int get_so_luong() { return so_luong;}

		void set_ma_hh(string Ma_hh) { this-> ma_hh = Ma_hh;}
		void set_ten_hh(string Ten_hh) { this-> ten_hh = Ten_hh;}
		void set_xuat_xu(string Xuat_xu) { this-> xuat_xu = Xuat_xu;}
		void set_gia_ban(double Gia_ban) { this-> gia_ban = Gia_ban;}
		void set_so_luong(int So_luong) { this-> so_luong = So_luong;}
};

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
	cout << left << setw(20) << to_string(int(gia_ban * 1000)) + " VND";
	cout << left << setw(10) << so_luong << endl;
}