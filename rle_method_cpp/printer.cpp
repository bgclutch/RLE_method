#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "../rle_method_h/printer.h"

void file_printer(const char* file_decompressed)
{
    FILE* file_print = fopen(file_decompressed, "r");

    assert(file_print && "nullptr file print");
    
    int outp_char = 0;

    while((outp_char = getc(file_print)) != EOF)
        printf("%c", outp_char);

    if(fclose(file_print) != 0)
        printf("print file close error\n");    
}

void instruction()
{
    printf("This program can compress, decompress and print files,\n" 
           "ASCII art, for example. Input in console <file_name.txt> and one of this commands:\n\n"
           "\"--compress\" - for only compressing file\n"
           "\"--decompress\" - for only decompressing your file\n"
           "\"--decompress_and_print\" - for decompress and print your file\n"
           "\"--print\" - for only print your file\n\n"
           "hope you enjoy using it!\n");
}