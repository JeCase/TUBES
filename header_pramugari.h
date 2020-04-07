#ifndef HEADER_PRAMUGARI_H_INCLUDED
#define HEADER_PRAMUGARI_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

typedef string infotype_pramugari;
typedef struct elmlist_pramugari *address_pramugari;

struct elmlist_pramugari {
    infotype_pramugari info;
    address_pramugari next;
};

struct List_pramugari {
    address_pramugari first;
};


/** TIDAK PERLU MODIFIKASI */
void createList(List_pramugari &L);
void insertFirst(List_pramugari &L, address_pramugari P);
void insertAfter(List_pramugari &L, address_pramugari Prec, address_pramugari P);
void insertLast(List_pramugari &L, address_pramugari P);
void deleteFirst(List_pramugari &L, address_pramugari &P);
void deleteLast(List_pramugari &L, address_pramugari &P);
void deleteAfter(List_pramugari &L, address_pramugari Prec, address_pramugari &P);


/** PERLU MODIFIKASI */
address_pramugari alokasi(List_pramugari, infotype_pramugari x);
void dealokasi(address_pramugari &P);
address_pramugari findElm(List_pramugari L, infotype_pramugari x);
void printInfo(List_pramugari L);


#endif // HEADER_PRAMUGARI_H_INCLUDED
