#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdint.h>
#include <string.h>

#include "../rle_method_h/compressor.h"
#include "../rle_method_h/decompressor.h"
#include "../rle_method_h/file_printer.h"
#include "../rle_method_h/structs.h"
#include "../rle_method_h/file_data_processing.h"

int main(int argc, char *argv[])
{
    struct Console_Input_Parsing local_commands
    {
        .compressing = "--compress",
        .decompressing = "--decompress",
        .decompress_and_print = "--decompress_and_print",
        .print = "--print",
        .help = "--help",
        .test = "--test"
    };

    assert(&argv[1] && "nullptr recieved file");

    printf("input file name with .txt extention in console and action with this file or input"
           "\"--help\" for instructions\n\n\n");

    file_processing(argc, argv, local_commands);

    return 0;
}
