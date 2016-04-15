/*
   blinkserial.ino - Turns Arduino LED on and off based on serial input from host computer.
   Use this in conjunction with the sendserial example in the main folder.
   Copyright (C) 2016 Simon D. Levy
   This file is part of BreezySerial.
   BreezySerial is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   BreezySTM32 is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with BreezySerial.  If not, see <http://www.gnu.org/licenses/>.
 */

void setup() {

    pinMode(13, OUTPUT);

    Serial1.begin(115200);
}

void loop() {

    if (Serial1.available()) {

        char c = tolower(Serial1.read());

        if (c == 'h')
            digitalWrite(13, HIGH);

        if (c == 'l')
            digitalWrite(13, LOW);
    }
}
