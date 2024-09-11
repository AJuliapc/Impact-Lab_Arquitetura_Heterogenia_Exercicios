// PPM Imagem Impact lab 2024

#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ofstream image;
	image.open("image.ppm");

	if(image.is_open()){

		image << "P3" << endl;
		image << "250 250" << endl;
		image << "255" << endl;

		for (int y = 0; y < 250; y++) {
			for (int x = 0; x < 250; x++) {
				image << x << " " << x << " " << x << endl;
			}
		}

	}

	image.close();

	return 0;

}