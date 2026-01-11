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

        //3. Método paraa calcular bono (10% si es C++, 5% para el resto)
        double calcularBono(){
            if (lenguajeFavorito == "C++"){
                return salario * 0.10;
            } else {
                return salario * 0.05;
            }
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

    //4. Prueba

    //Crea objeto programaador con datos correctos
    Programador p1("Bit", "C++", 5000);
    p1.saludar();

    //Crea objeto con salario bajo
    Programador p2("Novato", "Python", 500);
    p2.saludar();

    return 0;

    cin.get();
}
