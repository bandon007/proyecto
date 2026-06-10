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
    // Nombres de los productos (puedes cambiarlos por los reales)
    string Productos[18] = {
        "Producto 1", "Producto 2", "Producto 3", "Producto 4", "Producto 5",
        "Producto 6", "Producto 7", "Producto 8", "Producto 9", "Producto 10",
        "Producto 11", "Producto 12", "Producto 13", "Producto 14", "Producto 15",
        "Producto 16", "Producto 17", "Producto 18"
    };
    
    // Precios asignados a cada producto
    double Precios[18] = {
        10.5, 5.0, 12.0, 8.5, 20.0, 15.0, 7.5, 9.9, 11.0,
        4.5, 6.0, 14.5, 18.0, 22.5, 3.0, 13.0, 16.5, 25.0
    };

    // Cantidades y Subtotales inicializados en 0
    int cantidades[18] = {0};
    double Subtotales[18] = {0.0};

    int opcion;

    // --- 4 y 5. Mostrar el MENU PRINCIPAL y controlar las opciones ---
    do {
        cout << "\n----------- MENU PRINCIPAL -----------" << endl;
        cout << "1. Ver Menu" << endl;
        cout << "2. Realizar Pedido" << endl;
        cout << "3. Modificar Pedido" << endl;
        cout << "4. Ver Factura" << endl;
        cout << "5. Aplicar Descuento" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cout << "--------------------------------------" << endl;

        // Estructura para manejar la lógica de cada opción del menú
        switch (opcion) {
            case 1:
                cout << "[Abriendo] Ver Menu..." << endl;
                // Aquí irá el código para listar los productos y precios
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
    return;