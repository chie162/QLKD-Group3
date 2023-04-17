/****************Người thực hiện: Tái Hồng Chi********************/

#include <iostream>
#include <string>
#include "DanhSach.h"
#include "DSHD.h"
#include "DSHH.h"
#include "DSKH.h"
#include "DSNV.h"
#include "DSPNH.h"
#include "HangHoa.h"
#include "HoaDon.h"
#include "KhachHang.h"
#include "Ngay.h"
#include "Nguoi.h"
#include "NhanVien.h"
#include "PhieuNhapHang.h"
#include "TaiChinh.h"

using namespace std;

void do_first()
{

}

int main()
{
    // cout << "*****Chuong trinh quan ly kinh doanh*****" << endl;
    // int lua_chon;
    // cout << "Nhap lua chon cua ban: ";
    // cout << "1. Ban hang (in hoa don)" << endl;
    // cout << "2. Nhap hang (in phieu nhap hang)" << endl;
    // cout << "3. Them/sua/xoa thong tin nhan vien/khach hang" << endl;
    // cout << "4. Hoat dong thong ke (cho NQT)" << endl;

    // cin >> lua_chon;

    // switch (lua_chon)
    // {
    // case 1:
    //     /* code */
    //     break;
    // case 2:
    //     int lua_chon_3;
    //     cout << "1. Them thong tin Nhan vien" << endl;
    //     cout << "2. Chinh sua thong tin Nhan vien" << endl;
    //     cout << "3. Xoa thong tin Nhan vien" << endl;

    //     cout << "4. Them thong tin Khach hang" << endl;
    //     cout << "5. Chinh sua thong tin Khach hang" << endl;
    //     cout << "6. Xoa thong tin Khach hang" << endl;
    //     cout << "Nhap lua chon cua ban: "; cin >> lua_chon_3;
    //     switch (lua_chon_3)
    //     {
    //     case 1:
    //         /* code */
    //         break;
    //     case 2:
    //         /* code */
    //         break;
    //     case 3:
    //         /* code */
    //         break;
    //     default:
    //         break;
    //     }

    
    // default:
    //     break;
    // }

    //TẠO CSDL
    int n;
    // cout << "\nNhap so hang hoa can them: "; cin >> n; cin.ignore();
    // DSHH dshh(n);
    // dshh.nhap();
    // dshh.xuat();

    // cout << "\nNhap so nhan vien can them: "; cin >> n; cin.ignore();
    // DSNV dsnv(n);
    // dsnv.nhap();
    // dsnv.xuat();

    cout << "\nNhap so khach hang can them: "; cin >> n; cin.ignore();
    DSKH dskh(n);
    dskh.nhap();
    dskh.xuat();

    // DSHD dshd(0);
    // DSPNH dspnh(0);

    TaiChinh qlkd;
    return 0;
}
