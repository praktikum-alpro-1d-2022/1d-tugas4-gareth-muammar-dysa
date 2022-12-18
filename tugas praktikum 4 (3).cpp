#include <iostream>
using namespace std;
int main (){

     char menu;

    cout<<"\nMenu Restaurant Mc'Yahud";
    cout<<"\n===========================================";
    cout<<"\n 1. Nasi Goreng Informatika   Rp. 5.000,-";
    cout<<"\n 2. Nasi Soto Ayam Internet   RP. 7.000,-";
    cout<<"\n 3. Gado-Gado Disket          RP. 4.500,-";
    cout<<"\n 4. Bubur Ayam LAN            Rp. 4.000,-";
    cout<<"\n===========================================";
    cout<<endl;

    cout<< "Masukkan Pilihan Menu Anda (1,2,3,4) : ";
    cin >> menu;
    cout << endl;

    switch (menu){
  case '1':
    cout << "Pilihan No.1 Nasi Goreng Informatika RP.5.000,-" << endl;
    break;
  case '2':
    cout << "Pilihan No.2 Nasi Soto Ayam Informatika RP.7.000,-" << endl;
    break;
  case '3':
    cout << "Pilihan No.3 Gado-Gado Disket Rp.4.500,-" << endl;
    break;
  case '4':
    cout << "pilihan No.4 Bubur Ayam LAN RP.4.000,-" << endl;
    break;

  default:
    cout << "SALAH MASUKIN NOMOR !!!!!!" << endl;
    break;

    }

return 0;
}
