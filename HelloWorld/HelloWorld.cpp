#include <iostream>
#include <windows.h>

using namespace std;

int main(/*int argc, char** argv*/)
{

    byte karma = 128;
    cout << "Seleccione un numero del 1 al 10";
    int maldad = 0;
    cin >> maldad;
    std::cout << "karma: " << (int)karma << "\n";


    for (int i = 0; i < 20; i++)
    {
        karma += 10;

        switch (karma) {
        case 10: cout << "bueno" << "\n";
            break;
            case 2
        }
        //std::cout << "subiendo karma: " << (int)karma << "\n";
    }

    return 0;
}

