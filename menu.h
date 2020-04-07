#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "header_penumpang.h"
#include "header_pramugari.h"
#include "header_relasi.h"

#include <iostream>

using namespace std;

void add_pramugari(List_pramugari &L);
void add_penumpang(List_penumpang &L);
void add_relasi(List_relasi &LR, List_pramugari &LP, List_penumpang &LC);


#endif // MENU_H_INCLUDED
