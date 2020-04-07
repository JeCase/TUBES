#include "header_pramugari.h"
void createList(List_pramugari &L) {
    /**
    * FS : first(L) diset Nil
    */
    first(L) = NULL;
}

address_pramugari alokasi(List_pramugari, infotype_pramugari x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

        address_pramugari P;
        P = new elmlist_pramugari;
        info(P) = x;
        next(P) = NULL;
        return P;
}

void insertFirst(List_pramugari &L, address_pramugari P) {
    /**
    * IS : List_pramugari L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List_pramugari L
    *      next dari last elemen menunjuk ke first elemen
    */
    address_pramugari Q;
    if (info(P) != "Selesai" && info(P) != "SELESAI"){
        if(first(L) == NULL) {
            first(L) = P;
            next(P) = P;
        }else {
            Q = first(L);
            while(next(Q) != first(L)) {
                Q = next(Q);
            }
            next(P) = first(L);
            next(Q) = P;
            first(L) = P;
        }
    }else{
        P = NULL;
    }
}


void printInfo(List_pramugari L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    int i = 1;
    address_pramugari P = first(L);
    if(first(L)!=NULL) {
        do {
            cout<< i++ << ". " << info(P)<<endl;
            P = next(P);
        } while((P)!=first(L));
    }
}

address_pramugari findElm(List_pramugari L, infotype_pramugari x) {
    /**
    * IS : List_pramugari L mungkin kosong
    * FS : mengembalikan elemen dengan info nim = x.nim,
    * FS : mengembalikan elemen dengan info = x,
           mengembalikan Nil jika tidak ditemukan
    */
    address_pramugari P = first(L);
    do {
        if(info(P) == x) {
            return P;
        }
        P = next(P);
    } while(P != first(L));
    return NULL;
}
