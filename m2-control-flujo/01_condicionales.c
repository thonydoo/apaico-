/* Programacion de Microcontroladores: ESP32
 * Pontificia Universidad Católica del Perú
 * Departamento de Ingeniería - Fabricum
 *
 * M2 — Script 01: Condicionales
 * if/else, condiciones compuestas, switch con fall-through y operador ternario.
 *
 * Compilar: gcc -Wall -Wextra -std=c11 -g 01_condicionales.c -o cond && ./cond
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void) {

    /* --- if / else if / else --- */
    printf("=== if/else ===\n");
    float temperatura = 38.5f;
    printf("Temperatura: %.1f C\n", temperatura);
    /* TODO: if/else que clasifique: >40→"CRITICO", >35→"ALERTA", >25→"NORMAL", sino→"FRIO" */

    /* --- Condiciones compuestas --- */
    printf("\n=== && y || ===\n");
    float humedad = 75.0f;
    /* TODO: si temperatura>35 Y humedad>70 -> "Activar ventilacion" */

    bool bateria_baja = true, sensor_error = false;
    /* TODO: si bateria_baja O sensor_error -> imprimir cual es el problema */

    /* --- switch --- */
    printf("\n=== switch ===\n");
    uint8_t estado = 2;
    printf("Estado: %u\n", estado);
    /* TODO: switch sobre estado: 0→"APAGADO", 1→"INIT", 2→"ACTIVO", 3→"ERROR", default→"DESCONOCIDO" */

    char modo = 'A';
    /* TODO: switch sobre modo: 'M'→"MANUAL", 'A'→"AUTOMATICO", 'S'→"SLEEP" */

    /* --- Fall-through intencional --- */
    printf("\n=== Fall-through ===\n");
    uint8_t nivel = 2;
    /* TODO: switch con fall-through: nivel 3 cae a 2, nivel 2 cae a 1.
     *   3→"Emergencia", 2→"Activar LED", 1→"Registrar log", 0→"Todo OK" */

    /* --- Ternario --- */
    printf("\n=== Ternario ===\n");
    uint8_t bat = 15;
    /* TODO: int bat_ok = (bat > 20) ? 1 : 0;  e imprimir */

    return 0;
}
