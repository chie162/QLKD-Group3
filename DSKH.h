#pragma once
#include <iostream>
#include <string.h>
#include "DanhSach.h"
#include "KhachHang.h" 
using namespace std;
class DSKH:public DanhSach
{
	private:
	KhachHang*danh_sach=nullptr; 
	//int size =0; 
	public:
	DSKH(int n);
	~DSKH(); 
	void nhap();
	void xuat();
	 void get_so_tien_5tr();

 };

 DSKH::DSKH(int n)
 {
 	danh_sach=new KhachHang[n]; 
  } 
 DSKH::~DSKH()
 {
  } 
  void DSKH::nhap()
  {
  	for (int i=0; i<size; i++)
	  {
	  danh_sach[i].nhap(i + 1); 
	   } 
   } 
 void DSKH::xuat()
 {
 	cout << "\n============Danh sach khach hang ============" << endl;
	for (int i=0; i<size; i++)
	 {
	 	danh_sach[i].xuat(i + 1); 
	  } 
  } 
 void DSKH::get_so_tien_5tr()
 {
	 for (int i=0; i<size; i++)
	 {
		 if (danh_sach[i].get_so_tien_da_chi()>5000000)
			 danh_sach[i].xuat(i + 1);
	 }
 }
			 
