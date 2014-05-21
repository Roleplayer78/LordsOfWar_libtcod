#ifndef STATS_H
#define STATS_H


/***
 * Basic physical/mental stats
 *
 * Every creature will have some these.
 * A value of 0 means that for that creature that stats isn't
 * applicable (i.e. a blind creature will have Eyesight 0 )
 *
 * Ranges : 1  - 18 normal humans
 *          19 - 25 very special humans
 *          0  - xx for creatures 
 */
typedef struct {
    unsigned short Strength;
    unsigned short Dexterity;
    unsigned short Agility;
    unsigned short Stamina;
    unsigned short Constitution;
    unsigned short Memory;
    unsigned short Willpower;
    unsigned short Smell;
    unsigned short Hearing;
    unsigned short Eyesight;
    unsigned short Intelligence;
    unsigned short Voice;
    unsigned short Appearance;
    unsigned short Morality;
    unsigned short Religion;
    unsigned short Aura;
} tCharatteristics;


typedef struct {
    // Combat skills
    unsigned short Initiative; // TODO to check with realtime system how works
    unsigned short Unarmed;
    unsigned short Dagger; // All small blades up to and exluding short swords
    unsigned short Sword; // All swords up to bastard swords
    unsigned short Mace; // Axes and maces, excluding two handed
    unsigned short Bow; // All bow, including composite but excluding long
    unsigned short LongBow;
    unsigned short Spear; // All spears and pikes
    unsigned short PikeAxe; // All pikeaxes and halbeards
    unsigned short TwoHanded; // All two handed swords, axes, maces
    unsigned short Flail; // Flails, small and big
    unsigned short Crossbow; // Crossbows, light, heavy, whatever
    unsigned short Riding; // Riding horses, mules, ecc.
    unsigned short Dodge; // Dodging armed and unarmed attacks
    unsigned short Shield; // Using a shield proficently

    // Social skills



    // Academic skills
    unsigned short Physician;
    


    // 

} tSkills;

/**
 *  Body types
 */

typedef enum {
    BODY_HUMANOID,
    BODY_QUADRUPED,
    BODY_SERPENTINE,
    BODY_FISH,
    BODY_VOLATILE,
    BODY_UNKNOWN
} eBodyType;

typedef enum {
    LOCATION_SIDE_DX,   // Front
    LOCATION_SIDE_SX,   // Back
    LOCATION_SIDE_UNKNOWN,
} eLocationSide;
/**
 *  Generic location charts.
 *  They could be mixed to create
 *  different creature body mapping
 */
typedef enum {
    HUMANOID_LOCATION_HEAD,
    HUMANOID_LOCATION_FACE,
    HUMANOID_LOCATION_NECK,
    HUMANOID_LOCATION_SHOULDER,
    HUMANOID_LOCATION_BREAST,
    HUMANOID_LOCATION_ARM,
    HUMANOID_LOCATION_ELBOW,
    HUMANOID_LOCATION_FOREARM,
    HUMANOID_LOCATION_HAND,
    HUMANOID_LOCATION_ABDOMEN,
    HUMANOID_LOCATION_WAIST,
    HUMANOID_LOCATION_TIGHT,
    HUMANOID_LOCATION_KNEE,
    HUMANOID_LOCATION_CALF,
    HUMANOID_LOCATION_FEET,
    HUMANOID_LOCATION_UNKNOWN
} eHumanoidLocation;

typedef enum {
    CREATURE_SIZE_TINY,
    CREATURE_SIZE_SMALL,
    CREATURE_SIZE_NORMAL,
    CREATURE_SIZE_LARGE,
    CREATURE_SIZE_HUGE,
    CREATURE_SIZE_UNKNOWN,
} eCreatureSize;

// typedef enum {
//     WOUND_CUT_MINOR,
//     WOUND_CUT_SERIOUS,
//     WOUND_CUT_GRIEVUS,
//     WOUND_CUT_KILLING,
//     WOUND_BLUNT_MINOR,
//     WOUND_BLUNT_SERIOUS,
//     WOUND_BLUNT_GRIEVOUS,
//     WOUND_BLUNT_KILLING,
//     WOUND_POINT_MINOR,
//     WOUND_POINT_SERIOUS,
//     WOUND_POINT_GRIEVOUS,
//     WOUND_POINT_KILLING,
//     // Fire, cold, acid, ligthing, God fury, whatever
//     WOUND_ENERGY_MINOR,
//     WOUND_ENERGY_SERIOUS,
//     WOUND_ENERGY_GRIEVOUS,
//     WOUND_ENERGY_KILLING
// } eWoundsType;

typedef enum {
    WOUND_LEVEL_NONE,
    WOUND_LEVEL_GRAZE,
    WOUND_LEVEL_SEVERE,
    WOUND_LEVEL_GRIEVOUS,
    WOUND_LEVEL_KILLING
} eWoundLevel;

typedef enum {
    WOUND_TYPE_CUT,
    WOUND_TYPE_PIERCE,
    WOUND_TYPE_BLUNT,
    WOUND_TYPE_ENERGY
} eWoundType;

typedef struct {
    eWoundLevel         Level;
    eHumanoidLocation   Location;
    eWoundType          Type;
} tWound;



#endif // STATS_H

