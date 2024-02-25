default:
	avr-g++ -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o led.o blinkled.cpp
	avr-g++ -o led.bin led.o
	avr-objcopy -O ihex -R .eeprom led.bin led.hex
burn:
	avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:led.hex
clean:
	rm -f led.o led.bin led.hex
