#include<iostream>
using namespace std;

int main(){

   string username,password;

   cout << "Masukkan username : ";
   cin >> username;
   cout << "Masukkan password : ";
   cin >> password;
   cout << endl;
   cout << endl;

   if (username == "123" && password == "456")
        cout << "username dan password sesuai,Login berhasil";

   else if (username == "123" && password != "456")
             cout << "Username sesuai,Password tidak sesuai!";

   else if (username != "123" && password == "456")
             cout << "Username tidak sesuai,Password sesuai!";

    else
        cout << "Username dan Password tidak sesuai!";

 return 0;
}





