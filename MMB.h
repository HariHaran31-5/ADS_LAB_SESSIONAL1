#ifndef MMB_H_INCLUDED
#define MMB_H_INCLUDED
#include<stdint.h>
typedef struct cust Cust;
struct cust
{
    char *name;
    char*joint_name;
    int32_t age;
    char *pan;
    char *acc_type;
    int32_t phone;
    int32_t intial_depo;
};

typedef struct customer_node Node;

struct customer_node
{
    Cust data;
    Node *next;
};
typedef struct slist Slist;
struct Slist
{
    Node *head;
    Node *tail;
    unit32_t length;
};

Slist slist_new();
Slist *credit();
Slist *debit();
unit32_t balance();
unit32_t count_credit_debit();
unit32_t count_cust();
#endif // MMB_H_INCLUDED
