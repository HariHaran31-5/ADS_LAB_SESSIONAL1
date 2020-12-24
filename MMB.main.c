#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "MMB.h"


void test(){

    Slist s1 = slist_new();
    Slist *list= &s1;
    assert (count_cust(list) == 0);

    list = open_acc(list,"kiran","",23,"SBIN1234D","CUB","9977663321",5000);
    assert(list->head->data.initial_depo == 2000);
    list = open_acc(list,"Vinay","",22,"CUB1244R","CUB","9765432176",6000);
    assert (list->head->data.age == 22);
    list = open_acc(list,"Vamshi","",24,"CUBN1244V","CUB","9988745221",4000);

}


int main()
{
    test();
    return 0;
}
