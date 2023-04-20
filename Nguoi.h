#pragma once

#include <string>
#include <iostream>

using namespace std;

class Nguoi {
    protected:
        string id;
        string ho_ten;
        string sdt;
        string gioi_tinh;
        string ngay_sinh;
        string dia_chi;
    public:
		//Ham thiet lap voi tham so ngam dinh
        Nguoi(string id  = "NULL", 
        string ho_ten = "NULL", 
        string sdt = "NULL", 
        string gioi_tinh = "NULL", 
        string dia_chi = "NULL", 
        string ngay_sinh = "NULL"
        );
        ~Nguoi();

        virtual void nhap();
        virtual void xuat();

        string get_id() { return id;}
        string get_ho_ten() { return ho_ten;}
        string get_sdt() { return sdt;}
        string get_gioi_tinh() { return gioi_tinh;}
        string get_dia_chi() { return dia_chi;}
        string get_ngay_sinh() { return ngay_sinh;}

        void set_id(string Id) { this-> id = Id;}
        void set_ho_ten(string Ho_ten) { this-> ho_ten = Ho_ten;}
        void set_sdt(string Sdt) { this-> sdt = Sdt;}
        void set_gioi_tinh(string Gioi_tinh) { this-> gioi_tinh = Gioi_tinh;}
        void set_dia_chi(string Dia_chi) { this-> dia_chi = Dia_chi;}
        void set_ngay_sinh(string Ngay_sinh) { this-> ngay_sinh = Ngay_sinh;}
};

Nguoi::Nguoi(string Id, string Ho_ten, string Sdt, string Gioi_tinh, string Dia_chi, string Ngay_sinh) {
    id = Id;
    ho_ten = Ho_ten;
    sdt = Sdt;
    gioi_tinh = Gioi_tinh;
    dia_chi = Dia_chi;
    ngay_sinh = Ngay_sinh;
}

Nguoi::~Nguoi() {
}

void Nguoi::nhap() {
    cout << "Nhap id: ";
    cin >> id;
    cout << "Nhap ho ten: ";
    cin >> ho_ten;
    cout << "Nhap sdt: ";
    cin >> sdt;
    cout << "Nhap gioi tinh: ";
    cin >> gioi_tinh;
    cout << "Nhap dia chi: ";
    cin >> dia_chi;
    cout << "Nhap ngay sinh: ";
    cin >> ngay_sinh;
}

void Nguoi::xuat() {
    cout << "------------------------" << endl;
    cout << "ID: " << id << endl;
    cout << "Ho ten: " << ho_ten << endl;
    cout << "SDT: " << sdt << endl;
    cout << "Gioi tinh: " << gioi_tinh << endl;
    cout << "Dia chi: " << dia_chi << endl;
    cout << "Ngay sinh: " << ngay_sinh << endl;
}