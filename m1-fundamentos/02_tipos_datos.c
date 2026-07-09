/* Programacion de Microcontroladores: ESP32
 * Pontificia Universidad Católica del Perú
 * Departamento de Ingeniería - Fabricum
 *
 * M1 — Script 02: Tipos de datos con tamaño explícito
 * Uso de stdint.h para tipos portables y correctos en sistemas embebidos.
 *
 * Compilar: gcc -Wall -Wextra -std=c11 -g 02_tipos_datos.c -o tipos && ./tipos
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void) {

    /* --- Tipos sin signo --- */
    printf("=== Sin signo ===\n");
    /* TODO: declarar uint8_t brillo_led, uint16_t contador_rpm, uint32_t timestamp_ms */
    /* TODO: imprimir cada uno con %u y su sizeof con %zu */
    uint8_t brillo_led = 23;
    uint16_t contador_rpm = 1543;
    uint32_t tiempo_ejecucion = 723873;

    printf("variable de brillo_led: %d \n", brillo_led);
    printf("tamaño de brillo_led: %zu \n", sizeof(brillo_led));

    printf("variable de contador_rpm: %d \n", contador_rpm);
    printf("tamaño de contador_rpm: %zu \n", sizeof(contador_rpm));

    printf("variable de tiempo:ejecucion: %d \n", tiempo_ejecucion);
    printf("tamaño de tiempo_ejecucion: %zu \n", sizeof(tiempo_ejecucion));

    /* --- Tipos con signo --- */
    printf("\n=== Con signo ===\n");
    /* TODO: declarar int8_t temp_celsius, int32_t altitud_m */
    /* TODO: imprimir con %d y sizeof */
    
    int8_t temp_celsius = -15;
    int32_t altitud_m = -1340;

    printf("variable temp_celsius: %d \n", temp_celsius);
    printf("tamano de la temp_celsius: %zu \n",sizeof(temp_celsius));

    printf("variable altitud_m");

    /* --- Punto flotante --- */
    printf("\n=== Flotantes ===\n");
    /* TODO: declarar float voltaje = 3.3f  y  double pi = 3.14159265358979 */
    /* TODO: imprimir voltaje con %.2f y pi con %.14f */

    float voltaje = 3.3;
    double pi = 3.14159265358979;

    printf("variable voltaje: %.2f \n", voltaje);
    printf("tamano de voltaje: %zu \n",sizeof(voltaje));

    printf("variable pi: %.14f \n", pi);
    printf("tamano de pi: %zu \n",sizeof(pi));

    /* --- Booleano --- */
    printf("\n=== Booleano ===\n");
    /* TODO: declarar bool sensor_activo = true e imprimir con %d */

    bool sensor_activo = true;

    printf("variable sensor_activo: %d \n", sensor_activo);
    printf("tamano de sensor_activo: %zu \n",sizeof(sensor_activo));

    /* --- Bases numericas --- */
    printf("\n=== Bases numericas ===\n");
    /* TODO: declarar int pin_hex = 0xFF e imprimir su valor decimal */
    /* TODO: declarar int pin_octal = 010 e imprimir — NO es 10, es 8 */

    /* --- Tamaños en memoria --- */
    printf("\n=== sizeof de cada tipo ===\n");
    /* TODO: imprimir sizeof de uint8_t, uint16_t, uint32_t, int8_t, float, double */

    return 0;
}
