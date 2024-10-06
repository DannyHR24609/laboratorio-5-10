// En ste ejercicio inclui un generador de numeros aleatorios entre -30 y 120 numeros enteros
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main(){
	srand(static_cast<unsigned int>(time(0)));
	string num;
	fstream archivo("datosrandom.txt", ios::out);
	string linea;
	if (archivo.is_open()){
		for (int i=0; i<=24; i++){			
			archivo<<-30+(rand()%120)<<endl;
		}
		archivo.close();
	}
	int temperatura;
    fstream archivoss("datosrandom.txt");
	cout << "-30       0         30         60         90         120" << endl;
	if (archivoss.is_open()){
		while(getline(archivoss, linea)){
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
