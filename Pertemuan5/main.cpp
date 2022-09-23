#include <iostream>


using namespace std;

    int panjang;
    int lebar;
    int hasil;

    float phi;
    int r;

int main()

{
    cout << "Menghitung Luas Persegi Panjang";
    cout << endl;

    cout << "Masukkan Panjang : ";
    cin >> panjang;

    cout << "Masukkan Lebar : " ;
    cin >> lebar;

    cout << "Hasil : " ;
    cout << panjang * lebar <<endl;

    //=======================================


  cout << "Menghitung Luas Lingkaran" << endl;
  cout << endl;

  float r, luas;

  cout << "Input jari-jari lingkaran: ";
  cin >> r;
  luas = 3.14 * r * r;

  cout << "Luas lingkaran = "<< luas << endl;

    return 0;

}

