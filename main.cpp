#include <iostream>
#include <string>

using namespace std;

int main() {
    // --- 1. Mostrar mensaje de Bienvenida ---
    cout << "=========================================" << endl;
    cout << "   BIENVENIDO AL SISTEMA DE VENTAS       " << endl;
    cout << "=========================================" << endl;

    // --- 2. Inicializar variables ---
    double total = 0.0;
    int contador = 0;

    // --- 3. Declaración de Arreglos (Tamaño 18) ---
    // Nombres de los productos (pueden cambiarlos por los reales)
    string Productos[7] = {
        "1. Hamburguesa ",
        "2. Pizza ",
        "3. Hot Dog ",
        "4. Pupusas ",
        "5. Panini de pollo ",
        "6. Almuerzo ",
        "7. Desayunos "
    };
    
    // Precios asignados a cada producto
    double Precios[7] = {
        5.99,  // Hamburguesa
        8.99,  // Pizza
        3.49,  // Hot Dog
        4.99,  // Pupusas
        6.49,  // Panini de pollo
        7.99,  // Almuerzo
        5.49   // Desayunos
    };

    // cantidades y subtotales para cada producto
    int cantidades[7] = {0};
    double Subtotales[7] = {0.0};
    // --- 4. Variables para el menú ---
    int opcion;
    int producto;
    int cantidad;

    // --- 4 y 5. Mostrar el MENU PRINCIPAL y controlar las opciones ---
    do {
        cout << "\n----------- MENU PRINCIPAL -----------" << endl;
        cout << "1. Ver Menu" << endl;
        cout << "2. Realizar Pedido" << endl;
        cout << "3. Modificar Pedido" << endl;
        cout << "4. Ver Factura" << endl;
        cout << "5. Aplicar Descuento" << endl;
        cout << "6. Salir" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Seleccione una opcion: " << endl;
        cin >> opcion;

        // Estructura para para la logica del menu
        switch (opcion){
            // --- 6. Control de opciones ---
            // Aquí se implementará la lógica para cada opción del menú
            case 1:
                cout << "\n[Abriendo] Ver Menu...\n";
                // Mostrar los productos y sus precios
                for (int i = 0; i < 7; i++) {
                    cout << i + 1 << ". " << Productos[i] << " - $" << Precios[i] << endl;
                }
                break;
            case 2:
                cout << "\n[Abriendo] Realizar Pedido...\n";
                // Mostrar los productos y sus precios
                for (int i = 0; i < 7; i++) {
                    cout << i + 1 << ". " << Productos[i] << " - $" << Precios[i] << endl;
                }
                cout << "Seleccione un producto disponible: ";
                cin >> producto;

                // Validar la selección del producto
                if (producto >= 1 && producto <= 7) {
                    // Actualizar cantidades y subtotales
                cout << "Cual seria la cantidad deseada: ";
                cin >> cantidad;
                cantidades[producto - 1] += cantidad;
                Subtotales[producto - 1] = cantidades[producto - 1] * Precios[producto - 1];
                total = 0.0;
                for (int i = 0; i < 7; i++) {
                    total += Subtotales[i];
                }
                contador++;
                cout << "Producto agregado correctamente." << endl;
                
                } else {
                    cout << "Producto no válido." << endl;
                }
                break;
            case 3:
                cout << "\n[Abriendo] Modificar Pedido...\n";
                // Aquí se implementará la lógica para modificar el pedido
                cout << "Seleccione el producto que desea modificar: ";
                cin >> producto;
                if(producto >= 1 && producto <= 7) {
                cout << "Ingresar la nueva cantidad: ";
                cin >> cantidad;
                // Validar la selección del producto
                cantidades[producto - 1] = cantidad;
                Subtotales[producto - 1] = cantidades[producto - 1] * Precios[producto - 1];
                total = 0.0;
                for (int i = 0; i < 7; i++) {
                    total += Subtotales[i];
                }
                cout << "Pedido modificado exitosamente." << endl;
            } else {
                cout << "Producto no válido." << endl;
            }
                break;

            case 4:
                cout << "\n[Abriendo] Ver Factura...\n";
                cout << "===========================" << endl;
                // Aquí se implementará la lógica para ver la factura
                total = 0.0;
                for (int i = 0; i < 7; i++) {
                    if (cantidades[i] > 0) {
                        cout << Productos[i] << " x" << cantidades[i] << " - $" << Subtotales[i] << endl;
                        total += Subtotales[i];
                    }
                }
                cout << "===========================" << endl;
                cout << "Total: $" << total << endl;
                break;

            case 5:
                cout << "\n[Abriendo] Aplicar Descuento...\n";
                // Aquí se implementará la lógica para aplicar un descuento
                if(total >= 30){
                    total = total * 0.9; // Aplicar un 10% de descuento
                    cout << "Se aplico un descuento del %10." << endl;
                } else {
                    cout << "No aplica descuento." << endl;
                }
                cout << "Total a pagar:  $" << total << endl;
                break;

            case 6:
                cout << "Saliendo del sistema. ¡Gracias por su visita!" << endl;
                // Aquí se implementará la lógica para salir del sistema
                break;
            default:
                cout << "Opcion no valida. Selecciona una opcion valida." << endl;
                break;
        }
    }while (opcion != 6);
    return 0;
    }