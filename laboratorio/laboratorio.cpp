//este programa se ejecuta con datos previamente guardados en el archivo "data.txt" que son datos enteros
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main() {
    int temperatura;
    fstream archivo("data.txt");
	string linea;
	cout << "-30       0         30         60         90         120" << endl;
	if (archivo.is_open()){
		while(getline(archivo, linea)){
			int asteriscos = 0;
			temperatura=atoi(linea.c_str());
			if (temperatura < 0) {				
                int tmp = abs(temperatura);
                asteriscos = (tmp / 3);
                for (int i = 0; i < 10 - asteriscos; i++)
                {
                cout << " ";
                }
                for (int i = 0; i < asteriscos; i++)
                {
                cout << "*";
                }        
            } else {            	
                for (int i = 0; i < 10; i++)
                {
                cout << " ";
                }
            }
            cout << "|";
            if (temperatura > 0) {            	
                asteriscos = (temperatura / 3);
                for (int i = 0; i < asteriscos; i++)
                {
                cout << "*";
                }
            }
            cout << "\n";
		}
	}
    return 0;
}
