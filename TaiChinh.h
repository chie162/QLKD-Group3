#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class TaiChinh
{
	private:
	double doanh_thu;
	double chi_phi;
	double loi_nhuan;
	public:
	TaiChinh();
	~TaiChinh();
	 //void nhap();
	 void xuat();
	 double get_doanh_thu();
	 double get_chi_phi();
	 double get_loi_nhuan();
	 void set_doanh_thu(double doanh_thu);
	 void set_chi_phi(double chi_phi);
	 void set_loi_nhuan(double loi_nhuan);
	 double tinh_loi_nhuan(); 
 };
 TaiChinh::TaiChinh()
 {
 	doanh_thu =0;
	chi_phi=0;
	loi_nhuan=0; 
  } 
 TaiChinh::~TaiChinh()
 {
  }
// void TaiChinh::nhap()
// {
// 	cout<<"Nhap doanh thu: "; cin>>doanh_thu;
//  	cout<<"Nhap chi phi: "; cin>>chi_phi;
// 	loi_nhuan=doanh_thu-chi_phi;
// }

void TaiChinh::xuat()
{cout<<"Doanh thu la: "<<doanh_thu<<endl;
 cout<<"Chi phi la: "<<chi_phi<<endl;
 cout<<"Loi nhuan la: "<<loi_nhuan<<endl;}

double TaiChinh::get_doanh_thu()
{return this->doanh_thu;}
double TaiChinh::get_chi_phi()
{return this->chi_phi;}
double TaiChinh::get_loi_nhuan()
{return this->loi_nhuan;}

void TaiChinh::set_doanh_thu(double doanh_thu)
{this->doanh_thu=doanh_thu;}
void TaiChinh::set_chi_phi(double chi_phi)
{this->chi_phi=chi_phi;}
void TaiChinh::set_loi_nhuan(double loi_nhuan)
{this->loi_nhuan=loi_nhuan;}
	
 double TaiChinh::tinh_loi_nhuan() 
 {
	//if(set_chi_phi(chi_phi) || set_doanh_thu(doanh_thu))
		loi_nhuan=doanh_thu-chi_phi;
	return this->loi_nhuan;
 }
 
