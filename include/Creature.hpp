#ifndef CREATURE_H
#define CREATURE_H

//Creature definition
typedef struct {
    eBodyType			Body;
    eCreatureSize		Size;
    TCOD_list_t         Wounds;
    eHandedness			Handedness;
    unsigned short		NumOfArms;
    tCharatteristics	Char;
    tSkills				Skills;
} tCreature;

class cCreature {
    public:
        cCreature(){};
//        std::vector<tCreature> Creatures( 100 );

        ~cCreature(){};


    private:


};


extern tCreature	Orc;
extern tCreature	Troll;


#endif // CREATURE_H


