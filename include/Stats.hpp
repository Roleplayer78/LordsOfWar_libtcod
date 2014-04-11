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
    short Strength;
    short Dexterity;
    short Agility;
    short Stamina;
    short Constitution;
    short Memory;
    short Willpower;
    short Smell;
    short Hearing;
    short Eyesight;
    short Intelligence;
    short Voice;
    short Appearance;
    short Morality;
    short Religion;
    short Aura;
} tCharatteristics;


typedef struct {
    // Combat skills
    short Initiative; // TODO to check with realtime system how works
    short Unarmed;
    short Dagger; // All small blades up to and exluding short swords
    short Sword; // All swords up to bastard swords
    short Mace; // Axes and maces, excluding two handed
    short Bow; // All bow, including composite but excluding long
    short LongBow;
    short Spear; // All spears and pikes
    short PikeAxe; // All pikeaxes and halbeards
    short TwoHanded; // All two handed swords, axes, maces
    short Flail; // Flails, small and big
    short Crossbow; // Crossbows, light, heavy, whatever
    short Riding; // Riding horses, mules, ecc.
    short Dodge; // Dodging armed and unarmed attacks
    short Shield; // Using a shield proficently

    // Social skills



    // Academic skills
    short Physician;
    


    // 

} tSkills;


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
} eHumanoidLocations;


typedef enum {
    WOUND_CUT_MINOR,
    WOUND_CUT_SERIOUS,
    WOUND_CUT_GRIEVUS,
    WOUND_CUT_KILLING,
    WOUND_BLUNT_MINOR,
    WOUND_BLUNT_SERIOUS,
    WOUND_BLUNT_GRIEVOUS,
    WOUND_BLUNT_KILLING,
    WOUND_POINT_MINOR,
    WOUND_POINT_SERIOUS,
    WOUND_POINT_GRIEVOUS,
    WOUND_POINT_KILLING,
    // Fire, cold, acid, ligthing, God fury, whatever
    WOUND_ENERGY_MINOR,
    WOUND_ENERGY_SERIOUS,
    WOUND_ENERGY_GRIEVOUS,
    WOUND_ENERGY_KILLING
} eWoundsType;




#endif // STATS_H

