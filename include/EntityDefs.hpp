#ifndef DEFINITIONS_H
#define DEFINITIONS_H

///////////////////////////////////////////////////////////////////////////////
// definitions.h
// This files include all the base defines for beings.
// 
//
//
///////////////////////////////////////////////////////////////////////////////

typedef enum beingStatus {
    STATUS_NORMAL            = 0x00000001,      //The being isn't in any of the other states. Can be wounded or fatigued though
    STATUS_EXAUSTED          = 0x00000002,      //The being conscious but can't move, fight or defend. Can use personal objects
    STATUS_UNCONSCIOUS       = 0x00000003,      //The being is unconscious and can't do, see or ear nothing. Can't be AWAKENED
    STATUS_SLEEPING          = 0x00000004,      //The being can't do, see or ear nothing but can be AWAKENED
    STATUS_HOLD              = 0x00000010,      //The being is immobilized. Can only ear, see and talk.
    STATUS_DEAD              = 0x00000020,
    STATUS_BLEEDING          = 0x00000030,
    STATUS_DEAF              = 0x00000040,
    STATUS_BLIND             = 0x00000100,
    STATUS_MUTE              = 0x00000200,
    STATUS_AWAKENED          = 0x00000300,      //The being has just be awakened ad act with reduced stats for a period of time
    STATUS_WOUNDED           = 0x00000400,      //The being has one or more wounds. It's just a marker
    STATUS_FATIGUED          = 0x00001000       //The being has one or more fatigue levels. It's just a marker
};

typedef enum woundsLevel {
    WOUND_NONE               = 0,
    WOUND_LIGHT,
    WOUND_MEDIUM,
    WOUND_GRIEVOUS,
    WOUND_KILLING
};

typedef enum woundsType {
    WOUND_EDGE              = 0,    //Cutting wounds like knives, blades, saws, ecc.
    WOUND_BLUNT,                    //Falling, clubs, punches, rocks, ecc.
    WOUND_PIERCING,                 //Spears, arrows, swords thrusts, ecc-
    WOUND_FIRE,                     //Fire...
    WOUND_COLD,                     //Intense cold
    WOUND_CORROSIVE                 //Acid or else
};

typedef enum statsName {
    STAT_STRENGTH = 0,              //Your body strength
    STAT_AGILITY,                   //Your body agility and general prowess
    STAT_DEXTERITY,                 //You hand/eye coordination and hand quickness
    STAT_CONSTITUTION,              //Your physical build and resistance (disease, cold, privations)
    STAT_ENDURANCE,                 //How difficulty you tyre
    STAT_COMMELINESS,               //You physical aspect
    STAT_INTELLIGENCE,              //Your reasoning and understanding
    STAT_MEMORY,                    //How much can you retain infos
    STAT_WILLPOWER,                 //Mental endurance and perseverance
    STAT_EYESIGHT,                  //Your eyesight
    STAT_HEARING,                   //Your earing
    STAT_VOICE,                     //Your voice (quality and strength)
    STAT_PIETY                     //How religiuous you are
}

#endif //DEFINITIONS_H
