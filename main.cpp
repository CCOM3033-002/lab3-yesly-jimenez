/*
Asignación 3: Tres Numeros Aleatorios 
Nombre: Yesly Jimenez 
Núm. Est: 701-25-3185
Colaboraciones: 
- tutor: Gabriel Santiago
*/

#include <cstdlib> 
#include <ctime> 
#include <iostream> 

using namespace std; 

int main()
{
    srand(time(0)); 

    // El programa esta destacando 3 diferentes numeros aleatorios entre el 0 y 100. 
    int numeroAleatorio1 = rand() % (100 - 90 + 1) + 90; 
    int numeroAleatorio2 = rand() % (90 - 80 + 1) + 80;
    int numeroAleatorio3 = rand() % (40 - 20 +1) + 20; 
        cout << "Los numeros aleatorios generados son: " 
        << numeroAleatorio2 << " " << numeroAleatorio3 << " " << numeroAleatorio1 << " " << endl; 


    // Destacando las variables de manera descendiente
    if (numeroAleatorio1 <= 100
        && numeroAleatorio1 > numeroAleatorio2 
        && numeroAleatorio1 > numeroAleatorio3
        && (numeroAleatorio2 >= numeroAleatorio3)){
        cout << "Orden descendiente: " << numeroAleatorio1 << " " << numeroAleatorio2 << " " << numeroAleatorio3 << endl; 
    }

    // Si el primer numero aleatorio no es mas grande que el segundo y el segundo no es mas grande que el ultimo. 
    else cout << "La orden no esta de manera descendiente." << endl;

    return 0; 

} 


