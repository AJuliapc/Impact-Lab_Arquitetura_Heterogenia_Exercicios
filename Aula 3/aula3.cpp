#include <iostream>
#include <fstream>

using namespace std;

int main(){

    // Criar a imagem 
    ofstream image; // Declaramos nossa variável (objeto) como "image", ofstream é uma classe usada para escrever
    image.open("image.ppm"); // Nome do arquivo que vamos abrir 

    if(image.is_open()){
        image << "P3" << endl; // Tipo de código de cor, o P3 é para o código RGB, vai até o P6  
        image << "250 250" << endl; // Tamanho da imagem 
        image << "255" << endl; // Definir as cores RGB

        int vermelho = 250;
        int azul = 26;

        for(int y = 0; y < 250; y++){
            for(int x = 0; x < 250; x++){

                if(y <= 125){
                    if(x <= 125){
                        image << "0" << endl;
                        image << "0" << endl;
                        image << "0" << endl;
                    }else{
                        image << "255" << endl;
                        image << "255" << endl;
                        image << "255" << endl;
                    }
                }else{
                    if(x <= 125){
                        image << vermelho << endl;
                        image << "0" << endl;
                        image << "0" << endl;
                    }else{
                        image << "0" << endl;
                        image << azul << endl;
                        image << "255" << endl;
                    }
                }
            }
        }
    }

    image.close();

    return 0;

}