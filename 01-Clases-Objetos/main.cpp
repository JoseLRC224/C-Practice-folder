#include <iostream>
#include <string>

class Programador {

    private: // <-- ahora los datos estan protegidos
    std::string nombre;
    std::string lenguajeFavorito;
    
    public:
    //SETTERS: Métrodos para asignar valores con "reglas"
    void setNombre(std::string nuevoNombre){
        nombre = nuevoNombre;

    }

    void setLenguaje(std::string nuevoLenguaje){
        lenguajeFavorito = nuevoLenguaje;

    }

    //GETTERS: Métodos para leer los valores
    std::string getNombre(){
        return nombre;
    }

    void saludar(){
        std::cout << "Hola, soy " << nombre << " y mi lenguaje es " << lenguajeFavorito << std::endl;
    }

};

int main(){

    
    // Instancia de clase, lugar donde se crea el objeto

    Programador usuario;

    /*
    usuario.nombre = "Bit",
    usuario.lenguajeFavorito = "C++";

    // ESTE BLOQUE YA NO FUNCIONA: usuario.nombre = "Bit"; (deberia dar error al ser privado)
    */

    //USO DE LOS SETTERS:
    usuario.setNombre("Bit");
    usuario.setLenguaje("C++");

    //Llamar al metodo de la claase Programador
    usuario.saludar();

    // SE USA UN GETTER para imprimir solo el nombre
    std::cout << "El nombre registrado es: " << usuario.getNombre() << std::endl;

    //Bloque para que la terminal quede en espera y no cierre el programa
    std::cout << "\nPresiona Enter para finalizar...";
    std::cin.ignore();
    std::cin.get();

    return 0;

}