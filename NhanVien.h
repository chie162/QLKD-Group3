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
        void chinh_sua(char choice);
       
        double get_luong() {return this->luong = luong; }


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
    Nguoi::nhap(); 
    cout<<"Nhap ngay vao lam: "; this->ngay_vao_lam.nhap(); cin.ignore();
    cout<<"Nhap luong:"; getline(cin, this->luong);
}


void NhanVien::xuat(int n)
{
    Nguoi::xuat();
    cout<<"Ngay vao lam:"; ngay_vao_lam.xuat();
    cout<<"Luong:"<< luong << endl;
}

void NhanVien::chinh_sua(char choice)
{ 
    do{
        cout<<"Nhap ten nhan vien:"; cin>>ten;
        cout<<"Nhap ma nhan vien:"; cin>>ma_nv;
        cout<<"Ban co muon chinh sua thong tin nhan vien nay:"\n[Y]es\t[N]o\n; cin>>choice; 
    }
    while ((choice == 'Y') || (choice == 'N'));
    return 0; 
}