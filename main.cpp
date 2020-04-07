#include <iostream>
#include <stdlib.h>

#include "header_relasi.h"
#include "header_penumpang.h"
#include "header_pramugari.h"
#include "menu.h"

using namespace std;

int main()
{
    int alibi;
    List_pramugari LP;
    List_penumpang LC;
    List_relasi LR;
    address_penumpang C;
    address_pramugari P;
    address_relasi R;

    createList(LP);
    createList(LC);
    createList(LR);

    mulai :
    cout << " ****************************************\n";
    cout << "|                  MENU                  |\n";
    cout << " ****************************************\n";
    cout << "1. Mendaftarkan Pramugari Baru\n";
    cout << "2. Mendaftarkan Penumpang Baru\n";
    cout << "3. Merelasikan Pramugari dengan Penumpang\n";
    cout << "4. Lihat Semua Daftar\n";
    cout << "-----------------------------------------\n" ;
    cout << "Ketik Angka Menu : ";
    cin >> alibi;
    system("CLS");

    switch(alibi){
        case 1:
            add_pramugari(LP);
            cout << "Ketik '0' Untuk ke Menu Utama : ";
            cin >> alibi;
            system("CLS");
            goto mulai;
        case 2:
            add_penumpang(LC);
            cout << "Ketik '0' Untuk ke Menu Utama : ";
            cin >> alibi;
            system("CLS");
            goto mulai;
        case 3:
            add_relasi(LR, LP, LC);
            cout << "Ketik '0' Untuk ke Menu Utama : ";
            cin >> alibi;
            system("CLS");
            goto mulai;
        case 4:
            printInfo(LP);
            printInfo(LC);
            printInfo(LR);
            cout << "Ketik '0' Untuk ke Menu Utama : ";
            cin >> alibi;
            system("CLS");
            goto mulai;
        default:
            cout << "Menu Tidak Diketahui";
            cout << "Ketik '0' Untuk ke Menu Utama : ";
            cin >> alibi;
            system("CLS");
            goto mulai;
    }



//    /**Cek New*/
//    /** insert pramugari */
//    P = alokasi(LP, "Tiga");
//    insertFirst(LP, P);
//    P = alokasi(LP, "Tujuh");
//    insertFirst(LP, P);
//    P = alokasi(LP, "Dua");
//    insertFirst(LP, P);
//    P = alokasi(LP, "Empat");
//    insertFirst(LP, P);
//
//    cout<<"list pramugari"<<endl;
//    printInfo(LP);
//
//    /** insert penumpang */
//    C = alokasi("A");
//    insertFirst(LC, C);
//    C = alokasi("D");
//    insertFirst(LC, C);
//    C = alokasi("E");
//    insertFirst(LC, C);
//    C = alokasi("O");
//    insertFirst(LC, C);
//
//    cout<<"list penumpang"<<endl;
//    printInfo(LC);
//
//    /** RELASIKAN pramugari DENGAN penumpang **/
//    P = findElm(LP, "Empat");
//    C = findElm(LC, "E");
//    R = alokasi(P,C);
//    insertFirst(LR,R );
//
//    C = findElm(LC, "D");
//    R = alokasi(P, C);
//    insertFirst(LR,R );
//
//
//    P = findElm(LP, "Dua");
//    C = findElm(LC, "E");
//    R = alokasi(P, C);
//    insertFirst(LR, R );
//
//    P = findElm(LP, "Tiga");
//    C = findElm(LC, "A");
//    R = alokasi(P, C);
//    insertFirst(LR,R );
//
//    cout<<endl<<"Setelah Direlasikan"<<endl;
//    cout<<"list pramugari"<<endl;
//    printInfo(LP);
//
//    cout<<endl<<"list penumpang"<<endl;
//    printInfo(LC);
//
//    cout<<endl<<"list relasi"<<endl;
//    printInfo(LR);
//
//
//    /** KELEBIHAN DARI BENTUK III: jika salah satu penumpang diedit **/
//    C = findElm(LC, "E");
//    info(C) = "X";
//
//    cout<<endl<<"Setelah penumpang Diedit"<<endl;
//    cout<<"list pramugari"<<endl;
//    printInfo(LP);
//
//    cout<<endl<<"list penumpang"<<endl;
//    printInfo(LC);
//
//    cout<<endl<<"list relasi"<<endl;
//    printInfo(LR);




//
////   Old Check
////  * insert pramugari
//    P = alokasi(3);
//    insertFirst(LP, P);
//    P = alokasi(7);
//    insertFirst(LP, P);
//    P = alokasi(2);
//    insertFirst(LP, P);
//    P = alokasi(4);
//    insertFirst(LP, P);
//
//    cout<<"list pramugari"<<endl;
//    printInfo(LP);
//
////  * insert penumpang
//    C = alokasi("A");
//    insertFirst(LC, C);
//    C = alokasi("D");
//    insertFirst(LC, C);
//    C = alokasi("E");
//    insertFirst(LC, C);
//    C = alokasi("O");
//    insertFirst(LC, C);
//
//    cout<<"list penumpang"<<endl;
//    printInfo(LC);
//
////    * RELASIKAN pramugari DENGAN penumpang *
//    P = findElm(LP, 4);
//    C = findElm(LC, "E");
//    R = alokasi(P,C);
//    insertFirst(LR,R );
//
//    C = findElm(LC, "D");
//    R = alokasi(P, C);
//    insertFirst(LR,R );
//
//
//    P = findElm(LP, 2);
//    C = findElm(LC, "E");
//    R = alokasi(P, C);
//    insertFirst(LR, R );
//
//    P = findElm(LP, 3);
//    C = findElm(LC, "A");
//    R = alokasi(P, C);
//    insertFirst(LR,R );
//
//    cout<<endl<<"Setelah Direlasikan"<<endl;
//    cout<<"list pramugari"<<endl;
//    printInfo(LP);
//
//    cout<<endl<<"list penumpang"<<endl;
//    printInfo(LC);
//
//    cout<<endl<<"list relasi"<<endl;
//    printInfo(LR);
//
//
////* KELEBIHAN DARI BENTUK III: jika salah satu penumpang diedit *
//    C = findElm(LC, "E");
//    info(C) = "X";
//
//    cout<<endl<<"Setelah penumpang Diedit"<<endl;
//    cout<<"list pramugari"<<endl;
//    printInfo(LP);
//
//    cout<<endl<<"list penumpang"<<endl;
//    printInfo(LC);
//
//    cout<<endl<<"list relasi"<<endl;
//    printInfo(LR);

    return 0;
}
