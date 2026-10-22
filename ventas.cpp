#include <iostream>
using namespace std;

int main() {

    double venta;
    double totalVentas;
    int ventasGrandes;
    char repetir;

    do{
        // Reiniciar los valores para una nueva jornada
        totalVentas = 0;
        ventasGrandes =  0;

        cout << "=================================================\n";    
        cout << "                 REGISTRO DE \n";    
        cout << "=================================================\n\n";

        // ==============================================================

        for (int ventaNumero = 1; ventaNumero <=5; ventaNumero++){

            cout << "Ingrese el valor de la venta "
                 << ventaNumero << ": $";
            
            cin >> venta;

            // ========================================================
            //CICLO while
            while (venta <= 0) {
                cout << "El valor debe ser mayor a $0. \n";

                cout << "Ingrese nuevamente la venta: $";
                cin >> venta;

            }

            // ====================================
            // CONTADOR
            // ====================================

            if (venta > 100000) {
                ventasGrandes++;
            }
        }    
        
        
        
    }

}

cout <<"\n =================================\n";
cout <<" RESUMEN DE VENTAS\n";
cout <<"\n =================================\n";

cout << "Total vendido $"
     << totalVentas << endl;

cout << "Ventas superiores a $100.000: "
     << ventasGrandes << endl;
