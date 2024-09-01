#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "../rle_method_h/file_printer.h"
#include "../rle_method_h/structs.h"

void file_processing(const int argc, const char* const* const argv, const Console_Input_Parsing local_commands)
{
if(strcmp(argv[1], local_commands.help) == 0)
        {
            instruction();
            return 0;
        }

    if(argc > 1)
    {
        for(int i = 0; i < argc; i++)
        {
            if(strcmp(argv[i], local_commands.compressing) == 0)
            {
                const char* compressed_file   = {file_compressor(argv[1])};
            }
            else if(strcmp(argv[i], local_commands.decompressing) == 0)
            {
                const char* file_decompressed = {file_decompressor(argv[1])};
            }
            else if(strcmp(argv[i], local_commands.decompress_and_print) == 0)
            {
                const char* file_decompressed = {file_decompressor(argv[1])};

                file_printer(file_decompressed);
            }
            else if(strcmp(argv[i], local_commands.print) == 0)
            {
                 file_printer(argv[1]);
            }
            else if(strcmp(argv[i], local_commands.test) == 0)
            {
                const char* compressed_file   = {file_compressor(argv[1])};

                const char* file_decompressed = file_decompressor(compressed_file);

                file_printer(file_decompressed);
            }
        }
        printf("\n\nthanks for work!\n");
    }
}
