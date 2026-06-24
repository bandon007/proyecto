#include <iostream>
#include <string>

using namespace std;

int main() {
    // --- 1. Mostrar mensaje de Bienvenida ---
    cout << "=========================================" << endl;
    cout << "   BIENVENIDO AL SISTEMA DE VENTAS       " << endl;
    cout << "=========================================" << endl;

    // --- 2. Inicializar total = 0, contador = 0 ---
    double total = 0.0;
    int contador = 0;

    // --- 3. Declaración de Arreglos (Tamaño 18) ---
    // Nombres de los productos (pueden cambiarlos por los reales)
    string Productos[18] = {
        "1. Hamburguesa ",
        "2. Pizza ",
        "3. Hot Dog ",
        "4. Pupusas ",
        "5. Panini de pollo ",
        "6. Almuerzo ",
        "7. Desayunos "
    };
    
    // Precios asignados a cada producto
    double Precios[18] = {
        5.99,  // Hamburguesa
        8.99,  // Pizza
        3.49,  // Hot Dog
        4.99,  // Pupusas
        6.49,  // Panini de pollo
        7.99,  // Almuerzo
        5.49   // Desayunos
    };

    // Cantidades y Subtotales inicializados en 0
    int cantidades[18] = {0};
    double Subtotales[18] = {0.0};

    int opcion;

    // --- 4 y 5. Mostrar el MENU PRINCIPAL y controlar las opciones ---
    do {
        cout << "----------- MENU PRINCIPAL -----------" << endl;
        cout << "1. Ver Menu" << endl;
        cout << "2. Realizar Pedido" << endl;
        cout << "3. Modificar Pedido" << endl;
        cout << "4. Ver Factura" << endl;
        cout << "5. Aplicar Descuento" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cout << "--------------------------------------" << endl;

        // Estructura para para la logica del menu
        switch (opcion) {
            case 1:
                cout << "[Abriendo] Ver Menu..." << endl;
                // Aquí irá el código para listar los productos y precios
                for (int i = 0; i < 7; i++) {
                    cout << i + 1 << ". " << Productos[i] << " - $" << Precios[i] << endl;
                }
                break;
            case 2:
                cout << "[Abriendo] Realizar Pedido..." << endl;
                // Aquí irá la lógica para pedir productos e ir sumando al contador/subtotales
                1. Hamburguesa $3.50
                2. Pizza $5.00
                3. Hot Dog $2.00
                4. Pupusas $1.00
                5. Panini de pollo $1.50
                6. Almuerzo $2.50
                7. Desayunos $2.00
                break;
            case 3:
                cout << "[Abriendo] Modificar Pedido..." << endl;
                break;
                7. Desayunos $2.00
                }
                break;
            case 2:
                cout << "[Abriendo] Realizar Pedido..." << endl;
                // Aquí irá la lógica para pedir productos e ir sumando al contador/subtotales
                break;
            case 3:
                cout << "[Abriendo] Modificar Pedido..." << endl;
                break;
            case 4:
                cout << "[Abriendo] Ver Factura..." << endl;
                break;
            case 5:
                cout << "[Abriendo] Aplicar Descuento..." << endl;
                break;
            case 6:
                cout << "Saliendo del sistema. ¡Gracias por su visita!" << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
        }
    } while (opcion != 6);
    return 0;
                break;
            case 6:
                cout << "Saliendo del sistema. ¡Gracias por su visita!" << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
        }
    } while (opcion != 6);
    return 0;
}