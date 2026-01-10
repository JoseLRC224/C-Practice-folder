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

## 🔧 Configuración Global de Compilación (Linux)

Para evitar crear carpetas `.vscode` en cada proyecto, configuramos un entorno de compilación global que funciona en cualquier subcarpeta del repositorio presionando **F5**.

### 1. Ubicación de la configuración
En VS Code para Linux, la configuración de usuario se encuentra en:  
`~/.config/Code/User/`

### 2. Archivos clave
Se crearon/modificaron dos archivos en esa ruta:

#### **tasks.json** (El Compilador)
Define cómo se transforma el código `.cpp` en un ejecutable.  
* **Comando:** `g++`
* **Argumentos:** Se configuró para generar un ejecutable llamado `main` (o el nombre del archivo) en la misma carpeta del código fuente.
* **Ubicación:** Es una "User Task", por lo que VS Code la reconoce en cualquier carpeta abierta.

#### **launch.json** (El Depurador)
Define cómo se ejecuta el programa al presionar **F5**.
* **MIMode:** `gdb` (el depurador estándar de GNU/Linux).
* **PreLaunchTask:** Debe coincidir exactamente con el nombre de la tarea definida en `tasks.json`.
* **ExternalConsole:** Configurado en `false` para usar la "Debug Console" integrada de VS Code.

### 3. Flujo de trabajo
1. Abrir cualquier archivo `.cpp`.
2. Presionar **F5**.
3. VS Code busca la tarea global, compila y lanza el depurador automáticamente.

## 🚀 Avances en Programación Orientada a Objetos

### Encapsulamiento y Constructores
* **Atributos Privados:** Protegemos los datos internos de la clase `Programador`.
* **Validación en Setters:** Implementamos lógica para evitar nombres cortos (<3 caracteres) y lenguajes fuera de la lista permitida.
* **Constructores Robustos:** El constructor ahora inicializa el objeto llamando a los setters, garantizando que un objeto no pueda "nacer" con datos inválidos.
