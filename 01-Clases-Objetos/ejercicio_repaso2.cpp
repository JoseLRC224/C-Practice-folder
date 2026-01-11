#include <iostream>
#include <string>

using namespace std;
class Programador {
    private:
        double salario; //Atributo privado (encapsulamiento)

    public:
        string nombre;
        string lenguajeFavorito;

        // 1. Constructor: Recibe nombre, lenguaje y salario
        Programador(string n, string l, double s){
            nombre = n;
            lenguajeFavorito = l;

            // Aquí se debería usar el setter para la validación  del salario desde el inicio
            setSalario(s);
        }

        //2. Setter con validación
        void setSalario(double s){
            if (s < 1000){
                cout << "Error: Salario insuficiente para " << nombre << endl;
                salario = 1000; //Sueldo base por defecto

            } else {
                salario = s;
            }
        }

        double getSalario() {
            return salario;
        }

        //3. Método paraa calcular bono (10% si es C++, 5% para el resto)
        double calcularBono(){
            if (lenguajeFavorito == "C++"){
                return salario * 0.10;
            } else {
                return salario * 0.05;
            }
        }

        //Metodo para ayuda entre programadores
        void ayudarA(Programador &otro) {
            cout << nombre << " esta ayudando a " << otro.nombre << "..." << endl;
            // Le subimos el salario al otro usando su setter
            double nuevoSalario = otro.getSalario() + 200;
            otro.setSalario(nuevoSalario);
        }


        void saludar() {
            double bono = calcularBono();
            cout << "--- Ficha de Programador ---" << endl;
            cout << "Nombre: " << nombre << endl;
            cout << "Lenguaje: " << lenguajeFavorito << endl;
            cout << "Salario Base: $" << salario << endl;
            cout << "Bono: $" << bono << endl;
            cout << "Total: $" << salario + bono << endl;
            cout << "---------------------------" << endl;

    }
};

int main(){


    //variables temporales
    string nombre;
    string lenguaje;
    double sal;

    cout << "Registro de nuevo programador" << endl;
    cout << "Inserte el nombre del programador nuevo --> " << endl;
    getline(cin, nombre);

    cout << "Inserte el lenguaje del programador nuevo --> " << endl;
    getline(cin, lenguaje);

    cout << "Inserte salario del programador nuevo --> " << endl;
    cin >> sal; 

    Programador pNuevo(nombre, lenguaje, sal);
    pNuevo.saludar();
    // Arreglo de 3 programadores
    //Programador equipo[] = {
    //    Programador("Bit", "C++", 5000),
    //    Programador("Novato", "Python", 7000),
    //    Programador("Linus", "C", 7000)
    //};
//
    //double nominaTotal = 0;
//
    //cout << "=== REPORTE DE NÓMINA MENSUAL" << endl;
//
//
//
    //equipo[0].ayudarA(equipo[1]); // Bit ayuda a Novato
    //equipo[1].saludar();          // Novato saluda con su nuevo salario
//
//
    //// recorriendo el arreglo
    //for (int i = 0; i < 3; i++) {
    //    equipo[i].saludar(); // Imprime la ficha de cada uno
//
    //    // 3. Sumamos el salario y el bono al total
    //    // Usamos getSalario() porque el salario es PRIVADO
    //    double totalPersona = equipo[i].getSalario() + equipo[i].calcularBono();
    //    nominaTotal += totalPersona;
    //}
    //
//
    //cout << "DINERO TOTAL A PAGAR ESTE MES: $" << nominaTotal << endl;
    //cout << endl;
//
    //

    //prueba para acceder a datos del arreglo
    //equipo[0].saludar();
    //equipo[2].saludar();
    //cout << "Consulta de programador..." << endl;
    //cout << "El primero programador es: " << equipo[0].nombre << endl;
    //cout << "y su lenguaje de programacion es: " << equipo[0].lenguajeFavorito << endl; 

    cin.get();
    return 0;

    
}