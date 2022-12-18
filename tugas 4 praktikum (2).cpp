#include <iostream>
using namespace std;
int main(){

      int angka;

      cout << "---Mencari tahun kabisat---"<< endl;
      cout << "Masukkan tahun : ";
      cin >> angka;

     if (angka%400==0)
           cout << "tahun tersebut merupakan tahun kabisat!" << endl;

      else if (angka%100==0)
          cout << "tahun tersebut bukan merupakan tahun kabisat!" << endl;

      else if (angka %4==0)
          cout << "tahun tersebut merupakan tahun kabisat!" << endl;

      else
         cout << "tahun tersebut bukan merupakan tahun kabisat!" << endl;


return 0;
}
