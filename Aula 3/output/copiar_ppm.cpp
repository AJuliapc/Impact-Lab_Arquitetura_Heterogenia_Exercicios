#include <iostream>
#include <fstream>

using namespace std;

int main(){

    // Ler imagem 
    ifstream image;
    ofstream newimage;

    image.open("./images/Monument.ppm");
    newimage.open("./images/newimage01.ppm");

    string type = "", width = "", height = "", RGB = "";
    image >> type;
    image >> width;
    image >> height;
    image >> RGB;

    newimage << type << endl;
    newimage << width << "" << height << endl;
    newimage << RGB << endl;

    string red = "", green = "", blue = "";
    int intRed = 0, intGreen = 0, intBlue = 0;

    {
        Timer timer;
        while(!image.eof());
    }

    newimage.close();

    cout << type << width << height << RGB << endl;

    return 0;

}