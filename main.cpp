/****************Người thực hiện: Tái Hồng Chi********************/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

#include "HoaDon.h"
#include "HangHoa.h"

using namespace std;

void do_selection_1_1(HoaDon &hoa_don_moi, vector<HangHoa> &danh_sach_hang_hoa) {
    cout << left << setw(10) << "Ma HH";
	cout << left << setw(30) << "Ten HH";
	cout << left << setw(10) << "Xuat xu";
	cout << left << setw(20) << "Gia ban";
	cout << left << setw(10) << "So luong" << endl;
    for (int i = 0; i < danh_sach_hang_hoa.size(); i++) {
        danh_sach_hang_hoa[i].xuat();
    }
    string ma_hh, so_luong;
    cout << "Nhap ma hang hoa: ";
    cin >> ma_hh;
    cout << "Nhap so luong: ";
    cin >> so_luong;
    for (int i = 0; i < danh_sach_hang_hoa.size(); i++) {
        if (danh_sach_hang_hoa[i].get_ma_hh() == ma_hh) {
            if (danh_sach_hang_hoa[i].get_so_luong() >= stoi(so_luong)) {
                danh_sach_hang_hoa[i].set_so_luong(danh_sach_hang_hoa[i].get_so_luong() - stoi(so_luong));
                HangHoa hang_hoa_moi(danh_sach_hang_hoa[i].get_ma_hh(), danh_sach_hang_hoa[i].get_ten_hh(), danh_sach_hang_hoa[i].get_xuat_xu(), danh_sach_hang_hoa[i].get_gia_ban(), stoi(so_luong));
                hoa_don_moi.them_hang_hoa(hang_hoa_moi);
                break;
            }
            else {
                cout << "So luong hang trong kho khong du" << endl;
                break;
            }
        }
    }
}

void do_selection_1(vector<HangHoa> &danh_sach_hang_hoa) {
    int lua_chon = -1;
    HoaDon hoa_don_moi;
    hoa_don_moi.nhap();
    do {
        cout << "*****Ban hang*****" << endl;
        cout << "1. Nhap ma hang - so luong hang" << endl;
        cout << "2. Xac nhan hoa don" << endl;
        cout << "Nhap lua chon: ";
        cin >> lua_chon;
        switch (lua_chon) {
            case 1:
                do_selection_1_1(hoa_don_moi, danh_sach_hang_hoa);
                break;
            case 2:
                hoa_don_moi.xuat();
                hoa_don_moi.luu_hoa_don();
                break;
        }
    } while (lua_chon != 2);
}

void do_selection_2() {

}

void do_selection_3() {

}

void do_selection_4() {

}

void do_selection_5() {

}

void update_dshh(fstream &data_hang_hoa, vector<HangHoa> &danh_sach_hang_hoa) {
    data_hang_hoa.close();
    data_hang_hoa.open("hang_hoa.txt", ios::out);
    for (int i = 0; i < danh_sach_hang_hoa.size(); i++) {
        data_hang_hoa << danh_sach_hang_hoa[i].get_ma_hh() << " " << danh_sach_hang_hoa[i].get_ten_hh() << " " << danh_sach_hang_hoa[i].get_xuat_xu() << " " << danh_sach_hang_hoa[i].get_gia_ban() << " " << danh_sach_hang_hoa[i].get_so_luong() << endl;
    }
    data_hang_hoa.close();
    data_hang_hoa.open("hang_hoa.txt", ios::in | ios::out);
}

int main()
{
    fstream data_hang_hoa("hang_hoa.txt", ios::in | ios::out);
    vector<HangHoa> danh_sach_hang_hoa;
    string ma_hh, ten_hh, xuat_xu, gia_ban, so_luong;
    while (data_hang_hoa >> ma_hh >> ten_hh >> xuat_xu >> gia_ban >> so_luong) {
        HangHoa hang_hoa_moi(ma_hh, ten_hh, xuat_xu, stod(gia_ban), stoi(so_luong));
        danh_sach_hang_hoa.push_back(hang_hoa_moi);
    }

    int lua_chon = -1;
    do {
        cout << "*****Chuong trinh quan ly kinh doanh*****" << endl;
        cout << "0. Thoat chuong trinh" << endl;
        cout << "1. Ban hang (in hoa don cho khach hang)" << endl;
        cout << "2. Nhap hang (in phieu nhap hang cho nha cung cap)" << endl;
        cout << "3. Them/sua/xoa thong tin nhan vien/khach hang" << endl;
        cout << "4. Xem danh sach nhan vien/khach hang/hang hoa/hoa don/phieu nhap hang" << endl;
        cout << "5. Hoat dong thong ke (cho nha quan tri)" << endl;
        cout << "Nhap lua chon: ";
        cin >> lua_chon;
        switch (lua_chon) {
            case 1:
                do_selection_1(danh_sach_hang_hoa);
                update_dshh(data_hang_hoa, danh_sach_hang_hoa);
                break;
            case 2: 
                do_selection_2();
                break;
            case 3:
                do_selection_3();
                break;
            case 4:
                do_selection_4();
                break;
            case 5:
                do_selection_5();
                break;
        }
    } while (lua_chon != 0);
    data_hang_hoa.close();
    return 0;
}
