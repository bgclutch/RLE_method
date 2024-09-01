#include <stdio.h>
#include <stdlib.h>

#include "compressor.h"

const char* file_compressor(const char* file_read_name)
{
    FILE *file_read       = fopen(file_read_name, "r");

    FILE *file_compressed = fopen("file_compressed.txt", "w");

    int counter = 1;
    int current_char = 0;
    int next_char = 0;

    current_char = getc(file_read);
    while(current_char != EOF)
    {
        while((next_char = getc(file_read)) == current_char && next_char != EOF)
        {
            counter++;
        } 
        putc(counter,      file_compressed);
        putc(current_char, file_compressed);

        current_char = next_char;
        counter = 1; 
    }

    if(fclose(file_read) != 0)
        printf("inputed file close error\n");

    if(fclose(file_compressed) != 0)
        printf("compressed file close error\n");

    const char* sigma = "file_compressed.txt";

    return sigma;
}