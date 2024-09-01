#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdint.h>

#include "../rle_method_h/compressor.h"
#include "../rle_method_h/decompressor.h"
#include "../rle_method_h/printer.h"

int main(int argc, char *argv[])
{
    printf("input file name with .txt extention in console\n\n\n");

    if(argc > 1)
    {
        assert(&argv[1] && "nullptr recieved file");

        const char* compressed_file   = {file_compressor(argv[1])};

        const char* file_decompressed = file_decompressor(compressed_file);

        file_printer(file_decompressed);

        printf("\n\n\nthanks for work!\n");
    }

    return 0;
}
