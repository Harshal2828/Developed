
#include "structure.h"

void  get_file_data(const char* fname, struct bank_details* second){    // Fucntion to copy data of file in object
     
    FILE* read_ptr= fopen(fname,"rb");                                  // File opened in read mode
     
    fread(second, sizeof(struct bank_details),1, read_ptr);             // Data of file gets copied to the object
            
    fclose(read_ptr);                                                   // close the file opened in read mode

}

