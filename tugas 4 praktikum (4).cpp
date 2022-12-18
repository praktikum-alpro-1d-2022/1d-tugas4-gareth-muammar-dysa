#include <iostream>
using namespace std;

int main(){
    int kode;
    char ukuran;
    float jmlh, B1,K1,S1,B2,S2,K2,B3,S3,K3;
    B1 = 10000;
    S1 = 4250;
    K1 = 2100;
    B2 = 8500;
    S2 = 4000;
    K2 = 2025;
    B3 = 17000;
    K3 = 8300;
    S3 = 14500;

     cout << "====================================================" << endl;
    cout << "| Kode Susu | Nama Produk |  Ukuran   |    Harga   |" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "|           |             |  B=Besar  |  RP.10.000 |" << endl;
    cout << "|     1     |   Dancow    |  S=Sedang |  RP.4.250  |" << endl;
    cout << "|           |             |  K=Kecil  |  RP.2.100  |" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "|           |             |  B=Besar  |  RP.8.500  |" << endl;
    cout << "|     2     |  Indomilk   |  S=Sedang |  RP.4.000  |" << endl;
    cout << "|           |             |  K=Kecil  |  RP.2.025  |" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "|           |             |  B=Besar  |  RP.17.000 |" << endl;
    cout << "|     3     |  Sustacal   |  S=Sedang |  RP.14.500 |" << endl;
    cout << "|           |             |  K=Kecil  |  RP.8.300  |" << endl;
    cout << "====================================================" << endl;

    cout<<"Masukan kode susu (1-3):";
    cin>>kode;
    cout<<"Masukan ukuran susu (B/S/K):";
    cin>>ukuran;
    cout<<"Masukan jumlah pembelian :";
    cin>> jmlh;
    cout << "---------------" << endl;

    if (kode == 1 && ukuran == 'B')
        cout << "susu dancow \nharga susu Rp"<<jmlh * B1;

    else if (kode == 1 && ukuran == 'S')
        cout << "susu dancow \nharga susu Rp"<<jmlh * S1;

    else if (kode == 1 & ukuran == 'K')
        cout << "susu dancow \nharga susu Rp"<<jmlh * K1;

    else if (kode == 2 && ukuran == 'B')
        cout << "susu indomilk \nharga susu Rp"<<jmlh * B2;

    else if (kode == 2 && ukuran == 'S')
        cout << "susu indomilk \nharga susu Rp"<<jmlh * S2;

    else if (kode == 2 & ukuran == 'K')
        cout << "susu indomilk \nharga susu Rp"<<jmlh * K2;

    else if (kode == 3 && ukuran == 'B')
        cout << "susu sustacal \nharga susu Rp"<<jmlh * B3;

    else if (kode == 3 && ukuran == 'S')
        cout << "susu sustacal \nharga susu Rp"<<jmlh * S3;

    else if (kode == 3 & ukuran == 'K')
        cout << "susu sustacal \nharga susu Rp"<<jmlh * K3;

    else
        cout<<"input yang anda masukan salah"<<endl;

        cout<<endl;

        return 0;
}
