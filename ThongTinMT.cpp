#include <iostream>
#include <iomanip>
using namespace std;
typedef struct PC
{
   int mamay;
   string tenhang;
   float giatien;
} PC;
void nhap1may(PC &a)
{
   cout << "\nNhap Ma May: ";
   cin >> a.mamay;
   cin.ignore();
   cout << "\nNhap Ten Hang: ";
   getline(cin, a.tenhang);
   cout << "\nNhap Gia Tien: ";
   cin >> a.giatien;
}
void Nhap(PC mt[], int &n)
{
   cout << "Nhap So Luong Thong Tin May Tinh :";

   cin >> n;
   for (int i = 1; i <= n; i++)
   {
      cout << "\nThong Tin May Tinh So " << i << endl;
      nhap1may(mt[i]);
   }
}
void xuat1may(PC mt)
{
   cout << "ma may:" << mt.mamay << " ten hang:" << mt.tenhang << " giatien:" << fixed << setprecision(3) << 1.0 * mt.giatien;
}
void Xuat(PC mt[], int &n)
{
   for (int i = 1; i <= n; i++)
   {
      cout << "\nThong Tin May Tinh So " << i << " ";
      xuat1may(mt[i]);
   }
}
int main()
{
   PC mt[100];
   int n;
   Nhap(mt, n);
   Xuat(mt, n);
}
