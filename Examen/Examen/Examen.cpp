// Examen.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

template <typename T>
//{

//}

//3.4 struct
struct playerVariables
{
    float Damage;
    float Health;
    float MaxHealth;
    bool IsDead;
}; player;

//3.1, 3.2, 3.3 clases
class Enemy {
public: 
    Enemy()
    {

    }
    Enemy(float _health, float _maxHealth)
    {
        health = _health;
        maxHealth = _maxHealth;
    }
    //4.3
    virtual void Attack() {

    }
protected:
    float health;
    float maxHealth;

};

//4.1
class Zombie :Enemy {
public:
    Zombie()
    {
        health = 30;
        maxHealth = 30;
    }

    virtual void Attack()
    {
        std::cout << "Ataque de Zombie\n";
    }
};

class Spider : Enemy {
    Spider()
    {
        health = 15;
        maxHealth = 15;
    }

    virtual void Attack()
    {
        std::cout << "Ataque de Araña\n";
    }
};

class Player {

private:
    struct playerVariables PlayerVars;
};

void suma()
{
    float a;
    float b;
    float c;
    std::cout << "escribe un numero\n";
    std::cin >> a;
    std::cout << "escribe un numero para sumarlo al anterior\n";
    std::cin >> b;
    c = a + b;
    std::cout << "Resultado: ";
    std::cout << c;
    std::cout << "\n";
}

void cuadrado()
{
    float a;
    float b;
    std::cout << "escribe un numero para elevarlo al cuadrado\n";
    std::cin >> a;
    b = a * a;
    std::cout << "Resultado: ";
    std::cout << b;
    std::cout << "\n";
}

void llamada()
{
    std::cout << "Llamaste a esta funcion\n\n";
}

void impArray(int arreglo[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << arreglo[i][j];
            std::cout << "  ,  ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

int main()
{
    std::cout << "Modulo 1\n\n";

    //1.1 Data Types
    int edad;
    float dinero;

    //1.2 Condicionales
    std::cout << "Ingrese un valor de edad\n";
    std::cin >> edad;
    if (edad > 20 && edad < 40)
    {
        std::cout << "Es una persona joven\n\n";
    }
    else
    {
        std::cout << "No es una persona joven\n\n";
    }

    //1.3 Switch case
    std::cout << "Ingrese un valor a la cantidad de dinero\n";
    std::cin >> dinero;
    int _dinero = dinero;
    switch (_dinero)
    {
        case 100:
            std::cout << "poco dinero\n\n";
            break;

        case 500:
            std::cout << "dinero moderado\n\n";
            break;
        case 1000:
            std::cout << "mucho dinero\n\n";
            break;
        default:
            std::cout << "cantidad variada de dinero\n\n";
    }

    //1.4 For
    std::cout << "De que Tamano quieres imprimir el triamgulo?\n";
    int size;
    std::cin >> size;
    for (int i = 0; i < size; i++)
    {
        for (int h = 0; h <= i; h++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    //1.5 While
    std::cout << "De que Tamano quieres imprimir el triamgulo?\n";
    int sizeInv;
    std::cin >> sizeInv;
    int Inv = sizeInv;
    while (Inv > 0)
    {
        int _inv = 1;
        while (_inv < Inv)
        {
            std::cout << " ";
            _inv++;
        }
        while (_inv <= sizeInv)
        {
            std::cout << "*";
            _inv++;
        }
        Inv--;
        std::cout << "\n";
    }
    std::cout << "\n";

    //1.6 Funciones
    suma();
    cuadrado();
    llamada();


    std::cout << "Modulo 2\n\n";

    //2.1 Array
    int arreglo[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arreglo[i][j] = rand();
        }
    }
    impArray(arreglo);

    //2.2 direccion del array
    std::cout << &arreglo;
    std::cout << "\n\n";

    //2.2 apuntador
    int *apuntador = NULL;
    //apuntador = &arreglo;
    //int apuntador2 = *apuntador;

    //2.3 string
    std::string hola = "Hola, como estas\n\n";
    std::cout << hola;


    std::cout << "Modulo 3\n\n";

    //

    std::cout << "Modulo 4\n\n";
}