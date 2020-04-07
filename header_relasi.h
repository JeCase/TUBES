#ifndef HEADER_RELASI_H_INCLUDED
#define HEADER_RELASI_H_INCLUDED

#include "header_relasi.h"
#include "header_penumpang.h"
#include "header_pramugari.h"

#include <iostream>
using namespace std;

#define next(P) P->next
#define first(L) L.first
#define penumpang(P) P->penumpang
#define pramugari(P) P->pramugari

typedef struct elmlist_relasi *address_relasi;

struct elmlist_relasi{
    address_relasi next;
    address_penumpang penumpang;
    address_pramugari pramugari;
};

struct List_relasi{
    address_relasi first;
};

/** TIDAK PERLU MODIFIKASI */
void createList(List_relasi &L);
void insertFirst(List_relasi &L, address_relasi P);
void insertLast(List_relasi &L, address_relasi P);
void insertAfter(address_relasi Prec, address_relasi P);
void deleteFirst(List_relasi &L, address_relasi &P);
void deleteLast(List_relasi &L, address_relasi &P);
void deleteAfter(address_relasi Prec, address_relasi &P);


/** PERLU MODIFIKASI */
address_relasi alokasi( address_pramugari P, address_penumpang C);
void dealokasi(address_relasi &P);
address_relasi findElm(List_relasi L, address_pramugari P, address_penumpang C);
void printInfo(List_relasi L);



#endif // HEADER_RELASI_H_INCLUDED
