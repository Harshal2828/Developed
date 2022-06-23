#include "structure.h"

 extern struct node* mkbtree(struct node*, struct choice*);
 //extern void Levelordertraversal(struct node*);
// extern void Preordertraversal(struct node*);
 //extern void Postordertraversal(struct node*);
 //extern void Inordertraversal(struct node*);
 extern void Manipulator(struct TreeManipulation*,enum usr_choice,struct node*);

 struct node* root;

 int main(){
 //struct node* root;
 
 struct choice* ch=(struct choice*)calloc(1,sizeof(struct choice*));
 struct TreeManipulation* pt=(struct TreeManipulation*)calloc(1,sizeof(struct TreeManipulation)); 
 root=mkbtree(root,ch);
 int n;
  printf("Enter %d for Levelorder or %d for Preorder or %d for Inorder or %d for Postorder \n",Levelorder,Preorder,Inorder,Postorder);       // Taking enum values whcih will point to st
  scanf("%d",&n);
  Manipulator(pt,n,root);
 return 0;

}
