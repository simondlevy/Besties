/*
   readserial.c - Simple WiringPi example for reading from a serial port.


   Copyright (C) 2016 Simon D. Levy

   This file is part of Besties.

   Besties is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   BreezySTM32 is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with Besties.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <wiringSerial.h>
#include <stdio.h>

int main(int argc, char ** argv)
{
    int fd = serialOpen("/dev/ttySAC0", 115200);

    while (1) 
        if (serialDataAvail(fd))
            printf("%c", serialGetchar(fd));

    serialClose(fd);
    
    return 0;
}
