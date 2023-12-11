#include <stdio.h>

struct Node{
    int Data;
    struct Node *lptr;
    struct Node *rptr;
};

void SearchTree(){
    
    struct Node *root = malloc(sizeof(struct Node));
    struct Node *t1 = malloc(sizeof(struct Node));
    struct Node *t2 = malloc(sizeof(struct Node));
    struct Node *t3 = malloc(sizeof(struct Node));

    root -> Data = 12;
    root -> lptr = t1;
    root -> rptr = t2;

    t1 -> Data = 6;
};

int main()
{
    printf("Tree Started");
    return 0;
}