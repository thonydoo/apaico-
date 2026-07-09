/* Programacion de Microcontroladores: ESP32
 * Pontificia Universidad Católica del Perú
 * Departamento de Ingeniería - Fabricum
 *
 * M1 — Script 01: Hola mundo
 * Primer programa: incluir cabeceras, usar printf y retornar de main.
 *
 * Compilar: gcc -Wall -Wextra -std=c11 -g 01_hola_mundo.c -o hola && ./hola
 */

#include <stdio.h>

int main(void) {

    /* TODO: imprimir "Hola, ESP32!" */
    printf("Hola, ESP32! \n");
    /* TODO: imprimir tu nombre */
    printf("My names is Thony \n");
    /* TODO: imprimir la version del firmware, ej: "Firmware v1.0" */
    printf("Firmware v1.0 \n");
    return 0;
}
