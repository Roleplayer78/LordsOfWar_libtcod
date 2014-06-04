#ifndef STATS_HPP
#define STATS_HPP


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
    LOCATION_RAIDERLEGS,
    LOCATION_HEAD,
    LOCATION_FACE,
    LOCATION_NECK,
    LOCATION_SHOULDER,
    LOCATION_UPPERARM,
    LOCATION_ELBOW,
    LOCATION_FOREARM,
    LOCATION_HAND,
    LOCATION_WING,
    LOCATION_THORAX,
    LOCATION_ABDOMEN,
    LOCATION_HIP,
    LOCATION_GROIN,
    LOCATION_TAIL,
    LOCATION_THIGH,
    LOCATION_KNEE,
    LOCATION_CALF,
    LOCATION_FEET,
    LOCATION_STEED, // Special location for mounted characters
    LOCATION_UNKNOWN
} eLocation;

typedef enum {
    CREATURE_SIZE_NONE = 0,
    CREATURE_SIZE_TINY,
    CREATURE_SIZE_SMALL,
    CREATURE_SIZE_AVERAGE,
    CREATURE_SIZE_LARGE,
    CREATURE_SIZE_HUGE,
    CREATURE_SIZE_UNKNOWN,
} eCreatureSize;

typedef enum {
    WOUND_LEVEL_NONE,
    WOUND_LEVEL_GRAZE,
    WOUND_LEVEL_SEVERE,
    WOUND_LEVEL_GRIEVOUS,
    WOUND_LEVEL_KILLING
} eWoundLevel;

typedef enum {
    HANDHANDNESS_RX,
    HANDHANDNESS_SX,
    HANDHANDNESS_BOTH,
    HANDHANDNESS_UNKNOWN
} eHandedness;

typedef enum {
    WOUND_TYPE_CUT,
    WOUND_TYPE_PIERCE,
    WOUND_TYPE_BLUNT,
    WOUND_TYPE_ENERGY // Fire, cold, acid, ligthing, God fury, whatever
} eWoundType;

typedef struct tsWound {
    eWoundLevel         Level;
    eLocation   Location;
    eWoundType          Type;
    char                HelingRate;
    tsWound             *NextWound;
} tWound;


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



#endif // STATS_HPP

