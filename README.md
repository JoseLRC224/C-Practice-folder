# Prácticas de Programación en C++

Repositorio dedicado al aprendizaje de C++ desde las bases hasta Programación Orientada a Objetos, desarrollado en **Fedora Linux**.

## 📂 Estructura del Proyecto

* **`01-Clases-Objetos/`**: Introducción a la POO, creación de instancias y métodos.
* **`CPP_LearningBasics/`**: Ejercicios fundamentales de sintaxis, tipos de datos y manipulación de terminal.
* **`02-Herencia/`**: (En desarrollo) Conceptos de clases hijas y reutilización de código.
* **`03-Polimorfismo/`**: (En desarrollo) Prácticas sobre métodos virtuales y sobreescritura.

## 🛠️ Notas de Aprendizaje

### Caracteres de Escape y Terminal
Durante las pruebas en `numbers.cpp`, aprendí que:
1. La barra invertida `\` al final de un comentario actúa como **carácter de continuación de línea**, lo que puede comentar accidentalmente la siguiente línea de código.
2. Para imprimir una barra literal `\` se debe usar la secuencia de escape `\\`.
3. El uso de `std::endl` es vital en terminales Linux para asegurar que el buffer se limpie y el prompt del sistema no sobreescriba la salida del programa.

## 🚀 Configuración del Entorno
El proyecto utiliza una configuración global de VS Code para compilar y depurar con **F5** de forma automática en cualquier subcarpeta.