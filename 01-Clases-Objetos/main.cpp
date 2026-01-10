#include <iostream>
#include <string>

class Programador {

    private: // <-- ahora los datos estan protegidos
    std::string nombre;
    std::string lenguajeFavorito;
    
    public:

    //CONSTRUCTOR: Se llama igual que la clase y no tiene tipo de retorno

    Programador(std::string n, std::string l){
        //Es posible usar los setters dentro del constructor para heredar las validaciones
        setNombre(n);
        setLenguaje(l);
    };

    //SETTERS: Métrodos para asignar valores con "reglas"
    void setNombre(std::string nuevoNombre){
        //validación: mínimo 3 caracteres
        if (nuevoNombre.length() >=3){
            nombre = nuevoNombre;
        }
        else{
            std::cout << "Error: El nombre '" << nuevoNombre << "' es muy corto" << std::endl;

        }

    }

    void setLenguaje(std::string nuevoLenguaje){
        //Validación: Solo acepta C++, Python o JS

        if (nuevoLenguaje == "C++" || nuevoLenguaje == "Python" || nuevoLenguaje == "JS"){
            lenguajeFavorito = nuevoLenguaje;
        }
        else {
            std::cout << "Error: El lenguaje '" << nuevoLenguaje << "' no es valido" << std::endl;
        }

    }

    //GETTERS: Métodos para leer los valores
    std::string getNombre(){
        return nombre;
    }

    void saludar(){
        std::cout << "Hola, soy " << nombre << " y mi lenguaje es " << lenguajeFavorito << std::endl;
    }

};

int main() {
    // Creación de objetos con datos desde el inicio usando el constructor
    Programador usuario("Bit", "C++");
    Programador usuario2("Bit2", "Python");
    Programador usuario3("Bit3", "JS");

    //Creacion de objetos dando datos erroneos
    Programador usuarioError("ed", "java");
    Programador usuarioError2("el", "c#");
    Programador usuarioError3("ey", "typescript");

    usuario.saludar();
    
    //Bloque para que la terminal quede en espera y no cierre el programa
    std::cout << "\nPresiona Enter para finalizar...";
    std::cin.ignore();
    std::cin.get();

    return 0;

}
