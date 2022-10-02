#include <iostream>

using namespace std;

int main()
{

    int jurusan;
    int smt;


    cout << "==Daftar Jurusan==" << endl;
    cout << "1. Teknik Informatika" << endl;
    cout << "2. Sistem Informasi" << endl;
    cout << "3. Desain Komunikasi Visual" << endl;
    cout << endl;

    cout << "==Kategori Mahasiswa==" <<endl;
    cout << "1. Semester 1-2 = Freshman" <<endl;
    cout << "2. Semester 3-4 = Sophomore" << endl;
    cout << "3. Semester 5-6 = Junior" << endl;
    cout << "4. Semester 7-8 = Senior" << endl;
    cout << endl;

    cout << "Masukkan Jurusan Anda : " ; cin >> jurusan;
    cout << "Masukkan Semester Anda : " ; cin >> smt;
    cout << endl;




    cout << "Masukan Jurusan Anda : " ;
     if ( jurusan == 1){
        cout << " Jurusan Teknik Informatika" << endl;
    }else if ( jurusan == 2){
        cout << " Jurusan Sistem Informasi" << endl;
    }else if ( jurusan == 3){
        cout << " Jurusan Desain Komunikasi Visual (DKV)" << endl;
    }else{
    cout << "Terjadi Kesalahan Saat Input Data" << endl;
    }

    cout << "Masukan Semester Anda : " ;
     if ( smt >0 && smt <3){
        cout << "Anda Termasuk kategori freshman year" << endl;

    }else if ( smt >2 && smt <5 ){

        cout << "Anda Termasuk kategori Sophomore year" << endl;
    }else if ( smt >4 && smt <7){

        cout << "Anda Termasuk kategori Junior year" << endl;
    }else if ( smt >6 && smt <9){

        cout << "Anda Termasuk kategori Senior year" << endl;


    }else{
    cout << "Terjadi Kesalahan Saat Input Data" << endl;
    }



    return 0;
}
