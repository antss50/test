// Bai04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
struct PhanSo {
    int iTuSo;
    int iMauSo;
};
void Nhap(PhanSo& x)
{
    cin >> x.iTuSo >> x.iMauSo;
}
void Xuat(PhanSo x)
{
    cout << x.iTuSo << "/" << x.iMauSo << " ";
}
PhanSo TimKiem(PhanSo a[], int n)
{
    PhanSo max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max.iTuSo * a[i].iMauSo < a[i].iTuSo * max.iMauSo)
            max = a[i];
    }
    return max;
}
void SapXep(PhanSo a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if ((float)a[j].iTuSo/a[j].iMauSo < (float)a[min].iTuSo/a[min].iMauSo)
            {
                min = j;
            }
        }
        PhanSo temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}
int main()
{
    PhanSo Day_PhanSo[100];
    PhanSo kq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        Nhap(Day_PhanSo[i]);
    }
    kq = TimKiem(Day_PhanSo, n);
    cout << kq.iTuSo << "/" << kq.iMauSo << "  ";
    cout << endl;
    SapXep(Day_PhanSo, n);
    for (int i = 0; i < n; i++)
    {
        Xuat(Day_PhanSo[i]);
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
