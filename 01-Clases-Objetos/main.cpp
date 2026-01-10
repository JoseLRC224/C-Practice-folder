#include <iostream>
#include <string>

class Programador {

    private: // <-- ahora los datos estan protegidos
    std::string nombre;
    std::string lenguajeFavorito;
    
    public:
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
    // Instancia de clase, lugar donde se crea el objeto
    Programador usuario;

    //Esto debería disparar los mensajes de errores
    usuario.setNombre("Ed");
    usuario.setLenguaje("Java");

    //Esto debería funcionar correctamente
    usuario.setNombre("Bit");
    usuario.setLenguaje("C++");

    usuario.saludar();
    
    
    //Bloque para que la terminal quede en espera y no cierre el programa
    std::cout << "\nPresiona Enter para finalizar...";
    std::cin.ignore();
    std::cin.get();

    return 0;

}