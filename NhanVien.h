/****************Nguoi thuc hien: Tran Thi Ngoc Anh****************/ 

#include <iostream> 
#include <string>
#include "Nguoi.h"

using namespace std;

class NhanVien : public Nguoi
{
    private:
        Ngay ngay_vao_lam;
        double luong;
    public:
        NhanVien(Ngay ngay_vao_lam = Ngay(), double luong = 0);
        ~NhanVien();


        void nhap(int n);
        void xuat(int n);
        void chinh_sua(int i);
       
        double get_luong() {return this->luong;}


        void set_ngay_vao_lam(Ngay ngay_vao_lam) {this->ngay_vao_lam = ngay_vao_lam; }
        void set_luong(double luong) {this->luong = luong; }
};


NhanVien::NhanVien(Ngay ngay_vao_lam = Ngay(), double luong = 0; )
{
  
}


NhanVien::~NhanVien()
{

}


void NhanVien::nhap(int n)
{
    Nguoi::nhap(int n); 
    cout<<"Nhap ngay vao lam: "; this->ngay_vao_lam.nhap(); 
    cout<<"Nhap luong:"; cin>>luong;
}


void NhanVien::xuat(int n)
{
    Nguoi::xuat(int n);
    cout<<"Ngay vao lam la:"; ngay_vao_lam.xuat();
    cout<<"Luong la:"<< luong << endl;
}

void NhanVien::chinh_sua(int i)
{ 
    do{
        cout<<"Nhap ten nhan vien:"; cin>>ten;
        cout<<"Nhap ma nhan vien:"; cin>>ma_nv;
        cout<<"Ban co muon chinh sua thong tin nhan vien nay:"\n[Y]es\t[N]o\n; cin>>i; 
    }
    while ((i == 'Y') || (i == 'N'));
    return 0; 
}
