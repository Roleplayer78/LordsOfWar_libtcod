#ifndef WOUNDS_HPP
#define WOUNDS_HPP

/******************************************************************************
 *  Wounds constants used to compute other values
 *
 *
 * ***************************************************************************/
const unsigned short WOUND_MOD_BASE = 5;        // Direct odifier to %
const unsigned short WOUND_REC_BASE_TIME = 8;   // Hours needed for reducing wound by -1
const unsigned bool  WOUND_ROUND_UP = true;     // If a wound of less than full WOUND_MOD_BASE affect non % values

// ---------------------------------------------------------------------------

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
    unsigned short  RecoveryTime; // Time for roll and try reduce penalty 1 point (in hours)
} tWoundDef;

extern tWoundDef WoundsTable[];

#endif // WOUNDS_HPP

