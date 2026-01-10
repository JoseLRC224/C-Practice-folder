#include <iostream>
#include <string>

class Programador {
    public:
    std::string nombre;
    std::string lenguajeFavorito;


    void saludar (){
        std::cout << "Hola, soy " << nombre << "y estoy repadando " << "en Fedora" << std::endl; 
    }

};

int main(){
    // Instancia de clase, lugar donde se crea el objeto

    Programador usuario;
    usuario.nombre = "Bit",
    usuario.lenguajeFavorito = "C++";

    //Llamar al metodo de la claase Programador
    usuario.saludar();

    std::cout << "\nPresiona Enter para finalizar...";
    std::cin.ignore();
    std::cin.get();

    return 0;

}