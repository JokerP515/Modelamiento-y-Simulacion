# Punto 1.1 - Generador de Secuencias

## Requisitos Previos

Antes de ejecutar el código, asegúrese de tener instalado:

- **Compilador de C++**: g++ (Linux), MinGW (Windows) o cualquier compilador compatible
- **Librerías estándar de C++**: Incluidas con el compilador (no es necesario instalar librerías externas)

## Instrucciones de Ejecución

### Paso 1: Compilar y ejecutar el generador

Para generar la secuencia de números aleatorios, compile y ejecute el archivo C++ usando el siguiente comando:

En Linux:

* Para compilar
```bash
g++ sequenceGeneratorStandard.cpp -o sequenceGenerator
```
* Para ejecutar
```
./sequenceGenerator
```
En Windows (con MinGW o similar):
* Para compilar
```bash
g++ sequenceGeneratorStandard.cpp -o sequenceGenerator.exe
```
* Para ejecutar
```
sequenceGenerator.exe
```
O bien usando cualquier IDE de su preferencia para compilar y ejecutar el archivo cpp.

### Resultados

Los resultados se guardarán automáticamente en el archivo `sequenceStandard.txt`, donde podrá ver la secuencia de números generados.

**Nota:** El archivo `sequenceStandard.txt` ya contiene resultados de una ejecución previa, por lo que puede revisarlo directamente sin necesidad de compilar si solo desea ver la salida esperada.
