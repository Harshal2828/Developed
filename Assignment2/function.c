#include "structure.h"

 void ToggleAllBits(short int* temp){                                         // function to toggle the bits of the integer
    /*int num = 1;
 
    while (num <= *temp)
    {
        *temp = *temp ^ num;
         num = num << 1;
    } */
    *temp= ~(*temp);

}

 short int SwapBytes(unsigned short int number){                            //  function to swap higher and lower byte of the integer

  return ((number & 0xFF) << shiftbit | (number & 0xFF00) >> shiftbit);
}

 void Manipulator(struct BitManipulateStruct* ptr,enum Bitoperations ch){   // function to check the input from user and perform operation accordingly
     unsigned short int res;
     
 do{
     switch(ch){

     case TOGGLE:
     ptr->p1(&ptr->number);                                                 // Derefrecing the function pointer which is pointing to "ToggleAllBits" function
     printf("After toggling the  number is:%d\n",ptr->number);
     break;

     case SWAP:                                                             // Derefrecing the function pointer which is pointing to "SwapBytes" function
     res=ptr->p2(ptr->number);
     printf("After swapping the higher and lower byte of integer the number is:%d\n",res);
     break;
     
     default:
     printf("Enter Valid Choice\n");

     }
  printf("\nEnter %d for TOGGLE or %d for SWAP or %d for EXIT \n",TOGGLE,SWAP,2);  // taking input from user if user wants to perform further operations or not
  scanf("%d",&ch);

 }while(ch!=2);

}
