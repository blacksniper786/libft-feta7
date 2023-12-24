#include<stdlib.h>
#include<stdio.h>

typedef struct linked_list{
    int a ;// 1 byte
    int b ;// 1 byte
    struct linked_list *next ; // 8 byte
} lin ; // total 16 byte

typedef struct linked_list *node; 
 
node create(){

    node temp ;
    temp = (node )malloc(sizeof(struct linked_list));
    temp->next = NULL;
    return temp ;
}

int main(){
    node n1 ;
    n1 = create();
    // struct linked_list l1; or 
    // lin l1;

    n1->a = 5 ;
    // l1.a = 6 ;

    lin l1 = { 1,2 ,NULL};

    printf(">pointer>%d\n",n1->a);
    printf(">pointer>%lu\n",sizeof(n1)); 
    // 8 byte
    printf(">struct>%d\n",l1.a);
    printf(">struct>%d\n",l1.b);
    printf(">struct>%lu\n",sizeof(l1)); 
    // 16 byte >>> |1|>|>|>|>|>|>|>|>|**|1|1|1|1|1|1|1|1|

}