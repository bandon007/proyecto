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
    cout << "1. Hamburguesa $3.50" << endl;
    cout << "2. Pizza $5.00" << endl;
    cout << "3. Hot Dog $2.50" << endl;
    cout << "4. Pupusas $1.00" << endl;
    cout << "5. Panini de pollo $4.50" << endl;
    cin >> opcion;
    cout << "desea agregar algo mas a su platillo principal? " << endl;
    cout << "1. Si" << endl;
    cout << "2. No" << endl;
    if (opcion == 1) {
    cout << "===========================" << endl;
    cout << "   MENU PARA ORDENAR       " << endl;
    cout << "===========================" << endl;
    cout << "1. Hamburguesa $3.50" << endl;
    cout << "2. Pizza $5.00" << endl;
    cout << "3. Hot Dog $2.50" << endl;
    cout << "4. Pupusas $1.00" << endl;
    cout << "5. Panini de pollo $4.50" << endl;
    }
  
    cin >> opcion;
    if (opcion == 1) {
        cout << "===========================" << endl;
        cout << "Acompañamientos" << endl;
        cout << "===========================" << endl;
        cout << "1. Papas fritas $1.50" << endl;
        cout << "2. Ensalada $2.00" << endl;
        cout << "3. Pan con Ajo $1.00" << endl;
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
    cout << "1. Agua $1.00" << endl;
    cout << "2. Refresco $2.00" << endl;
    cout << "3. Jugo $2.50" << endl;
    cout << "4. Coca-Cola $1.00" << endl;
    cout << "5. Té frio $1.00" << endl;
    cout << "6. Café $1.50" << endl;
    cout << "7. frozen $2.50" << endl;
    cout << "8. Licuado $2.00" << endl;
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
    cout << "1. Pastel $3.00" << endl;
    cout << "2. Helado $2.00" << endl;
    cout << "3. brownie $1.50" << endl;
    cout << "4. galletas $1.00" << endl;
    cin >> opcion;
cout << "cuantos postres desea ordenar? " << endl;
    int cantidadPostres;
    cin >> cantidadPostres;
    cantidadPostres = cantidadPostres * opcion;


    return 0;
}