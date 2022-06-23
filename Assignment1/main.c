#include "structure.h"                                    // header file which contains structure declared in it

void get_file_data(const char* ,struct bank_details* );   // fucntion declaration which defined in another C file

 int main() {
   const char filename[]="test1.txt";                      // char array to store filename and const so that file name should not be changed
 
   printf("Filename id is %s:\n",filename);    
   FILE* write_ptr= fopen(filename,"wb");                  // file opened in write in binary mode

   struct bank_details b,b2;                              // objects of the declared structure
   struct bank_details* second;
  
   b.acc_no=1;                                            // Initiallization of structure
   strcpy(b.name,"harshal");
   b.balance=40000;

   fwrite(&b, sizeof(struct bank_details),1, write_ptr);  // to write the data of object of structure in file
   
   if(fwrite!=0){                                         // to check if data is added in file
   printf("data added successfully\n");
   }

   fclose(write_ptr);                                     // to close the file which is opened in writing mode
   
   
   second=&b2;                                            // structure pointer pointing to object of structure
   get_file_data(filename,&b2);                           // calling API which will copy content of file in object

   printf("data of another structure object is:\n");             
   printf(" Account_Number = %d\n Customer_Name = %s\n Balance = %lf\n", second->acc_no,second->name,second->balance);  // printing structure object in which data is copied


   return 0;

}
