#ifndef CREATURE_H
#define CREATURE_H

/******************************************************************************
 ** Locations Tables
 ** Location for 4 different body types, with percentage to hit every single
 ** location.
 ** 
 ** Defined in HitTables.cpp
 *****************************************************************************/

typedef struct {
	eLocation		Location;
	unsigned short	HighHitChance;
	unsigned short	ArmHitChance;
	unsigned short	MidHitChance;
	unsigned short	LegsHitChange;
} tLocation;

/*****************************************************************************/

//Creature definition
typedef struct {
	typedef struct {
    	eBodyType			Body;
    	bool				Tailed;
    	bool				Winged;
    	eCreatureSize		Size;
	    eHandedness			Handedness;
    } tAnatomy;
    TCOD_list_t         Wounds;
    eHandedness			Handedness;
    unsigned short		NumOfArms;
    tCharatteristics	Char;
    tSkills				Skills;
} tCreature;

class cCreature {
    public:
        cCreature(){};
		TCOD_list_t *Creatures;

        ~cCreature(){};


    private:


};


// Creature definitions
// All creatures are part of this array, stored in a vector
extern tCreature	Creatures[];


#endif // CREATURE_H


