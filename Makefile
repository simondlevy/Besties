# Makefile : builds WiringPi serial examples for communication with Arduino
#
# Copyright (C) Simon D. Levy 2016
#
# This file is part of Besties.
#
# Besties is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Besties is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# You should have received a copy of the GNU General Public License
# along with Besties.  If not, see <http://www.gnu.org/licenses/>.


all: readserial sendserial

readserial: readserial.c
	gcc -o readserial readserial.c -lwiringPi -lpthread

sendserial: sendserial.c
	gcc -o sendserial sendserial.c -lwiringPi -lpthread

clean:
	rm -f readserial sendserial *~
