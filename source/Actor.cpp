#include <math.h>
#include "main.hpp"

Actor::Actor(int x, int y, int ch, const char *name, 
    const TCODColor &col) :
    x(x),y(y),ch(ch),col(col),name(name),
    blocks(true),fovOnly(true),attacker(NULL),destructible(NULL),ai(NULL),
    pickable(NULL),container(NULL) {
}
 
Actor::~Actor() {
	if ( attacker ) delete attacker;
	if ( destructible ) delete destructible;
	if ( ai ) delete ai;
	if ( pickable ) delete pickable;
	if ( container ) delete container;
}

void Actor::render() const {
    TCODConsole::root->setChar(x,y,ch);
    TCODConsole::root->setCharForeground(x,y,col);
}

void Actor::update() {
	if ( ai ) ai->update(this);
}

/**
 *	We use float since if Actor is slowed/hasted
 *	it's possible to add fraction of AP
 */
void Actor::updateAP(float ap) {
	if ( ai ) {
		// Adding AP
		if ( ap > 0 ) {
			if ( (_APPool + ap) > MAX_AP_POOL ) {
				// TODO if Actor is hasted somehow
				_APPool = MAX_AP_POOL;
			} else {
				// TODO if Actor is hasted somehow
				_APPool += ap;
			}
		} else { // Removing AP
			if ( (_APPool - ap) < MIN_AP_POOL ) {
				// TODO if Actor is slowed somehow
				_APPool = MIN_AP_POOL;
			} else {
				// TODO if Actor is slowed somehow
				_APPool -= ap;
			}
		}
	}
}

float Actor::getDistance(int cx, int cy) const {
	int dx=x-cx;
	int dy=y-cy;
	return sqrtf(dx*dx+dy*dy);
}
