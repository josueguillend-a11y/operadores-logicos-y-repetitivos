#include <iostream>
#include <iomanip> //Para que las notas salgan con un decimal
using namespace std;

int main(){
    //Declaracion de variables
    float nota; //Nota definitiva del estudiante ( 0.0 - 5.0)
    int asistencia; //Porcentaje de asistencia (0 - 100)
    int categoria; // 1 = superior 2=Alto 3=Basico 4=Bajo

    cout << fixed << setprecision (1);
    cout << "=== CLASIFICADOR DE DESEMPEÑO ACADEMICO ===" << endl << endl;


//2. LECTURA DE DATOS
    cout << "ingrese la nota definitiva (0.0 - 5.0): ";
    cin >> nota;
    
    cout << "Ingrese el procentaje de asistencia (0 - 100): ";
    cin >> asistencia;
    cout << endl;
    //3. Validacion por rangos
    if (nota < 0.0 || asistencia > 5.0){
        cout << "ERROR: la nota debe estar entre 0.00 y 5.0. " << endl;
        return 1;
}
    if(asistencia < 0 || asistencia > 100 ){
        cout << " ERROR La asistencia debe estar entre 0 y 100." <<endl;
    }
    // 4. Clasificacion con else if 
    if (nota >= 4.6){
        categoria = 1; // Superior
    } else if (nota >= 4.0){
        categoria = 2;
    }else if(nota >= 3.0){
        categoria = 3;
    } else{
        categoria = 4;
    }
    
    //5. Condicional anidado
    bool aprobado;

    if (nota > 3.0) {
        if (asistencia >= 70) {
            aprobado = true;
        } else{
            aprobado = false;
            categoria = 4;
        }

    } else {
        aprobado = false;
    }
    // 6. Mensaje con switch-case
    cout << "----------------------------------------------------" << endl;
    cout << "Nota registrada :" << nota << endl;
    cout << "Asistencia     :" << asistencia << "%" << endl;
    cout << "Desempeno      :";

    switch (categoria){
        case 1:
         cout << "SUPERIOR" << endl;
         cout << "Excelente trabajo, mantenga el ritmo" << endl;
         break;
        
        case 2:
         cout << "ALTO" << endl;
         cout << "Muy buen resultado, cerca del nivel superior" << endl;
         break;
        
        case 3:
         cout << "BASICO" << endl;
         cout << "Buen trabajo, puede mejorar" << endl;

        case 4:
         cout << "BAJO" << endl;
         cout << " Debe presentar plan de mejoramiento." << endl;
         break;
        default:
        cout << "SIN CLASIFICAR" << endl; 
    }
    //7. Resultado final (if-else simple)
    if (aprobado){
        cout << "Estado       : APROBADO" << endl;
    } else{
        cout << "Estado       : REPROBADO" << endl;
    }
    cout << "------------------------------------------------------" << endl;
    
    return 0;
}