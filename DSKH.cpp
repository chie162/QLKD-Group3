#pragma once
#include <iostream>
#include <string.h>
#include "Danhsach.h"
#include "KhachHang.h" 
using namespace std;
class DSKH:public DanhSach
{
	private:
	KhachHang*danh_sach=nullptr; 
	int size =0; 
	public:
	DSKH();
	~DSKH(); 
	void nhap();
	void xuat();
	double get_so_tien_da_chi();
 };
 DSKH::DSKH(int n)
 {
 	danh_sach=new KhachHang[n]; 
  } 
 DSKH::DSKH()~DSKH()
 {
  } 
  void DSKH::nhap()
  {
  	for (int i=0; i<size; i++)
	  {
	  danh_sach[i].nhap(); 
	   } 
   } 
 void DSKH::xuat()
 {
 	for (int i=0; i<size; i++)
	 {
	 	danh_sach[i].xuat(); 
	  } 
  } 
 double DSKH::get_so_tien_da_chi()
 {
	 for (int i=0; i<size; i++)
	 {
		 if (danh_sach[i].get_so_tien_da_chi()>5000000)
			 danh_sach[i].xuat();
	 }
 }
			 
