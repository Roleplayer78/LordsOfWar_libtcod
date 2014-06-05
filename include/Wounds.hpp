#ifndef WOUNDS_HPP
#define WOUNDS_HPP


typedef enum {
    WOUND_LEVEL_NONE            = 0,
    WOUND_LEVEL_GRAZE,
    WOUND_LEVEL_SEVERE,
    WOUND_LEVEL_GRIEVOUS,
    WOUND_LEVEL_KILLING,
    WOUND_LEVEL_UNKNOWN
} eWoundLevel;

typedef enum {
    WOUND_TYPE_EDGE              = 0,    //Cutting wounds like knives, blades, saws, ecc.
    WOUND_TYPE_BLUNT,                    //Falling, clubs, punches, rocks, ecc.
    WOUND_TYPE_PIERCING,                 //Spears, arrows, swords thrusts, ecc-
    WOUND_TYPE_FIRE,                     //Fire...
    WOUND_TYPE_COLD,                     //Intense cold
    WOUND_TYPE_CORROSIVE,                //Acid or else
    WOUND_TYPE_UNKNOWN
} eWoundType;

typedef struct {
    eWoundType      WoundType;
    eWoundLevel     WoundLevel;
    short           WoundMod;     // Skill penalty associated with wound
    short           RecoveryTime; // Time for reducing penalty 1 point
} tWoundDef;


#endif // WOUNDS_HPP

