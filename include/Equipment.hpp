#ifndef EQUIPMENT_H
#define EQUIPMENT_H

const int MAX_NAME_LENGTH			= 50;
const int MAX_DESCRIPTION_LENGTH	= 200;

typedef enum {
	ITEM_CAT_WEAPON,
	ITEM_CAT_ARMOR,
	ITEM_CAT_FOOD,
	ITEM_CAT_DRESS,
	ITEM_CAT_TOOL,
	ITEM_CAT_MATERIAL,
	ITEM_CAT_POTION,
	ITEM_CAT_UNKNOWN
} eItemCategory;


/**
 *	Item size is relative and abstract and is comparable to
 *  creature sizes.
 *  A MEDIUM sized object will not be the size of a human, but
 *  will be quite bulki to bring around, while a human could easly
 *  carry a lot of tiny objects. 
 */
typedef enum {
	ITEM_SIZE_TINY,
	ITEM_SIZE_SMALL,
	ITEM_SIZE_MEDIUM,
	ITEM_SIZE_LARGE,
	ITEM_SIZE_HUGE,
	ITEM_SIZE_UNKNOWN
} eItemSize;


typedef struct {
	unsigned int 	Id;	//Unique Id of the item
	char 			Name[MAX_NAME_LENGTH];
	char 			Description[MAX_DESCRIPTION_LENGTH];
	eItemCategory	Category;
	unsigned int 	Weight;
	eItemSize		Size;
} tItem;


#endif // EQUIPMENT_H
