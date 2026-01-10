#include <iostream>
#include <string>

using namespace std;

class Programador {
    private: 
    string nombre;
    string lenguajeFavorito;
    double salario;
    double bono;

    public:
    //constructor
    Programador(string n, string l, double s){
        setNombre(n);
        setLenguaje(l);
        setSalario(s);
    };

    //Setters
    void setNombre(string nuevoNombre){
        //Validación: min 3 caracteres
        if (nuevoNombre.length() >=3){
            nombre = nuevoNombre;
        }
        else{
            cout << "Error: El nombre '" << nuevoNombre << "' es muy corto" << endl;
        }
    }

    void setLenguaje(string nuevoLenguaje){
        //Validación: Solo acepta C++, Python o JS

        if (nuevoLenguaje == "C++" || nuevoLenguaje == "Python" || nuevoLenguaje == "JS"){
            lenguajeFavorito = nuevoLenguaje;
        }
        else {
            cout << "Error: El lenguaje '" << nuevoLenguaje << "' no es valido" << endl;
        }

    }

    void setSalario(double nuevoSalario) {
    // Validamos que el dato que llega (nuevoSalario) sea mayor o igual a 1000
    if (nuevoSalario >= 1000) {
        salario = nuevoSalario;
    } 
    else {
        cout << "Error: El salario " << nuevoSalario << " es menor al minimo (1000)" << endl;
        salario = 0; // Lo dejamos en 0 para indicar que el dato fue invalido
    }
    }

    //metodos para saludar y calcular bono

    //Si el languaje es c++, devuelve un bono del 10%, si no, del 5%
    double calcularBono() {
    // Usamos el atributo que ya tiene el objeto guardado
    if (lenguajeFavorito == "C++") {
        bono = salario * 0.10;
    } 
    else {
        bono = salario * 0.05;
    }
    return bono;
    }

    void saludar() {
    // Llamamos a la funcion de arriba para llenar la variable 'bono' con dinero real
    calcularBono(); 

    cout << "Hola, soy " << nombre << " y mi lenguaje es " << lenguajeFavorito << endl;
    cout << "Mi bono es de: $" << bono << " y mi salario base es: $" << salario << endl;
    cout << "Total: $" << (salario + bono) << endl << endl;
    }


};

int main() {
    
    Programador usuario1("Bit", "C++", 1000);
    Programador usuario2("Anne", "Python", 1000);
    Programador usuario3("Eddie", "JS", -500);

    usuario1.saludar();
    usuario2.saludar();
    usuario3.saludar();
    /*
    usuario.saludar();
    */

    //Bloque para que la terminal quede en espera y no cierre el programa
    cout << "\nPresiona Enter para finalizar...";
    cin.get();

    return 0;

}




