#ifndef CREATURE_H
#define CREATURE_H

typedef struct {
    eBodyType			Body;
    eCreatureSize		Size;
    tWound 				*Wounds;
    tCharatteristics	Char;
    tSkills				Skills;
} tCreature;

extern tCreature	Orc;
extern tCreature	Troll;


#endif //CREATURE_H


