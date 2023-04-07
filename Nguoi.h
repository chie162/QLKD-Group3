/****************Người thực hiện: Tái Hồng Chi********************/

#include <iostream>
#include <string>
#include "Ngay.h"

using namespace std;

//Định nghĩa class
class Nguoi
{
    private:
        //Thuộc tính
        int id;
        string ten;
        string sdt;
        string gioi_tinh;
        Ngay ngay_sinh;
        string dia_chi;
    public:
        //Khai báo hàm khởi tạo
        Nguoi(int id = 0, string ten = "None", string sdt = "None", string gioi_tinh = "None", Ngay ngay_sinh = Ngay(), string dia_chi = "None");
        
        //Khai báo hàm hủy
        ~Nguoi();

        //Khai báo phương thức
        void nhap(int i);
        void xuat(int i);
        void chinh_sua(int i);

        //các phương thức trả về từng thuộc tính của đối tượng
        int get_id() {return this->id; }
        string get_ten() {return this->ten; }
        
        //các phương thức chỉnh sửa thông tin
        void set_id(int id) { this->id = id; }
        void set_ten(string ten) { this->ten = ten; }
        void set_sdt(string sdt) { this->sdt = sdt; }
        void set_gioi_tinh(string gioi_tinh) { this->gioi_tinh = gioi_tinh; }
        void set_ngay_sinh(Ngay ngay_sinh) { this->ngay_sinh = ngay_sinh; }
        void set_dia_chi(string dia_chi) { this->dia_chi = dia_chi; }
};

//Định nghĩa hàm khởi tạo
Nguoi::Nguoi(int id = 0, string ten = "None", string sdt = "None", string gioi_tinh = "None", Ngay ngay_sinh = Ngay(), string dia_chi = "None")
{

}

//Định nghĩa hàm hủy
Nguoi::~Nguoi()
{

}

//Định nghĩa các phương thức
void Nguoi::nhap(int i)
{
    cout << i << "." << endl;
    cout << "Nhap ID: "; cin >> this->id; cin.ignore();
    cout << "Nhap ho va ten: "; getline(cin, this->ten);
    cout << "Nhap so dien thoai: "; getline(cin, this-> sdt);
    cout << "Nhap gioi tinh: "; getline(cin, this->gioi_tinh);
    cout << "Nhap ngay sinh: "; this->ngay_sinh.nhap(); cin.ignore();
    cout << "Nhap dia chi: "; getline(cin, this->dia_chi);

}

void Nguoi::xuat(int i)
{
    cout << i << "." << endl;
    cout << "ID: " << id << endl;
    cout << "Ho va ten: " << ten << endl;
    cout << "So dien thoai: " << sdt << endl;
    cout << "Gioi tinh: " << gioi_tinh << endl;
    cout << "Ngay sinh: "; ngay_sinh.xuat();
    cout << "Dia chi: " << dia_chi << endl;
}

