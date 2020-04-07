#ifndef HEADER_PENUMPANG_H_INCLUDED
#define HEADER_PENUMPANG_H_INCLUDED

#include <iostream>
using namespace std;

#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last
#define info(P) P->info

typedef string infotype_penumpang;
typedef struct elmlist_penumpang *address_penumpang;

struct elmlist_penumpang{
    infotype_penumpang info;
    address_penumpang next;
    address_penumpang prev;
};

struct List_penumpang{
    address_penumpang first;
    address_penumpang last;
};

/** TIDAK PERLU MODIFIKASI */
void createList(List_penumpang &L);
void insertFirst(List_penumpang &L, address_penumpang P);
void insertLast(List_penumpang &L, address_penumpang P);
void insertAfter(address_penumpang Prec, address_penumpang P);
void deleteFirst(List_penumpang &L, address_penumpang &P);
void deleteLast(List_penumpang &L, address_penumpang &P);
void deleteAfter(address_penumpang Prec, address_penumpang &P);


/** PERLU MODIFIKASI */
address_penumpang alokasi(infotype_penumpang x);
void dealokasi(address_penumpang &P);
address_penumpang findElm(List_penumpang L, infotype_penumpang x);
void printInfo(List_penumpang L);



#endif // HEADER_PENUMPANG_H_INCLUDED
