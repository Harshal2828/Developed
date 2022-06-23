#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 20
#ifndef SUM_HEADER_GUARD_WITH_UNIQE_NAME 
#define SUM_HEADER_GUARD_WITH_UNIQE_NAMES  

enum usr_choice{Levelorder=1,Preorder,Inorder,Postorder};
struct node {
    char name[20];
    int age;
    struct node* left;
    struct node* right;
};

struct choice {
  char ch[10];
  int val;
};

struct TreeManipulation {
void (*ptr)(struct node*);

};
#endif
