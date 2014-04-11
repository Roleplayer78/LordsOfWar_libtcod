#include <math.h>
#include <stdio.h>
#include "main.hpp"


Actor::Actor(int x, int y, int ch, const char *name,
        const TCODColor &col) :
x(x), y(y), ch(ch), col(col), name(name),
blocks(true), fovOnly(true), attacker(NULL), destructible(NULL), ai(NULL),
pickable(NULL), container(NULL), _APPool(0) {
}

Actor::~Actor() {
    if (attacker) delete attacker;
    if (destructible) delete destructible;
    if (ai) delete ai;
    if (pickable) delete pickable;
    if (container) delete container;
}

void Actor::render() const {
    TCODConsole::root->setChar(x, y, ch);
    TCODConsole::root->setCharForeground(x, y, col);
}

void Actor::update() {
    if (ai) ai->update(this);
}

/**
 *	We use float since if Actor is slowed/hasted
 *	it's possible to add fraction of AP
 */
void Actor::updateAP(float ap, bool add) {
    if (ai) {
        // Adding AP
        if (add) {
            // TODO if hasted/slowed we need to apply a multiplier
            // to the AP gained
            _APPool += ap;
        } else { // Removing AP
            _APPool = 0;
        }

        fprintf(stderr, "Pool %f Variation %f\n", _APPool, ap);
    }
}

float Actor::getDistance(int cx, int cy) const {
    int dx = x - cx;
    int dy = y - cy;
    return sqrtf(dx * dx + dy * dy);
}
