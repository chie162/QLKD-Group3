/****************Nguoi thuc hien Tran Le Ngoc Chau********************/
#include<iostream>
#include<string.h>
#include"Nguoi.h"
#include"Ngay.h"
using namespace std;
class Hanghoa
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
		Hanghoa(string ten_hh = "None", string xuat_xu = "None", double gia_ban = , int so_luong = 0, string nsx = "None", string hsd = "None");
		
		//Khai bao ham huy
		~Hanghoa();
		
		//Khai bao phuong thuc
		void nhap(int i);
		void xuat(int i);
		void chinh_sua(int i);
		
		int get_id(){return this -> id; }
		string get_ten_hh(){return this->ten_hh}
		
		void set_id(int id){this -> id = id; }
		void set_ten_hh(string ten_hh){this -> ten_hh = ten_hh; }
		void set_xuat_xu(string xuat_xu){this -> xuat_xu = xuat_xu; }
		void set_gia_ban(double gia_ban){this -> gia_ban = gia_ban; }
		void set_so_luong(int so_luong){this -> so_luong = so_luong; }
		void set_nsx(string nsx){this -> nsx = nsx; }
		void set_hsd(string hsd){this->hsd = hsd; }
};

Hanghoa :: Hanghoa(string ten_hh = "None", string xuat_xu = "None", double gia_ban = , int so_luong = 0, string nsx = "None", string hsd = "None"){}
Hanghoa :: ~Hanghoa(){}

void Hanghoa :: nhap()
{
	cout<<"Nhap id:";cin>>id;
	cout<<"Nhap ten hang hoa:";cin>>ten_hh;
	cout<<"Nhap xuat xu hang hoa";cin>>xuat_xu;
	cout<<"Nhap gia ban hang hoa";cin>>gia_ban;
	cout<<"Nhap so luong hang hoa";cin>>so_luong;
	cout<<"Nhap ngay san xuat:";cin>>nsx;
	cout<<"Nhap han su dung:";cin>>hsd;
}
void Hanghoa :: xuat()
{
	cout<<"ID:"<<id<<endl;
	cout<<"Ten hang hoa:"<<ten_hh<<endl;
	cout<<"Xuat xu:"<<xuat_xu<<endl;
	cout<<"Gia:"<<gia_ban<<endl;
	cout<<"So luong:"<<so_luong<<endl;
	cout<<"Ngay san xuat:"<<nsx<<endl;
	cout<<"Han su dung:"<<hsd<<endl;
}
