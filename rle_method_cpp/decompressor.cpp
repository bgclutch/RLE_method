#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "../rle_method_h/decompressor.h"

const char* file_decompressor(const char* file_compressed_name)
{
    FILE* file_compressed   = fopen(file_compressed_name, "r");

    assert(file_compressed && "nullptr file compressed");

    FILE* file_decompressed = fopen("file_decompressed.txt", "w");

    assert(file_decompressed && "nullptr file decompressed");

    int num_char = 0;
    int decoded_char = 0;

    num_char = getc(file_compressed);
    decoded_char = getc(file_compressed);
    while(decoded_char != EOF)
    {
        for(int i = 0; i < num_char; i++)
             putc(decoded_char, file_decompressed); 

        num_char     = getc(file_compressed);
        decoded_char = getc(file_compressed);
    }

    if(fclose(file_compressed) != 0)
        printf("compressed file close error\n");

    if(fclose(file_decompressed) != 0)
        printf("decompressed file close error\n");

    const char* sigma = "file_decompressed.txt";

    return sigma;
}