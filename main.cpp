/****************Người thực hiện: Tái Hồng Chi********************/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "HoaDon.h"
#include "HangHoa.h"
#include "PhieuNhapHang.h"
#include "NhanVien.h"
#include "KhachHang.h"

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

void do_selection_2(vector<HangHoa> &danh_sach_hang_hoa) {
    int lua_chon = -1;
    PhieuNhapHang phieu_nhap_hang_moi;
    phieu_nhap_hang_moi.nhap();
    do {
        phieu_nhap_hang_moi.xuat();
        cout << "*****Nhap hang*****" << endl;
        cout << "1. Nhap hang" << endl;
        cout << "2. Xac nhan phieu nhap hang" << endl;
        cout << "Nhap lua chon: ";
        cin >> lua_chon;
        switch (lua_chon) {
            case 1:
                phieu_nhap_hang_moi.them_hang_hoa();
                break;
            case 2:
                phieu_nhap_hang_moi.xuat();
                phieu_nhap_hang_moi.luu_hang_hoa(danh_sach_hang_hoa);
                phieu_nhap_hang_moi.luu_phieu_nhap_hang();
                break;
        }
    } while (lua_chon != 2);
}

void show_dsnv(vector<NhanVien> danh_sach_nhan_vien) {
    for (int i = 0; i < danh_sach_nhan_vien.size(); i++) {
        danh_sach_nhan_vien[i].xuat();
        cout << "------------------------" << endl;
    }
}

void show_dskh(vector<KhachHang> danh_sach_khach_hang) {
    for (int i = 0; i < danh_sach_khach_hang.size(); i++) {
        danh_sach_khach_hang[i].xuat();
        cout << "------------------------" << endl;
    }
}

void do_selection_3_1(vector<NhanVien> &danh_sach_nhan_vien) {
    NhanVien nhan_vien_moi;
    nhan_vien_moi.nhap();
    danh_sach_nhan_vien.push_back(nhan_vien_moi);
}

void do_selection_3_2(vector<NhanVien> &danh_sach_nhan_vien) {
    cout << "Nhap id nhan vien can sua: ";
    string id;
    cin >> id;
    for (int i = 0; i < danh_sach_nhan_vien.size(); i++) {
        if (danh_sach_nhan_vien[i].get_id() == id) {
            danh_sach_nhan_vien[i].nhap();
            break;
        }
    }
}

void do_selection_3_3(vector<NhanVien> &danh_sach_nhan_vien) {
    cout << "Nhap id nhan vien can xoa: ";
    string id;
    cin >> id;
    for (int i = 0; i < danh_sach_nhan_vien.size(); i++) {
        if (danh_sach_nhan_vien[i].get_id() == id) {
            danh_sach_nhan_vien.erase(danh_sach_nhan_vien.begin() + i);
            break;
        }
    }
}

void do_selection_3_4(vector<KhachHang> &danh_sach_khach_hang) {
    KhachHang khach_hang_moi;
    khach_hang_moi.nhap();
    danh_sach_khach_hang.push_back(khach_hang_moi);
}

void do_selection_3_5(vector<KhachHang> &danh_sach_khach_hang) {
    cout << "Nhap id khach hang can sua: ";
    string id;
    cin >> id;
    for (int i = 0; i < danh_sach_khach_hang.size(); i++) {
        if (danh_sach_khach_hang[i].get_id() == id) {
            danh_sach_khach_hang[i].nhap();
            break;
        }
    }
}

void do_selection_3_6(vector<KhachHang> &danh_sach_khach_hang) {
    cout << "Nhap id khach hang can xoa: ";
    string id;
    cin >> id;
    for (int i = 0; i < danh_sach_khach_hang.size(); i++) {
        if (danh_sach_khach_hang[i].get_id() == id) {
            danh_sach_khach_hang.erase(danh_sach_khach_hang.begin() + i);
            break;
        }
    }
}

void do_selection_3(vector<NhanVien> &danh_sach_nhan_vien, vector<KhachHang> &danh_sach_khach_hang) {
    int lua_chon = -1;
    do {
        cout << "*****Them, sua, xoa thong tin nhan vien, khach hang*****" << endl;
        cout << "0. Quay lai" << endl;
        cout << "1. Them nhan vien" << endl;
        cout << "2. Sua thong tin nhan vien" << endl;
        cout << "3. Xoa nhan vien" << endl;
        cout << "4. Them khach hang" << endl;
        cout << "5. Sua thong tin khach hang" << endl;
        cout << "6. Xoa khach hang" << endl;
        cout << "Nhap lua chon: ";
        cin >> lua_chon;
        switch (lua_chon) {
            case 1:
                // show_dsnv(danh_sach_nhan_vien);
                do_selection_3_1(danh_sach_nhan_vien);
                break;
            case 2:
                show_dsnv(danh_sach_nhan_vien);
                do_selection_3_2(danh_sach_nhan_vien);
                break;
            case 3:
                show_dsnv(danh_sach_nhan_vien);
                do_selection_3_3(danh_sach_nhan_vien);
                break;
            case 4:
                // show_dskh(danh_sach_khach_hang);
                do_selection_3_4(danh_sach_khach_hang);
                break;
            case 5:
                show_dskh(danh_sach_khach_hang);
                do_selection_3_5(danh_sach_khach_hang);
                break;
            case 6:
                show_dskh(danh_sach_khach_hang);
                do_selection_3_6(danh_sach_khach_hang);
                break;
        }
    } while (lua_chon != 0);
}

void show_dshh(vector<HangHoa> danh_sach_hang_hoa) {
    for (int i = 0; i < danh_sach_hang_hoa.size(); i++) {
        danh_sach_hang_hoa[i].xuat();
    }
}

void do_selection_4(vector<NhanVien> danh_sach_nhan_vien, 
                    vector<KhachHang> danh_sach_khach_hang,
                    vector<HangHoa> danh_sach_hang_hoa) {
    int lua_chon = -1;
    do {
        cout << "*****Xem thong tin*****" << endl;
        cout << "0. Quay lai" << endl;
        cout << "1. Xem danh sach nhan vien" << endl;
        cout << "2. Xem danh sach khach hang" << endl;
        cout << "3. Xem danh sach hang hoa" << endl;
        cout << "Nhap lua chon: ";
        cin >> lua_chon;
        switch (lua_chon) {
            case 1:
                show_dsnv(danh_sach_nhan_vien);
                break;
            case 2:
                show_dskh(danh_sach_khach_hang);
                break;
            case 3:
                show_dshh(danh_sach_hang_hoa);
                break;
        }
    } while (lua_chon != 0);
}

void do_selection_5_1(vector<KhachHang> danh_sach_khach_hang) {
    for (int i = 0; i < danh_sach_khach_hang.size(); i++) {
        if (danh_sach_khach_hang[i].get_so_tien_da_chi() > 5000) {
            danh_sach_khach_hang[i].xuat();
        }
    }
}

void do_selection_5_2(vector<NhanVien> danh_sach_nhan_vien) {
    for (int i = 0; i < danh_sach_nhan_vien.size(); i++) {
        if (danh_sach_nhan_vien[i].get_luong() > 5000) {
            danh_sach_nhan_vien[i].xuat();
        }
    }
}

void do_selection_5_3(vector<HangHoa> danh_sach_hang_hoa) {
    for (int i = 0; i < danh_sach_hang_hoa.size(); i++) {
        if (danh_sach_hang_hoa[i].get_so_luong() < 10) {
            danh_sach_hang_hoa[i].xuat();
        }
    }
}

void do_selection_5_4() {
    
}

void do_selection_5(vector<NhanVien> danh_sach_nhan_vien, 
                    vector<KhachHang> danh_sach_khach_hang,
                    vector<HangHoa> danh_sach_hang_hoa) {
    int lua_chon = -1;
    do {
        cout << "*****Hoat dong thong ke*****" << endl;
        cout << "0. Quay lai" << endl;
        cout << "1. Xem thong tin khach hang co so tien da chi lon hon 5 trieu" << endl;
        cout << "2. Xem thong tin nhan vien co muc luong lon hon 5 trieu" << endl;
        cout << "3. Xem thong tin hang hoa trong kho co so luong nho hon 10" << endl;
        cout << "4. Xem hoat dong tai chinh" << endl;
        cout << "Nhap lua chon: ";
        cin >> lua_chon;
        switch (lua_chon) {
            case 1:
                do_selection_5_1(danh_sach_khach_hang);
                break;
            case 2:
                do_selection_5_2(danh_sach_nhan_vien);
                break;
            case 3:
                do_selection_5_3(danh_sach_hang_hoa);
                break;
            case 4:
                do_selection_5_4();
                break;
        }
    } while (lua_chon != 0);
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

void update_dsnv(fstream &data_nhan_vien, vector<NhanVien> &danh_sach_nhan_vien) {
    data_nhan_vien.close();
    data_nhan_vien.open("nhan_vien.txt", ios::out);
    for (int i = 0; i < danh_sach_nhan_vien.size(); i++) {
        data_nhan_vien << danh_sach_nhan_vien[i].get_id() 
                       << " " << danh_sach_nhan_vien[i].get_ho_ten()
                       << " " << danh_sach_nhan_vien[i].get_sdt() 
                       << " " << danh_sach_nhan_vien[i].get_gioi_tinh() 
                       << " " << danh_sach_nhan_vien[i].get_ngay_sinh() 
                       << " " << danh_sach_nhan_vien[i].get_dia_chi()
                       << " " << danh_sach_nhan_vien[i].get_ngay_vao_lam() 
                       << " " << danh_sach_nhan_vien[i].get_luong() << endl;
    }
    data_nhan_vien.close();
    data_nhan_vien.open("nhan_vien.txt", ios::in | ios::out);
}

void update_dskh(fstream &data_khach_hang, vector<KhachHang> &danh_sach_khach_hang) {
    data_khach_hang.close();
    data_khach_hang.open("khach_hang.txt", ios::out);
    for (int i = 0; i < danh_sach_khach_hang.size(); i++) {
        data_khach_hang << danh_sach_khach_hang[i].get_id() 
                        << " " << danh_sach_khach_hang[i].get_ho_ten()
                        << " " << danh_sach_khach_hang[i].get_sdt() 
                        << " " << danh_sach_khach_hang[i].get_gioi_tinh() 
                        << " " << danh_sach_khach_hang[i].get_ngay_sinh() 
                        << " " << danh_sach_khach_hang[i].get_dia_chi() 
                        << " " << danh_sach_khach_hang[i].get_ngay_dang_ky()
                        << " " << danh_sach_khach_hang[i].get_so_tien_da_chi() << endl;
    }
    data_khach_hang.close();
    data_khach_hang.open("khach_hang.txt", ios::in | ios::out);
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

    fstream data_nhan_vien("nhan_vien.txt", ios::in | ios::out);
    vector<NhanVien> danh_sach_nhan_vien;
    string ma_nv, ten_nv, so_dien_thoai, gioi_tinh, ngay_sinh, dia_chi, ngay_vao_lam, luong;
    while (data_nhan_vien >> ma_nv >> ten_nv >> so_dien_thoai >> gioi_tinh >> ngay_sinh >> dia_chi >> ngay_vao_lam >> luong) {
        NhanVien nhan_vien_moi(ma_nv, ten_nv, so_dien_thoai, gioi_tinh, ngay_sinh, dia_chi, ngay_vao_lam, stod(luong));
        danh_sach_nhan_vien.push_back(nhan_vien_moi);
    }

    fstream data_khach_hang("khach_hang.txt", ios::in | ios::out);
    vector<KhachHang> danh_sach_khach_hang;
    string ma_kh, ten_kh, so_dien_thoai_kh, gioi_tinh_kh, ngay_sinh_kh, dia_chi_kh, ngay_dang_ky, so_tien_da_chi;
    while (data_khach_hang >> ma_kh >> ten_kh >> so_dien_thoai_kh >> gioi_tinh_kh >> ngay_sinh_kh >> dia_chi_kh >> ngay_dang_ky >> so_tien_da_chi) {
        KhachHang khach_hang_moi(ma_kh, ten_kh, so_dien_thoai_kh, gioi_tinh_kh, ngay_sinh_kh, dia_chi_kh, ngay_dang_ky, stod(so_tien_da_chi));
        danh_sach_khach_hang.push_back(khach_hang_moi);
    }


    int lua_chon = -1;
    do {
        cout << "*****Chuong trinh quan ly kinh doanh*****" << endl;
        cout << "0. Thoat chuong trinh" << endl;
        cout << "1. Ban hang (in hoa don cho khach hang)" << endl;
        cout << "2. Nhap hang (in phieu nhap hang cho nha cung cap)" << endl;
        cout << "3. Them/sua/xoa thong tin nhan vien/khach hang" << endl;
        cout << "4. Xem danh sach nhan vien/khach hang/hang hoa" << endl;
        cout << "5. Hoat dong thong ke (cho nha quan tri)" << endl;
        cout << "Nhap lua chon: ";
        cin >> lua_chon;
        switch (lua_chon) {
            case 1:
                do_selection_1(danh_sach_hang_hoa);
                update_dshh(data_hang_hoa, danh_sach_hang_hoa);
                break;
            case 2: 
                do_selection_2(danh_sach_hang_hoa);
                update_dshh(data_hang_hoa, danh_sach_hang_hoa);
                break;
            case 3:
                do_selection_3(danh_sach_nhan_vien, danh_sach_khach_hang);
                update_dsnv(data_nhan_vien, danh_sach_nhan_vien);
                update_dskh(data_khach_hang, danh_sach_khach_hang);
                break;
            case 4:
                do_selection_4(
                    danh_sach_nhan_vien,
                    danh_sach_khach_hang,
                    danh_sach_hang_hoa
                );
                break;
            case 5:
                do_selection_5(
                    danh_sach_nhan_vien,
                    danh_sach_khach_hang,
                    danh_sach_hang_hoa
                );
                break;
        }
    } while (lua_chon != 0);
    data_hang_hoa.close();
    data_nhan_vien.close();
    data_khach_hang.close();
    return 0;
}
