#include <iostream>
#include <stdint.h>
#include <chrono>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image/stb_image_write.h"

using namespace std; 

int main(){

    //auto start_single_thread = std::chrono::high_resolution_clock::now();

    int width, height, channels;
    unsigned char* img = stbi_load("cachorro.jpg", &width, &height, &channels, 4);

    auto start_single_thread = std::chrono::high_resolution_clock::now();

    for(int i = 0; i < width * height * 4; i += 4){ //RGB - Red, green and blue. Esse 0 a 3 são meus canais (Ao todo são 4 canais)
        img[i + 0] = 222; //RED
        //img[i + 1] = 84; //GREEN
        img[i + 2] = 227; //BLUE
        //img[i + 3] = 255; //ALFA, indica a opacidade, transparência 
    }

    auto stop_single_thread = std::chrono::high_resolution_clock::now();
    auto duration_single_thread = std::chrono::duration_cast<std::chrono::milliseconds>(stop_single_thread - start_single_thread);
    cout << "Single-threaded image processing time: " << duration_single_thread.count() << "ms" << endl;

    stbi_write_png("cachorro_colorido.png", width, height, 4, img, width * 4);

    stbi_image_free(img);

    return 0;

}