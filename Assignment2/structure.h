#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>  
#define shiftbit 8
#ifndef SUM_HEADER_GUARD_WITH_UNIQE_NAME 
#define SUM_HEADER_GUARD_WITH_UNIQE_NAMES  

enum Bitoperations{TOGGLE,SWAP};        // enum with 2 values TOGGLE and SWAP

struct BitManipulateStruct {            // structure declaration which contains data of bank details of person  

 unsigned short int number;            // integer of 16 bits
 void (*p1)(short int*);               // declaration of function pointer with void return type and int* as function argument
 short int (*p2)(short int);           // declaration of function pointer with short int return type and int as function argument

}; 
 
#endif
