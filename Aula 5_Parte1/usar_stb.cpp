#include <iostream>
#include <stdint.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image/stb_image_write.h"

int main(){

    int width, height, channels;
    unsigned char* img = stbi_load("gato.jpg", &width, &height, &channels, 4);

    stbi_write_jpg("gato_copia.png", width, height, 4, img, 4 * width);
    stbi_write_png("gato.png", width, height, 4, img, 4 * width);

    stbi_image_free(img);

    return 0;

}
