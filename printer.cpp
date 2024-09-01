#include <stdio.h>
#include <stdlib.h>

#include "printer.h"

void file_printer(const char* file_decompressed)
{
    FILE* file_print = fopen(file_decompressed, "r");
    
    int outp_char = 0;

    while((outp_char = getc(file_print)) != EOF)
        printf("%c", outp_char);

    if(fclose(file_print) != 0)
        printf("print file close error\n");    
}