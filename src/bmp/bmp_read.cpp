#include "bmp.h"

void BMP::read(const char* filepath)
{
    std::ifstream input(filepath, std::ios::binary);
    if (!input.is_open()) exit(-1);

    /* 
     * For more information on the spec
     * refer to: https://en.wikipedia.org/wiki/BMP_file_format#Example_1
    */

    /* All BMP files start with bytes 'B' & 'M' */
    char bmp_validator[2];
    input.read(bmp_validator, 2);
    if (!(bmp_validator[0] == 'B' && bmp_validator[1] == 'M')) { exit(-1); }

    /* Reads file size */
    uint32_t file_size = 0;
    input.read(reinterpret_cast<char *>(&file_size), 4);

    /* Skips 4 reserved bytes */
    input.seekg(4, input.cur);

    /* Reads data offset */
    uint32_t offset = 0;
    input.read(reinterpret_cast<char *>(&offset), 4);

    /* 
     * Skip 4 bytes that are not needed for functionality 
     * (Number of bytes in the DIB header -from this point-)
    */
    input.seekg(4, input.cur);

    /* Reads width */
    input.read(reinterpret_cast<char *>(&width), 4);

    /* Reads height */
    input.read(reinterpret_cast<char *>(&height), 4);

    /* 
     * Skips 2 bytes that are not needed for functionality
     * (Number of color planes being used)
    */
    input.seekg(2, input.cur);

    /* Reads color depth */
    input.read(reinterpret_cast<char *>(&bit_depth), 2);

    /* Moves cursor to offset where data starts */
    input.seekg(offset, input.beg);

    data = new Color*[height];
    for (int i = 0; i < width; i++)
        data[i] = new Color[width];

    for (int i = height - 1; i >= 0; i--)
    {
        for (int j = 0; j < width; j++)
            input.read(reinterpret_cast<char *>(&data[i][j]), 3);
        input.seekg(width % 4, input.cur);
    }

    input.close();
}
