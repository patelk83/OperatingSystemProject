#ifndef IO_H
#define IO_H
#include "types.h"
uint8 inportb (uint16 _port);

void outportb (uint16 _port, uint8 _data);

#endif
