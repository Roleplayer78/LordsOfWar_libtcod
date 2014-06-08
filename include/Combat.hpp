#ifndef COMBAT_HPP
#define COMBAT_HPP

/******************************************************************************
 *	Combat attacks and defense options
 *****************************************************************************/

 typedef enum {
 	ATTACK_MELEE,
 	ATTACK_DISARM,
 	ATTACK_PRESS,
 	ATTACK_GRAPPLE,
 	ATTACK_MISSILE,
 	ATTACK_UNKNOWN
 } eAttacks;

 typedef enum {
 	DEFENSE_BLOCK,
 	DEFENSE_PARRY,
 	DEFENSE_COUNTERSTRIKE,
 	DEFENSE_DODGE,
 	DEFENSE_GRAPPLE,
 	DEFENSE_DISARM,
 	DEFENSE_IGNORE,
 	DEFEMSE_COUNTERPRESS,
 	DEFENSE_UNKOWN
 } eDefenses;

/******************************************************************************
 *	Combat outcames : every bout will end with one of these results
 *
 *****************************************************************************/
 typedef enum
 {
 	// Melee hit
 	COMBAT_RES_A_0,		// Att. Base damage (no dice added)
 	COMBAT_RES_A_1,		// Att. Base damage +1d
 	COMBAT_RES_A_2,  	// Att. Base damage +2d
 	COMBAT_RES_A_3,		// Att. Base damage +3d
 	COMBAT_RES_A_4,		// Att. Base damage +4d
 	COMBAT_RES_A_5,		// Att. Base damage +5d
 	COMBAT_RES_D_0,		// Def. Base damage (no dice added)
 	COMBAT_RES_D_1,		// Def. Base damage +1d
 	COMBAT_RES_D_2,  	// Def. Base damage +2d
 	COMBAT_RES_D_3,		// Def. Base damage +3d
 	COMBAT_RES_D_4,		// Def. Base damage +4d
 	COMBAT_RES_D_5,		// Def. Base damage +5d
	COMBAT_RES_B_0,		// Both Base damage (no dice added)
 	COMBAT_RES_B_1,		// Both Base damage +1d
 	COMBAT_RES_B_2,  	// Both Base damage +2d
 	COMBAT_RES_B_3,		// Both Base damage +3d
 	COMBAT_RES_B_4,		// Both Base damage +4d
 	COMBAT_RES_B_5,		// Both Base damage +5d
 	// Fumble
 	COMBAT_RES_AF_3,	// Att. Fumble -- 3 Dice
 	COMBAT_RES_AF_4,	// Att. Fumble -- 4 Dice
 	COMBAT_RES_AF_5,  	// Att. Fumble -- 5 Dice
 	COMBAT_RES_AF_6,	// Att. Fumble -- 6 Dice
 	COMBAT_RES_DF_3,	// Def. Fumble -- 3 Dice
 	COMBAT_RES_DF_4,	// Def. Fumble -- 4 Dice
 	COMBAT_RES_DF_5,  	// Def. Fumble -- 5 Dice
 	COMBAT_RES_DF_6,	// Def. Fumble -- 6 Dice
	COMBAT_RES_BF_3,	// Both Fumble -- 3 Dice
 	COMBAT_RES_BF_4,	// Both Fumble -- 4 Dice
 	COMBAT_RES_BF_5,  	// Both Fumble -- 5 Dice
 	COMBAT_RES_BF_6,	// Both Fumble -- 6 Dice
 	// Stumble
 	COMBAT_RES_AS_3,	// Att. Stumble -- 3 Dice
 	COMBAT_RES_AS_4,	// Att. Stumble -- 4 Dice
 	COMBAT_RES_AS_5,  	// Att. Stumble -- 5 Dice
 	COMBAT_RES_AS_6,	// Att. Stumble -- 6 Dice
 	COMBAT_RES_DS_3,	// Def. Stumble -- 3 Dice
 	COMBAT_RES_DS_4,	// Def. Stumble -- 4 Dice
 	COMBAT_RES_DS_5,  	// Def. Stumble -- 5 Dice
 	COMBAT_RES_DS_6,	// Def. Stumble -- 6 Dice
	COMBAT_RES_BS_3,	// Both Stumble -- 3 Dice
 	COMBAT_RES_BS_4,	// Both Stumble -- 4 Dice
 	COMBAT_RES_BS_5,  	// Both Stumble -- 5 Dice
 	COMBAT_RES_BS_6,	// Both Stumble -- 6 Dice
 	// Block and Tactical advantages
 	COMNAT_RES_BLOCK,	// Attack blocked -- Check for damage
 	COMBAT_RES_DTA,		// Defender Tactical Advantage
 	COMBAT_RES_PARRY,	// Defender Parry - Check for damage -2
 	// Steed
 	COMBAT_RES_STEED_0,	// Ok, you hit the opponent steed .... :-(
	COMBAT_RES_STEED_1,	// Ok, you hit the opponent steed .... :-(
	COMBAT_RES_STEED_2,	// Ok, you hit the opponent steed .... :-(
	COMBAT_RES_STEED_3,	// Ok, you hit the opponent steed .... :-(
 	// Missiles
 	COMBAT_RES_M_0,		// Missile Base damage (no dice added)
 	COMBAT_RES_M_1,		// Missile Base damage +1d
 	COMBAT_RES_M_2,  	// Missile Base damage +2d
 	COMBAT_RES_M_3,		// Missile Base damage +3d
 	COMBAT_RES_M_4,		// Missile Base damage +4d
 	COMBAT_RES_M_5,		// Missile Base damage +5d
 	COMNAT_RES_MISS,	// Attack missed / no impact 
 	COMNAT_RES_WILD,	// Missile weapon check for damage or random hit
 	// Holdes
 	COMBAT_RES_AHD,		// Attacker gain an hold
 	COMBAT_RES_DHD,		// Defender gain an hold
 	COMBAT_RES_BHD,		// Both gain an hold of the other

 	COMBAT_RES_UNKNOWN	// Last value
 } eCombatResults;

/******************************************************************************
 ** Combat table definitions 
 ** These combat tables are checked against in combat
 ****************************************************************************/

// ****************************************************************************
//			MELEE ATTACK
// ****************************************************************************

// Defense -- Shield/2 Weapons Block
const eCombatResults MeleeDefShield[OUTCOME_UNKOWN][OUTCOME_UNKOWN] = {
	// CF		MF		MS 		CS -- Defender
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN},	// CF -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN}, // MF -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN}, 		// MS -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN} 		// CS -- Attacker
};

// Defense -- Weapon parry
const eCombatResults MeleeDefParry[OUTCOME_UNKOWN][OUTCOME_UNKOWN] = {
	// CF		MF		MS 		CS -- Defender
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN},	// CF -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN}, // MF -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN}, 		// MS -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN} 		// CS -- Attacker
};

// Defense -- Counterstrike
const eCombatResults MeleeDefCounterstrike[OUTCOME_UNKOWN][OUTCOME_UNKOWN] = {
	// CF		MF		MS 		CS -- Defender
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN},	// CF -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN}, // MF -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN}, 		// MS -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN} 		// CS -- Attacker
};

// Defense -- Dodge
const eCombatResults MeleeDefDodge[OUTCOME_UNKOWN][OUTCOME_UNKOWN] = {
	// CF		MF		MS 		CS -- Defender
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN},	// CF -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN}, // MF -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN}, 		// MS -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN} 		// CS -- Attacker
};

// Defense -- Grapple
const eCombatResults MeleeDefGrapple[OUTCOME_UNKOWN][OUTCOME_UNKOWN] = {
	// CF		MF		MS 		CS -- Defender
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN},	// CF -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN}, // MF -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN}, 		// MS -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN} 		// CS -- Attacker
};

// Defense -- Disarm
const eCombatResults MeleeDefDisarm[OUTCOME_UNKOWN][OUTCOME_UNKOWN] = {
	// CF		MF		MS 		CS -- Defender
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN},	// CF -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN}, // MF -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN}, 		// MS -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN} 		// CS -- Attacker
};

// Defense -- Ignore
const eCombatResults MeleeDefIgnore[OUTCOME_UNKOWN][OUTCOME_UNKOWN] = {
	// CF		MF		MS 		CS -- Defender
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN},	// CF -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN}, // MF -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN}, 		// MS -- Attacker
	{COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN, COMBAT_RES_UNKNOWN} 		// CS -- Attacker
};
// ****************************************************************************
//			DISARM ATTACK
// ****************************************************************************

// Defense -- Shield

// Defense -- Weapon parry

// Defense -- Counterstrike

// Defense -- Disarm

// Defense -- Ignore

// ****************************************************************************
//			PRESS ATTACK
// ****************************************************************************

// Defense -- Counterpress

// Defense -- Counterstrike

// Defense -- Dodge

// Defense -- Ignore

// ****************************************************************************
//			GRAPPLE ATTACK
// ****************************************************************************

// Defense -- Counterstrike

// Defense -- Dodge

// Defense -- Grapple

// Defense -- Ignore

// ****************************************************************************
//			MISSILE ATTACK
// ****************************************************************************

// Defense -- Block

// Defense -- Dodge

// Defense -- Ignore

// ****************************************************************************
//			JOUSTING
// ****************************************************************************


// ****************************************************************************
//			ENGAGE INITIATIVE
// ****************************************************************************

class cCombatEngine {
public:
	cCombatEngine();
	~cCombatEngine();

	void resolveCombat(eAttacks Att, eDefenses Def, tCreature Attacker, tCreature Defender);

private:

	void MeVsBlock(eAttacks Att, eDefenses Def, Actor * Attacker, Actor * Defender);
	void MeVsParry(eAttacks Att, eDefenses Def, Actor * Attacker, Actor * Defender);
	void MeVsCstrike(eAttacks Att, eDefenses Def, Actor * Attacker, Actor * Defender);
	void MeVsDodge(eAttacks Att, eDefenses Def, Actor * Attacker, Actor * Defender);
	void MeVsDisarm(eAttacks Att, eDefenses Def, Actor * Attacker, Actor * Defender);
	void MeVsIgnore(eAttacks Att, eDefenses Def, Actor * Attacker, Actor * Defender);


	void MiVsBlock(eAttacks Att, eDefenses Def, Actor * Attacker, Actor * Defender);

};


#endif // COMBAT_HPP
