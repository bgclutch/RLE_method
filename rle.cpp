#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdint.h>

#include "compressor.h"
#include "decompressor.h"
#include "printer.h"

int main(int argc, char *argv[])
{
    printf("input file name with .txt extention in console\n\n\n");

    if(argc > 1)
    {
    const char* compressed_file   = {file_compressor(argv[1])};

    const char* file_decompressed = file_decompressor(compressed_file);

    file_printer(file_decompressed);

    printf("\n\n\nthanks for work!\n");
    }

    return 0;
}
