/*presentar programas que resuelvan las sumatorias indicadas en clase (sumatoria de 1, sumatoria de i, sumatoria de i al cuadrado). 
Aquí puedo ingresar por teclado el i inicial (por default 1) y el n final. 
También los programas fibonacci y factorial recursivo.*/
#include <iostream>
using namespace std;

// Función para calcular la sumatoria de 1 desde i hasta n y mostrar la secuencia
int sumatoriaDe1(int i, int n) {
    return n - i + 1;
}

// Función para calcular la sumatoria de i desde i hasta n y mostrar la secuencia
int sumatoriaDeI(int i, int n) {
    int sum = 0;
    for (; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

// Función para calcular la sumatoria de i al cuadrado desde i hasta n y mostrar la secuencia
int sumatoriaDeICuadrado(int i, int n) {
    int sum = 0;
    for (; i <= n; ++i) {
        sum += i * i;
    }
    return sum;
}

//Funcion para calcular Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

//Funcion para calcular el factorial
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

//Funcion para mostrar la secuencia de fibonacci
void mostrarFibonacci(int n) {
    cout << "Secuencia de Fibonacci de " << n << ":" << endl;
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

// Función mostrar el factorial
void mostrarfactorial(int n) {
    cout << "Secuencia de factorial de " << n << ":" << endl;
    for (int i = 0; i <= n; ++i) {
       cout << factorial(i) << "*";
    }
    cout << endl;
}

// Función mostrar la secuencia sumatoria de 1  
void mostrarSumatoriaDe1(int i, int n) {
    cout << "Secuencia de la sumatoria de 1 desde " << i << " hasta " << n << ": ";
    for (; i <= n; ++i) {
        cout << "1";
        if (i < n) {
            cout << " + ";
        }
    }
    cout << endl;
}

// Función mostrar la secuencia sumatoria de i hasta n
void mostrarSumatoriaDeI(int i, int n) {
    cout << "Secuencia de la sumatoria de i desde " << i << " hasta " << n << ": ";
    for (; i <= n; ++i) {
        cout << i;
        if (i < n) {
            cout << " + ";
        }
    }
    cout << endl;
}

// Función para mostrar la secuencia de la sumatoria de i al cuadrado desde i hasta n
void mostrarSumCuadrado(int i, int n) {
    cout << "Secuencia de la sumatoria de i al cuadrado desde " << i << " hasta " << n << ": ";
    for (; i <= n; ++i) {
        cout << i << "^2";
        if (i < n) {
            cout << " + ";
        }
    }
    cout << endl;
}

int main(){
    int i, n;
    int opcion;
    
    do
    {
        cout << "Seleccione la operacion que desea realizar:" << endl;
        cout << "1. Mostrar secuencias de sumatoria de 1" << endl;
        cout << "2. Mostrar secuencias de sumatoria de i" << endl;
        cout << "3. Mostrar secuencias de sumatoria de i^2" << endl;
        cout << "4. Mostrar secuencias de fibonacci" << endl;
        cout << "5. Mostrar secuencias de factorial" << endl;
        cout << "6. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
        case 1:
            cout << "Ingrese el valor de i: ";
            cin >> i;
            cout << "Ingrese el valor de n: ";
            cin >> n;
            mostrarSumatoriaDe1(i, n);  
            cout << "Resultado de la sumatoria de 1 desde " << i << " hasta " << n << ": " << sumatoriaDe1(i, n) << endl;
            break;
        case 2:   
            cout << "Ingrese el valor de i: ";
            cin >> i;
            cout << "Ingrese el valor de n: ";
            cin >> n;
            mostrarSumatoriaDeI(i, n);
            cout << "Resultado de la sumatoria de i desde " << i << " hasta " << n << ": " << sumatoriaDeI(i, n) << endl;
            break;
        case 3:   
            cout << "Ingrese el valor de i: ";
            cin >> i;
            cout << "Ingrese el valor de n: ";
            cin >> n;
            mostrarSumCuadrado(i, n);
            cout << "Resultado de la sumatoria de i al cuadrado desde " << i << " hasta " << n << ": " << sumatoriaDeICuadrado(i, n) << endl;
            break;
        case 4:   
            cout << "Ingrese el valor de i: ";
            cin >> i;
            cout << "Ingrese el valor de n: ";
            cin >> n;
            mostrarFibonacci(n);
            break;
        case 5:   
            cout << "Ingrese el valor de i: ";
            cin >> i;
            cout << "Ingrese el valor de n: ";
            cin >> n;
            mostrarfactorial(n);
            break;
        case 6:
            cout << "Saliendo del programa..." <<endl;
            break;
        default:
            cout << "Opción inválida, intente nuevamente." << endl;
            break;
        }
    } while ( opcion!= 6 );
    

    return 0;
}
