#include "structure.h"

  extern void ToggleAllBits(short int*);                                     // functions which are defiend in function.c file 
  extern short int SwapBytes(short int);
  extern void Manipulator(struct BitManipulateStruct* , enum Bitoperations);

  int main() {
  struct BitManipulateStruct b1;                                     // object of BitManipulateStruct
  struct BitManipulateStruct* pt=(struct BitManipulateStruct*)calloc(1,sizeof(struct BitManipulateStruct));       // pointer pointing to object of BitManipulateStruct
  
  if(NULL==pt){
  printf("Memory is not allocated\n");
  }
  else{

  printf("Enter the number\n");                                      // Taking input from user whcih will assign to integer of struct
  scanf("%d",&pt->number);
  pt->p1=ToggleAllBits;                                              // assigning the address of function  ToggleAllBits to first function pointer of structure 
  pt->p2=SwapBytes;                                                  // assigning the address of function  SwapBytes to first pointer of structure 

  int n;
  printf("Enter %d for TOGGLE or %d for SWAP \n",TOGGLE,SWAP);       // Taking enum values whcih will point to st
  scanf("%d",&n);

  Manipulator(pt,n);                                                 // Callling API in which we will pass pointer to structure and enum value recieved from user 

  }
return 0;
}
