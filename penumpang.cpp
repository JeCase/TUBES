#include "header_penumpang.h"

void createList(List_penumpang &L) {
    first(L) = NULL;
    last(L) = NULL;
}

address_penumpang alokasi(infotype_penumpang x) {
    address_penumpang P = new elmlist_penumpang;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertFirst(List_penumpang &L, address_penumpang P) {
    if (info(P) != "Selesai" && info(P) != "SELESAI"){
        if(first(L) == NULL) {
            last(L) = P;
            first(L) = P;
        } else {
            next(P) = first(L);
            prev(first(L)) = P;
            first(L) = P;
        }
    }else{
        P = NULL;
    }
}

void printInfo(List_penumpang L) {
    address_penumpang P = first(L);
    int i = 1;
    while(P !=NULL) {
        cout<<i++ << ". "<<info(P)<<endl;
        P = next(P);
    }
}


address_penumpang findElm(List_penumpang L, infotype_penumpang x) {
    address_penumpang P = first(L);
    while(P != NULL) {
        if(info(P)==x) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void insertAfter(address_penumpang &Prec, address_penumpang P) {
    prev(next(Prec)) = P;
    next(P) = next(Prec);
    prev(P) = Prec;
    next(Prec) = P;
}
