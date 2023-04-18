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
        Nguoi();
        Nguoi(string id, string ho_ten, string sdt, string gioi_tinh, string dia_chi, string ngay_sinh);
        ~Nguoi();

        virtual void nhap();
        virtual void xuat();

        string get_id();
        string get_ho_ten();
        string get_sdt();
        string get_gioi_tinh();
        string get_dia_chi();
        string get_ngay_sinh();

        void set_id(string id);
        void set_ho_ten(string ho_ten);
        void set_sdt(string sdt);
        void set_gioi_tinh(string gioi_tinh);
        void set_dia_chi(string dia_chi);
        void set_ngay_sinh(string ngay_sinh);
};

Nguoi::Nguoi() {
    id = "NULL";
    ho_ten = "NULL";
    sdt = "NULL";
    gioi_tinh = "NULL";
    dia_chi = "NULL";
    ngay_sinh = "NULL";
}

Nguoi::Nguoi(string id, string ho_ten, string sdt, string gioi_tinh, string dia_chi, string ngay_sinh) {
    this->id = id;
    this->ho_ten = ho_ten;
    this->sdt = sdt;
    this->gioi_tinh = gioi_tinh;
    this->dia_chi = dia_chi;
    this->ngay_sinh = ngay_sinh;
}

Nguoi::~Nguoi() {
}

string Nguoi::get_id() {
    return id;
}

string Nguoi::get_ho_ten() {
    return ho_ten;
}

string Nguoi::get_sdt() {
    return sdt;
}

string Nguoi::get_gioi_tinh() {
    return gioi_tinh;
}

string Nguoi::get_dia_chi() {
    return dia_chi;
}

string Nguoi::get_ngay_sinh() {
    return ngay_sinh;
}

void Nguoi::set_id(string id) {
    this->id = id;
}

void Nguoi::set_ho_ten(string ho_ten) {
    this->ho_ten = ho_ten;
}

void Nguoi::set_sdt(string sdt) {
    this->sdt = sdt;
}

void Nguoi::set_gioi_tinh(string gioi_tinh) {
    this->gioi_tinh = gioi_tinh;
}

void Nguoi::set_dia_chi(string dia_chi) {
    this->dia_chi = dia_chi;
}

void Nguoi::set_ngay_sinh(string ngay_sinh) {
    this->ngay_sinh = ngay_sinh;
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
    cout << "ID: " << id << endl;
    cout << "Ho ten: " << ho_ten << endl;
    cout << "SDT: " << sdt << endl;
    cout << "Gioi tinh: " << gioi_tinh << endl;
    cout << "Dia chi: " << dia_chi << endl;
    cout << "Ngay sinh: " << ngay_sinh << endl;
}

