/****************Nguoi thuc hien Tran Le Ngoc Chau********************/
#pragma once
#include<iostream>
#include<string.h>

using namespace std;
class HangHoa
{
	private:
		int id;
		string ten_hh;
		string xuat_xu;
		double gia_ban;
		int so_luong;
		string nsx;
		string hsd;
	public:
		//Khai bao ham khoi tao
		HangHoa(int id = 0, string ten_hh = "None", string xuat_xu = "None", double gia_ban = 0, int so_luong = 0, string nsx = "None", string hsd = "None");
		
		//Khai bao ham huy
		~HangHoa();
		
		//Khai bao phuong thuc
		void nhap(int i);
		void xuat(int i);
		void chinh_sua(int i);
		
		int get_id(){return this -> id; }
		string get_ten_hh(){return this->ten_hh;}
		double get_gia_ban(){return this -> gia_ban; }
		int get_sl(){return this->so_luong;}

		void set_id(int id){this -> id = id; }
		void set_ten_hh(string ten_hh){this -> ten_hh = ten_hh; }
		void set_xuat_xu(string xuat_xu){this -> xuat_xu = xuat_xu; }
		void set_gia_ban(double gia_ban){this -> gia_ban = gia_ban; }
		void set_so_luong(int so_luong){this -> so_luong = so_luong; }
		void set_nsx(string nsx){this -> nsx = nsx; }
		void set_hsd(string hsd){this->hsd = hsd; }
};

HangHoa :: HangHoa(int id, string ten_hh, string xuat_xu, double gia_ban, int so_luong, string nsx, string hsd)
	:id(id), ten_hh(ten_hh), xuat_xu(xuat_xu), gia_ban(gia_ban), so_luong(so_luong), nsx(nsx), hsd(hsd) 
	{}

HangHoa :: ~HangHoa()
{}

void HangHoa :: nhap(int i)
{
	cout<<"Nhap id:";cin>>id; cin.ignore();
	cout<<"Nhap ten hang hoa: ";getline(cin, this->ten_hh);
	cout<<"Nhap xuat xu: ";getline(cin, this->xuat_xu);
	cout<<"Nhap gia ban: ";cin>>gia_ban;
	cout<<"Nhap so luong: ";cin>>so_luong; cin.ignore();
	cout<<"Nhap ngay san xuat: ";getline(cin, this->nsx);
	cout<<"Nhap han su dung: ";getline(cin, this->hsd);
}
void HangHoa :: xuat(int i)
{
	cout<<"ID: "<<id<<endl;
	cout<<"Ten hang hoa: "<<ten_hh<<endl;
	cout<<"Xuat xu: "<<xuat_xu<<endl;
	cout<<"Gia: "<<gia_ban<<endl;
	cout<<"So luong: "<<so_luong<<endl;
	cout<<"Ngay san xuat: "<<nsx<<endl;
	cout<<"Han su dung: "<<hsd<<endl << endl;;
}