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
    int numeroAleatorio1 = rand() % (100 - 0 + 1) + 1; 
    int numeroAleatorio2 = rand() % (100 - 0 + 1) + 1;
    int numeroAleatorio3 = rand() % (100 - 0 +1) + 1; 
        cout << "Los numeros aleatorios generados son: " 
        << numeroAleatorio2 << " " << numeroAleatorio3 << " " << numeroAleatorio1 << " " << endl; 

    // Asignando a los numeros un size,
    int num1 = numeroAleatorio1; 
    int num2 = numeroAleatorio2; 
    int num3 = numeroAleatorio3; 

    // En esta parte del programa, veremos que hay 6 opciones en total para ordenar los numeros de manera descendiente.
    // Para ver eso mas claramente, se haran 3 grupos y entre esos 3, habran 2 subgrupos. 
    // Eso cubrira las 6 opciones. 

    
    // 1. Esta parte del programa ve las posibilidades si el numero 1 es el mas grande. 

        // 1(a) Si la orden de descendencia es numero 1 > numero 2 > numero 3. 

        if (num1 >= num2 && num2 >= num3)
        {cout << "Orden descendiente: " << num1 << " " << num2 << " " << num3 << endl;
        }
        
        // 1(b) Si el numero 1 es el mas grande, pero el num 2 < num 3, entonces la orden es num 1 > num 3 > num 2.  
    
       else if (num1 >= num3 && num3 >= num2)
            {cout << "Orden descendiente: ." << num1 << " " << num3 << " " << num2 << endl;
        } 

        
    // 2. Esta parte del programa ve las posibilidades si el numero 2 es el mas grande. 

        // 2(a) La primera opcion es que la orden de descendencia sea num 2 > num 3 > num 1. 

        else if (num2 >= num3 && num3 >= num1)
            {cout << "Orden descendiente: " << num2 << " " << num3 << " " << num1 << endl;
        }
        
        // 2(b) La segunda opcion es que la orden de descedencia sea num 2 > num 1 > num 3. 
    
       else if (num2 >= num1 && num1 >= num3)
            {cout << "Orden descendiente: " << num2 << " " << num1 << " " << num3 << endl; 
        } 


    // 3. Esta parte del programa ve las posibilidades si el numero 3 es el mas grande. 

        // 3(a) La primera opcion es que la orden de descendencia sea num 3, num 2 y num 1. 

        else if  (num3 >= num2 && num2 >= num1)
            {cout << "Orden descendiente: " << num3 << " " << num2 << " " << num1 << endl;
        } 

        // 3(b) La segunda opcion es que la orden de descendencia sea num 3, num 1 y num 2.  
    
        else if (num3 >= num1 && num1 >= num2)
            {cout << "Orden descendiente: " << num3 << " " << num1 << " " << num2 << endl;
        }


    // Si nada de las previas opciones programan, entonces hice un error. 

        else
            {cout << "I did something wrong. " << endl; 
            } 

    return 0; 

} 


