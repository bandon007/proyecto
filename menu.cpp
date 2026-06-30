#include <iostream>
#include <string>
using namespace std;

// Estructura para el menu de opciones
int main (){    
    // Variables para almacenar los productos y sus precios
    string platos[5] = {"Hamburguesa", "Pizza", "Hot Dog", "Pupusas", "Panini de pollo"};
    float precios[5] = {3.50, 5.00, 2.50, 1.00, 4.50};

    string acompanamientos[3] = {"Papas fritas", "Ensalada", "Pan con Ajo"};
    float preciosAcompanamientos[3] = {1.50, 2.00, 1.00};

    string bebidas[8] = {"Agua", "Refresco", "Jugo", "Coca-Cola", "Té frio", "Café", "frozen", "Licuado"};
    float preciosBebidas[8] = {1.00, 2.00, 2.50, 1.00, 1.00, 1.50, 2.50, 2.00};
    
    string postres[4] = {"Pastel", "Helado", "brownie", "galletas"};
    float preciosPostres[4] = {3.00, 2.00, 1.50, 1.00};

    string factura[20];
    float total = 0.0;
    int n=0;
    float subtotal[20] = {0.0};

    int mesa;
    // Solicitar al usuario la cantidad de personas para la mesa
    cout << "Bienvenido\nMesa para cuantas personas desea ordenar: ";
    cin >> mesa;
    // Mostrar el menú de opciones
    cout << "===========================" << endl;
    cout << "   MENU PARA ORDENAR       " << endl;
    cout << "===========================" << endl;
    // Mostrar los productos y sus precios correspondientes
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << platos[i] << " precio: $" << precios[i] << endl;
    }
    // Solicitar al usuario que seleccione un platillo
    int opcion;
    cout << "Seleccione un platillo: ";
    cin >> opcion;
    if (opcion >= 1 && opcion <= 5) {
        subtotal[n] = precios[opcion - 1];
        factura[n] = platos[opcion - 1];
        total += subtotal[n - 1];
    }
    // Solicitar al usuario si desea agregar acompañamientos, bebidas o postres    
    char agregarMas;
    cout << "Desea agregrar un acompanamiento? (s/n): " << endl;
    cin >> agregarMas;
    if (agregarMas == 's' || agregarMas == 'S') {
        for (int i = 0; i < 3; i++) 
            cout << i + 1 << ". " << acompanamientos[i] << " precio: $" << preciosAcompanamientos[i] << endl;
        cin >> opcion;
        if (opcion >= 1 && opcion <= 3) {
            subtotal[n] = preciosAcompanamientos[opcion - 1];
            factura[n] = acompanamientos[opcion - 1];
            total += subtotal[n - 1];
        }
    }
    cout << "Desea agregar una bebida? (s/n): " << endl;
    cin >> agregarMas;
    if (agregarMas == 's' || agregarMas == 'S') {
        for (int i = 0; i < 8; i++)
            cout << i + 1 << ". " << bebidas[i] << " precio: $" << preciosBebidas[i] << endl;
        cin >> opcion;
        if (opcion >= 1 && opcion <= 8) {
            int cantidadBebidas;
            cout << "Cuantas bebidas desea ordenar? " << endl;
            cin >> cantidadBebidas;
            subtotal[n] = preciosBebidas[opcion - 1] * cantidadBebidas;
            factura[n] = bebidas[opcion - 1];
            total += subtotal[n - 1];
            n++;
        }
    }
    
    cout << "Desea agregar un postre? (s/n): " << endl;
    cin >> agregarMas;
    if (agregarMas == 's' || agregarMas == 'S') {
        for (int i = 0; i < 4; i++)
            cout << i + 1 << ". " << postres[i] << " precio: $" << preciosPostres[i] << endl;
        cin >> opcion;
        if (opcion >= 1 && opcion <= 4) {
            int cantidadPostres;
            cout << "Cuantos postres desea ordenar? " << endl;
            cin >> cantidadPostres;
            subtotal[n] = preciosPostres[opcion - 1] * cantidadPostres;
            factura[n] = postres[opcion - 1];
            total += subtotal[n - 1];
            n++;
        }
    }
    // Mostrar la factura final y el total a pagar
    cout << " ===== FACTURA ===== " << endl;
    cout << "Mesa para " << mesa << " personas" << endl;
    for (int i = 0; i < n; i++) {
        cout << factura[i] << " - $" << subtotal[i] << endl;
    }

    cout << "--------------------------" << endl;
    cout << "Total a pagar: $" << total << endl;

    cout << "\n Metodo de pago:\n1. Tarjeta\n2. Efectivo" << endl;
    cin >> opcion;
    // Procesando el pago a realizar
    if(opcion == 1) {
        cout << "Procesando pago con tarjeta..." << endl;
        cout << "Pago realizado con exito. ¡Gracias por su compra!" << endl;
    } else if (opcion == 2) {
        cout << "Procesando pago en efectivo..." << endl;
        cout << "Pago realizado con exito. ¡Gracias por su compra!" << endl;
    } else 
        cout << "Opcion no valida. No se realizo el pago." << endl;
    cout << "Gracias por su visita. ¡Hasta luego!" << endl;
    return 0;
    

}
