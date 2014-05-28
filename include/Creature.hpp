#ifndef CREATURE_H
#define CREATURE_H

//Creature definition
typedef struct {
    eBodyType			Body;
    eCreatureSize		Size;
    tWound 				*Wounds;
    eHandedness			Handedness;
    unsigned short		NumOfArms;
    tCharatteristics	Char;
    tSkills				Skills;
} tCreature;

extern tCreature	Orc;
extern tCreature	Troll;


#endif // CREATURE_H


