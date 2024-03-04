#include <iostream>
using namespace std;

int main(){
    int nNilaiMTK, nNilaiFisika, nRerata;
    string status;

    cout << "Masukkan nilai Matematika = " << nNilaiMTK << endl;
    cin >> nNilaiMTK;
    cout << "Masukkan nilai Fisika = " << nNilaiFisika << endl;
    cin >> nNilaiFisika;
    nRerata = (nNilaiMTK+nNilaiFisika)/2;
    cout << "Nilai Rata-Ratanya adalah = " << nRerata << endl;

    if (nRerata > 60 || nNilaiMTK > 70){
        status = "Lulus";
    }
    else{
        status = "Tidak Lulus";
    }
    cout << "Anda Dinyatakan = " << status << endl;
    
return 0;
}