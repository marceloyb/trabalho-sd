#include "7segment.h"

// define pin as led in 7 segment display

// first arg = position in arduino
// second arg = what pin (a-g) will be defined in the position

void definepin(uint8_t position, char pin){


	if (pin == 'a'){
		pina = position;
	}

	if (pin == 'b'){
		pinb = position;
	}

	if (pin == 'c'){
		pinc= position;
	}

	if (pin == 'd'){
		pind = position;
	}

	if (pin == 'e'){
		pine = position;
	}

	if (pin == 'f'){
		pinf = position;
	}

	if (pin == 'g'){
		ping = position;
	}

	if (pin == 'h'){
		pinh = position;
	}
}

// need to off (clr) pin port to turn segment on
// show passed arg on in 7 segment display
void display7seg(char value){
	if (value == 'a'){
        setpinmode(1, pina);
        setpinmode(1, pinb);
        setpinmode(1, pinc);
        setpinmode(1, pind);
        setpinmode(1, pine);
        setpinmode(0, pinf);
        setpinmode(1, ping);
	}
}

// clr bit acende o led