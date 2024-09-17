#include <iostream>
#include <stdint.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image/stb_image_write.h"

int main(){

    int width, height, channels;
    unsigned char* img = stbi_load("gato.jpg", &width, &height, &channels, 4);

    for(int i = 0; i < width * height * 4; i += 4){ //RGB - Red, green and blue. Esse 0 a 3 são meus canais (Ao todo são 4 canais)
        img[i + 0] = 222; //RED
        //img[i + 1] = 84; //GREEN
        img[i + 2] = 227; //BLUE
        //img[i + 3] = 255; //ALFA, indica a opacidade, transparência 
    }

    stbi_write_png("gato_colorido.png", width, height, 4, img, width * 4);

    stbi_image_free(img);

    return 0;

}