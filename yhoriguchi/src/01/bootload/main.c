#include "defines.h"
#include "serial.h"
#include "lib.h"

int main(void) {
    // initialize the serial device.
    serial_init(SERIAL_DEFAULT_DEVICE); 


    // displays "Helllo world"
    puts("Hello World!\n");

    // stop the program with infinite roop
    while (1)
      ;

    return 0;
}
