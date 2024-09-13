#include <iostream>
#include <stdint.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image/stb_image_write.h"

#define CHANNEL_NUM 3

using namespace std;

int main(){

    int width, height, bpp;
    unsigned char* rgb_image = stbi_load("gato.jpg", &width, &height, &bpp, CHANNEL_NUM);

    if(rgb_image == NULL){
        printf("Error in loading the image\n");
        exit(1);
    }

    stbi_write_png("gato.png", width, height, CHANNEL_NUM, rgb_image, width * CHANNEL_NUM);
    stbi_write_jpg("gato.jpg", width, height, CHANNEL_NUM, rgb_image, 100);

    stbi_image_free(rgb_image);

    return 0;

}