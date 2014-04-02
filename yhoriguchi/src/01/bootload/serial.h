#ifndef _SERIAL_H_INCLUDED_
#define _SERIAL_H_INCLUDED_

int serial_init (int index);/* initialize the device */
int serial_is_send_enable (int index);/* able to send? */
int serial_send_byte (int index, unsigned char b); /* commit one character */

#endif
