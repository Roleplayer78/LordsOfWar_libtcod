#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <math.h>
/**
 *	The equipment system is mainly weight based. The more weight is carried the
 *  more skills are penalized, without a hard limit imposed: the player will
 *  choose when the weight carried is tooo much penalizing.
 *
 *  In addition to this every item will have a size: from tiny to huge.
 *  The base idea is to allow a creature to carry two item of the same
 *  size, 4 one size smaller and 8 two size smaller "bare handed":
 *  without any special equipment deisgned to carry more items 
 *  (backpack, scabbards, ecc)
 *  
 */

const int MAX_NAME_LENGTH			= 50;
const int MAX_DESCRIPTION_LENGTH	= 500;

typedef enum {
	ITEM_CAT_WEAPON,	// Object designed primarily for combat (shields also)
	ITEM_CAT_ARMOR,		// Apparel deisgned for pesonal protection
	ITEM_CAT_FOOD,		// Items that can be eaten, that can have various effects
	ITEM_CAT_DRESS,		// Items deisgned for fashion or utility (cald, hunting, ecc)
	ITEM_CAT_TOOL,		// Items deisgned for accomplish some task (can sport some combat stats)
	ITEM_CAT_MATERIAL,	// Raw materials
	ITEM_CAT_POTION,	// Potions, mixtures or whatever can have some special effect on a creature
	ITEM_CAT_UNKNOWN	// Well... unknwon
} eItemCategory;


/**
 *	Item size is relative and abstract and is comparable to
 *  creature sizes.
 *  A MEDIUM sized object will not be the size of a human, but
 *  will be quite bulki to bring around, while a human could easly
 *  carry a lot of tiny objects. 
 */
typedef enum {
	ITEM_SIZE_NONE,
	ITEM_SIZE_TINY,
	ITEM_SIZE_SMALL,
	ITEM_SIZE_MEDIUM,
	ITEM_SIZE_LARGE,
	ITEM_SIZE_HUGE,
	ITEM_SIZE_UNKNOWN
} eItemSize;

/**
 *	Every creature will have a base carrying capacity.
 *  Normal carrying capacity "bare handed" is two "same size" items
 */
 typedef enum {
 	BASE_CARRY_NONE = -2,
 	BASE_CARRY_REDUCED = -1,
 	BASE_CARRY_NORMAL = 0, 	// Standard human 
 	BASE_CARRY_ENHANCED = +1,
 	BASE_CARRY_SUPERIOR = +2,
 	BASE_CARRY_UNKNOWN		// Should not be used
 } eCarryMod;

#define BASE_CARRY 2	// Base carry of creature for items of same size
// x is the Creatyre Size, y is the 
#define ITEMS_SLOT(x, y)  pow ( ( BASE_CARRY + y ) , ( abs( x - ITEM_SIZE_TINY ) + 1 ) )

typedef struct {
	unsigned int 	Id;	//Unique Id of the item
	char 			Name[MAX_NAME_LENGTH];
	char 			Description[MAX_DESCRIPTION_LENGTH];
	eItemCategory	Category;
	unsigned int 	Weight;
	eItemSize		Size;
	unsigned int 	HandMode; // Penalty if used one handed, if 0 the item is intended one-handed
} tItem;


#endif // EQUIPMENT_H
