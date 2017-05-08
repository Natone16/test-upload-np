/*comm.c 
 * Created by Tony Booth and Nathaniel Park
 * Communication between boards
 * */

#include "system.h"
#include "comm.h"
#include "ir_uart.h"
#include "startscreen.h"

/* Transmit signal to other player */
void comm_transmit (Object* player, uint8_t comm) {
    uint8_t data = comm | player->pos.col;
    ir_uart_putc (data);
    ir_uart_getc ();
}

/* Recieve signal from other player and return outcome */
uint8_t* comm_receive (const uint8_t* comms, uint8_t* wall_active_array)
{   
    
    uint8_t data;
    static uint8_t success = 0;
    data = ir_uart_getc();
    /* Filter out bad data */
    if (data > 30) {
        /* Separate data */
        uint8_t comm_data = data & 0b11111000;
        uint8_t column_data = data & 0b00000111;
        /* If data recieved, represent bomb (destroy wall) */
        if (comm_data == comms[0]) {
            success++;
            /* Recieve same byte at least 5 times before proceding */
            if (success >= 5) {
                success = 0;
            wall_active_array[column_data] = 0;
            }
        }
        /* If data received represents end of game */
        else if (comm_data == comms[1]) {
            //success++;
    
            //while (success >= 5) {
            startscreen_gameover(1);
            //}
        }
    }  
    return wall_active_array[5];
}
    
