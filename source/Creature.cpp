#include "main.hpp"

#define MAX_WOUNDS  50



// Orc
tCreature Orc = {
    // Body Type   //Body Size           //Wounds
    BODY_HUMANOID, CREATURE_SIZE_NORMAL, NULL, 
    //Stats
    {
    10, // Strength
    10, // Dexterity
    10, // Agility
    10, // Stamina
    10, // Constitution
    10, // Memory
    10, // Willpower
    10, // Smell
    10, // Hearing
    10, // Eyesight
    10, // Intelligence
    10, // Voice
    10, // Appearance
    10, // Morality
    10, // Religion
    10  // Aura
    },
    // Skills
    {
    35, // Initiative
    35, // Unarmed
    35, // Dagger
    35, // Sword
    35, // Mace
    35, // Bow
    35, // LongBow
    35, // Spear
    35, // PikeAxe
    35, // TwoHanded
    35, // Flail
    35, // Crossbow
    35, // Riding
    35, // Dodge
    35, // Shield
    35  // Physician
    }
};


// Troll
tCreature Troll = {
    // Body Type   //Body Size           //Wounds
    BODY_HUMANOID, CREATURE_SIZE_LARGE, NULL, 
    //Stats
    {
    10, // Strength
    10, // Dexterity
    10, // Agility
    10, // Stamina
    10, // Constitution
    10, // Memory
    10, // Willpower
    10, // Smell
    10, // Hearing
    10, // Eyesight
    10, // Intelligence
    10, // Voice
    10, // Appearance
    10, // Morality
    10, // Religion
    10  // Aura
    },
    // Skills
    {
    45, // Initiative
    45, // Unarmed
    45, // Dagger
    45, // Sword
    45, // Mace
    45, // Bow
    45, // LongBow
    45, // Spear
    45, // PikeAxe
    45, // TwoHanded
    45, // Flail
    45, // Crossbow
    45, // Riding
    45, // Dodge
    45, // Shield
    45  // Physician
    }
};