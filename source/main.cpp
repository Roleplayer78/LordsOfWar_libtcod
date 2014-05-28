#include "main.hpp"

#include <stdio.h>
#include <unistd.h>

Engine engine(80,50);

int main() {
	engine.load();
    while ( !TCODConsole::isWindowClosed() ) {
    	engine.update();
    	engine.render();
		TCODConsole::flush();    
    }
    engine.save();
    return 0;
}
