#include "structure.h"

struct node* mkbtree(struct node* root,struct choice* ch) {
    root =(struct node*)malloc(sizeof(struct node));
    printf("Enter Name and Age of Person\n");
    scanf("%s",&root->name);
    scanf("%d",&root->age);
    printf("Do you want to enter data in left  subtree of %s (yes/no)\n",root->name);
    scanf("%s",&ch->ch);
    ch->val=strcmp(ch->ch,"yes");
    if(ch->val==0){
    root->left=mkbtree(root->left,ch);
    }
    else{
    root->left=NULL;
    }
    printf("Do you want to enter data in right  subtree of %s (yes/no)\n",root->name);
    scanf("%s",&ch->ch);
    ch->val=strcmp(ch->ch,"yes");
    if(ch->val==0){
    root->right=mkbtree(root->right,ch);
    }
    else{
    root->right=NULL;
    }
    return root;
}
struct node** createqueue(int* front, int* rear)
{
    struct node** queue = (struct node**)malloc(sizeof(struct node*)*size);
    printf("size is %d",sizeof(queue));
    *front = *rear = 0;
    return queue;
}
 
void enqueue(struct node** queue, int* rear,
             struct node* new_node)
{
    queue[*rear] = new_node;
    (*rear)++;
}
 
struct node* dequeue(struct node** queue, int* front)
{
    (*front)++;
    return queue[*front - 1];
}
void Levelordertraversal(struct node* root){
  printf("Level Order Traversal is:\n");
  int rear, front;
    struct node** queue = createqueue(&front, &rear);
    struct node* temp_node = root;
 
    while (temp_node) {
        printf("Name of the Person is %s and age %d\n", temp_node->name,temp_node->age);
 
       
        if (temp_node->left)
            enqueue(queue, &rear, temp_node->left);
 
       
        if (temp_node->right)
            enqueue(queue, &rear, temp_node->right);
 
       
        temp_node = dequeue(queue, &front);
    }

}
void Preordertraversal(struct node* root){
    if (root == NULL)
        return;
 
    printf("Name of the Person is %s and age is %d \n", root->name,root->age);
 
    Preordertraversal(root->left);
 
    Preordertraversal(root->right);
}
void Postordertraversal(struct node* root){
   
    if (root == NULL)
        return;

 
    Postordertraversal(root->left);
 
    Postordertraversal(root->right);
    
    printf("Name of the Person is %s and age is %d \n", root->name,root->age);
}
void Inordertraversal(struct node* root){
   
    if (root == NULL)
        return;

 
    Inordertraversal(root->left);

    printf("Name of the Person is %s and age is %d \n", root->name,root->age);

    Inordertraversal(root->right);
}

void Manipulator(struct TreeManipulation* pt , enum usr_choice user_ch, struct node* root){

do{
     switch(user_ch){

     case Levelorder:
     pt->ptr=Levelordertraversal; 
     pt->ptr(root);                                                 // Derefrecing the function pointer which is pointing to "ToggleAllBits" function
     //printf("After toggling the  number is:%d\n",ptr->number);
     break;

     case Preorder:                                                             // Derefrecing the function pointer which is pointing to "SwapBytes" function
     printf("Preorder Traversal is:\n");
     pt->ptr=Preordertraversal; 
     pt->ptr(root); 
    // printf("After swapping the higher and lower byte of integer the number is:%d\n",res);
     break;
     
     case Inorder:  
     pt->ptr=Inordertraversal;                                                           // Derefrecing the function pointer which is pointing to "SwapBytes" function
     printf("Inorder Traversal is:\n");
     pt->ptr(root); 
   //  printf("After swapping the higher and lower byte of integer the number is:%d\n",res);
     break;
     
     case Postorder:                                                             // Derefrecing the function pointer which is pointing to "SwapBytes" function
     pt->ptr=Postordertraversal; 
     printf("Postorder Traversal is:\n"); 
     pt->ptr(root);
     //printf("After swapping the higher and lower byte of integer the number is:%d\n",res);
     break;
     
     default:
     printf("Enter Valid Choice\n");

     }
   printf("Enter %d for Levelorder or %d for Preorder or %d for Inorder or %d for Postorder %d for EXIT\n",Levelorder,Preorder,Inorder,Postorder,5);       // Taking enum values whcih will point to st
  scanf("%d",&user_ch);

 }while(user_ch!=5);
