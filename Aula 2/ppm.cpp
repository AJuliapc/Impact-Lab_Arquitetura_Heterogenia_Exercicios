// PPM Imagem Impact lab 2024

#include <iostream>
#include <fstream>

using namespace std;

int main(){ 

	std::cout << "Impacat lab PPM" << std::endl; // Printar na tela 
	// Task 1: file name: image_2024.ppm
    cout << "Task 1: file name: image_2024.ppm" << endl;

    //std::cin >> // Pega a saída 

	//std::ifstream imageout; // Ler o arquivo = std::cin
    std::ofstream imagein; // Escrever = std::cout

    imagein.open("image_2024.ppm");

    // Task 2: ppm header
    cout << "Task 2: ppm header" << endl;

    if(imagein.is_open()){
        std::cout << "Header" << std::endl;
        imagein << "P3" << std::endl;
        imagein << "10 10" << std::endl;
        imagein << "255" << std::endl;
    }

	// Task 3: ppm body
    cout << "Task 3: ppm body" << endl;

    /*for(int i = 0; i < 10; ++i){ // Para minhas linhas
        for(int j = 0; j < 10; ++j){ // Para minhas colunas
            if((i + j) % 2 == 0){
                imagein << "255 255 255"; // Branco
            }else{
                imagein << "0 0 0"; // Preto
            }
        }
        imagein << std::endl;
    }*/

   // Across the images W H
    // Pixel RGB
    int red = 0;
    int green = 0;
    int blue = 0;

    for (int w = 0; w < 10; w++) {
        for (int h = 0; h < 10; h++) {
            red = w * 50;
            green = h * 10;
            blue = (w + h) * 15;

            imagein << red << " " << green << " " << blue << " ";
        }
        //imagein << "255 0 0" << endl; // red
        imagein << std::endl;
    }

    imagein.close();
    cout << "End" << endl;
	return 0;

}