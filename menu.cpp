#include <iostream>
#include <string>
using namespace std;
//despliegue del menu de ordenamiento de platillos
int main (){
    int opcion;
    cout << "Bienvenido , Mesa par cuanrto de personas desea ordenar: " << endl;
    int mesa;
    cin >> mesa;
    cout << "Mesa para " << mesa << " personas" << endl;
    cout << "en un momento le mostraremos el menu para ordenar" << endl;
    cout << "===========================" << endl;
    cout << "   MENU PARA ORDENAR       " << endl;
    cout << "===========================" << endl;
    cout << "1. Hamburguesa precio: $3.50" << endl;
    cout << "2. Pizza precio: $5.00" << endl;
    cout << "3. Hot Dog precio: $2.50" << endl;
    cout << "4. Pupusas precio: $1.00" << endl;
    cout << "5. Panini de pollo precio: $4.50" << endl;
    cin >> opcion;
    cout << "desea agregar algo mas a su platillo principal? " << endl;
    cout << "1. Si" << endl;
    cout << "2. No" << endl;
    if (opcion == 1) {
    cout << "===========================" << endl;
    cout << "   MENU PARA ORDENAR       " << endl;
    cout << "===========================" << endl;
    cout << "1. Hamburguesa precio: $3.50" << endl;
    cout << "2. Pizza precio: $5.00" << endl;
    cout << "3. Hot Dog precio: $2.50" << endl;
    cout << "4. Pupusas precio: $1.00" << endl;
    cout << "5. Panini de pollo precio: $4.50" << endl;
    }
  
    cin >> opcion;
    if (opcion == 1) {
        cout << "===========================" << endl;
        cout << "Acompañamientos" << endl;
        cout << "===========================" << endl;
        cout << "1. Papas fritas precio: $1.50" << endl;
        cout << "2. Ensalada precio: $2.00" << endl;
        cout << "3. Pan con Ajo precio: $1.00" << endl;
    }
else {}
cout << "desea agregar algo mas para beber? " << endl;
cout << "1. Si" << endl;
cout << "2. No" << endl;
cin >> opcion;
if (opcion == 1) {
    cout << "===========================" << endl;
    cout << "Bebidas" << endl;
    cout << "===========================" << endl;
    cout << "1. Agua precio: $1.00" << endl;
    cout << "2. Refresco precio: $2.00" << endl;
    cout << "3. Jugo precio: $2.50" << endl;
    cout << "4. Coca-Cola precio: $1.00" << endl;
    cout << "5. Té frio precio: $1.00" << endl;
    cout << "6. Café precio: $1.50" << endl;
    cout << "7. frozen precio: $2.50" << endl;
    cout << "8. Licuado precio: $2.00" << endl;
    cin >> opcion;
    cout << "cuantas bebidas desea ordenar? " << endl;
    int cantidadBebidas;
    cin >> cantidadBebidas;
    cantidadBebidas = cantidadBebidas * opcion;
}       
cout << "desea agregar algo mas para postre? " << endl;
cout << "1. Si" << endl;
cout << "2. No" << endl;
cin >> opcion;
if (opcion == 1) {
    cout << "===========================" << endl;  
    cout << "Postres" << endl;
    cout << "===========================" << endl;
    cout << "1. Pastel precio: $3.00" << endl;
    cout << "2. Helado precio: $2.00" << endl;
    cout << "3. brownie precio: $1.50" << endl;
    cout << "4. galletas precio: $1.00" << endl;
    cin >> opcion;
cout << "cuantos postres desea ordenar? " << endl;
    int cantidadPostres;
    cin >> cantidadPostres;
    cantidadPostres = cantidadPostres * opcion;


    return 0;
}