/****************Người thực hiện: Tái Hồng Chi********************/

#include <iostream>
#include <string>

using namespace std;

class Ngay
{
    private:
        int ngay;
        int thang;
        int nam;
    public:
        Ngay(int ngay = 1, int thang = 1, int nam = 2023);
        ~Ngay();

        void nhap();
        void xuat();
};

Ngay::Ngay(int ngay = 1, int thang = 1, int nam = 2023) {}

Ngay::~Ngay() {}

void Ngay::nhap()
{
    cout << "Nhap ngay: "; cin >> ngay;
    cout << "Nhap thang: "; cin >> thang;
    cout << "Nhap nam: "; cin >> nam;
}

void Ngay::xuat()
{
    cout << ngay << "/" << thang << "/" << nam << endl;
}