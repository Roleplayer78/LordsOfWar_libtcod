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
/**
 *  Humanoid location charts
 */
typedef enum {
    HUMANOID_HEAD               = 0x00000000,
    HUMANOID_FACE               = 0x00000001,
    HUMANOID_NECK               = 0x00000002,
    HUMANOID_SHOULDER_SX        = 0x00000003,
    HUMANOUD_SHOULDER_DX        = 0x00000004,
    HUMANOID_BREAST             = 0x00000010,
    HUMANOID_ARM_SX             = 0x00000020,
    HUMANOID_ARM_DX             = 0x00000030,
    HUMANOID_ELBOW_SX           = 0x00000040,
    HUMANOUD_ELBOW_DX           = 0x00000100,
    HUMANOID_FOREARM_SX         = 0x00000200,
    HUMANOID_FOREARM_DX         = 0x00000300,
    HUMANOID_HAND_SX            = 0x00000400,
    HUMANOID_HAND_DX            = 0x00001000,
    HUMANOID_ABDOMEN            = 0x00002000,
    HUMANOID_WAIST              = 0x00003000,
    HUMANOID_TIGHT_SX           = 0x00004000,
    HUMANOID_TIGHT_DX           = 0x00010000,
    HUMANOID_KNEE_SX            = 0x00020000,
    HUMANOID_KNEE_DX            = 0x00030000,
    HUMANOID_CALF_SX            = 0x00040000,
    HUMANOID_CALF_DX            = 0x00100000,
    HUMANOID_FEET_SX            = 0x00200000,
    HUMANOID_FEET_DX            = 0x00300000,
    HUMANOID_LOCATIONS          = 0xffffffff
} eHumanoidLocation;

typedef enum {
    CREATURE_SIZE_TINY,
    CREATURE_SIZE_SMALL,
    CREATURE_SIZE_NORMAL,
    CREATURE_SIZE_LARGE,
    CREATURE_SIZE_HUGE,
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

