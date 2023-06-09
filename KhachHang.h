#pragma once 
#include <iostream>
#include <string.h>
#include "Nguoi.h" 
using namespace std;
class KhachHang:public Nguoi 
{
	private:
	string ngay_dang_ki;
	double so_tien_da_chi; 
	public:
	KhachHang();
	~KhachHang();
	void nhap();
	void xuat();
	double get_so_tien_da_chi();
	void set_ngay_dang_ki();
	void set_so_tien_da_chi();	 
 };
 KhachHang::KhachHang()
 	{ngay_dang_ki=" "; so_tien_da_chi=0;}
 KhachHang::~KhachHang(){}
 void KhachHang::nhap()
	 {
 		Nguoi::nhap();
		cout<<"Nhap ngay dang ki: "; fflush(stdin); getline(cin, ngay_dang_ki);
		cout<<"Nhap so tien da chi: "; cin>>so_tien_da_chi;
 	 } 
void KhachHang::xuat()
	{
		Nguoi::xuat();
		cout<<"Ngay dang ki la: "<<ngay_dang_ki<<endl;
		cout<<"So tien da chi la: "<<so_tien_da_chi<<endl; 
	 } 
double KhachHang::get_so_tien_da_chi()
	{
		return this->so_tien_da_chi; 
	 } 
void KhachHang::set_ngay_dang_ki(string ngay_dang_ki)
	{
		this->ngay_dang_ki=ngay_dang_ki; 
	 } 
void KhachHang::set_so_tien_da_chi(double so_tien_da_chi)
	{
		this->so_tien_da_chi= so_tien_da_chi; 
	 } 

 
