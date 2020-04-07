#include "menu.h"


using namespace std;

//    List_pramugari LP;
//    List_penumpang LC;
//    List_relasi LR;
    address_pramugari P;
    address_penumpang C;
    address_relasi R;
    infotype_pramugari nama_pramugari, pramugari_relasi;
    infotype_penumpang nama_penumpang, penumpang_relasi;


void add_pramugari(List_pramugari &LP){
    cout << " ==================================== " << endl;
    cout << "|       MASUKAN NAMA PRAMUGARI       |" << endl;
    cout << " ==================================== " << endl;
    cout << " ==================================== " << endl;
    cout << "|   KETIK 'SELESAI' UNTUK BERHENTI   |" << endl;
    cout << " ==================================== " << endl;
    while (nama_pramugari != "Selesai" && nama_pramugari != "SELESAI"){
        cout << "Masukan Nama Pramugari : ";
        cin >> nama_pramugari;
        if (nama_pramugari != "Selesai" && nama_pramugari != "SELESAI"){
            P = alokasi(LP, nama_pramugari);
            insertFirst(LP, P);
        }
    }
    cout << "List Pramugari : " << endl ;
    printInfo(LP);
}

void add_penumpang(List_penumpang &LC){
    cout << " ==================================== " << endl;
    cout << "|       MASUKAN NAMA PENUMPANG       |" << endl;
    cout << " ==================================== " << endl;
    cout << "|   KETIK 'SELESAI' UNTUK BERHENTI   |" << endl;
    cout << " ==================================== " << endl;
    while (nama_penumpang != "Selesai" && nama_penumpang != "SELESAI"){
        cout << "Masukan Nama Penumpang : ";
        cin >> nama_penumpang;
        if (nama_penumpang != "Selesai" && nama_penumpang != "SELESAI"){
            C = alokasi(nama_penumpang);
            insertFirst(LC, C);
        }
    }
}

void add_relasi(List_relasi &LR, List_pramugari &LP, List_penumpang &LC){
    cout << " ====================================== " << endl;
    cout << "| MASUKAN NAMA PENUMPANG DAN PRAMUGARI |" << endl;
    cout << " ====================================== " << endl;
    cout << "|    KETIK 'SELESAI' UNTUK BERHENTI    |" << endl;
    cout << " ====================================== " << endl;
    cout << "Masukan Nama Pramugari : ";
    cin >> pramugari_relasi;
    cout << "Masukan Nama Penumpang : ";
    cin >> penumpang_relasi;
    while (pramugari_relasi != "Selesai" && pramugari_relasi != "SELESAI" && penumpang_relasi != "Selesai" && penumpang_relasi != "SELESAI"){
        if (pramugari_relasi != "Selesai" && pramugari_relasi != "SELESAI" && penumpang_relasi != "Selesai" && penumpang_relasi != "SELESAI"){
            P = findElm(LP, pramugari_relasi);
            C = findElm(LC, penumpang_relasi);
            R = alokasi(P, C);
            insertFirst(LR, R);
        }
        cout << "Masukan Nama Pramugari : ";
        cin >> pramugari_relasi;
        cout << "Masukan Nama Penumpang : ";
        cin >> penumpang_relasi;
    }
}
