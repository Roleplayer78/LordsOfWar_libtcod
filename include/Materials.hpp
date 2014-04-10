/* 
 * File:   Meterials.hpp
 * Author: user
 *
 * Created on 10 April 2014, 08:00
 */

#ifndef METERIALS_HPP
#define	METERIALS_HPP

typedef enum {
    SCALE_LOCAL     = 0x0004,
    SCALE_REGION    = 0x0040,
    SCALE_WORLD     = 0x0400,

    SCALE_MAX       = 0xffff    // Nothing can be this scale
} eScale;


typedef struct {
    unsigned int x;
    unsigned int y;
} tTileCoord;


/********************************************************************
 * These are tiles materials.
 * They are not intended to be used to produce objects, armour, etc.
 * They are used to populate maps and say how/if they can be damaged
 * somehow.
 ********************************************************************/
typedef enum {
    MATERIAL_VOID = 0,
    // Grounds and pavements
    MATERIAL_GRASS_GROUND,
    MATERIAL_STONE_GROUND,
    MATERIAL_SAND_GROUND,
    MATERIAL_WOOD_GROUND,
    // Walls and blocakge
    MATERIAL_SOFT_STONE,
    MATERIAL_FIRM_STONE,
    MATERIAL_HARD_STONE,
    MATERIAL_SOFT_WOOD,
    MATERIAL_FIRM_WOOD,
    MATERIAL_HARD_WOOD,
    MATERIAL_REIN_WOOD,
    // Standing objects
    MATERIAL_SMALL_TREE,
    MATERIAL_MEDIUM_TREE,
    MATERIAL_LARGE_TREE,
    METERIAL_HUGE_TREE,
    // World/Regional map
    MATERIAL_SMALL_HILL,
    MATERIAL_LARGE_HILL,
    MATERIAL_SMALL_MOUNTAIN,
    MATERIAL_MEDIUM_MOUNTAIN,
    MATERIAL_LARGE_MOUNTAIN,
    MATERIAL_SPARSE_FOREST,
    MATERIAL_DENSE_FOREST,
    MATERIAL_THICK_FOREST,



    MATERIAL_UNDEFINED
} eMaterials;

typedef struct {
    eMaterials          id;
    char                name[20]; //Name of the material
    unsigned short      resistance; // Resistance to damage (global)
    unsigned short      maxIntegrity; // How much integrity has a new tile. If 0, can't be damaged.
    unsigned short      scale; // Scale level of the tile: World/Region/Personal
} sMaterialsType;


// Allocating structure 
extern sMaterialsType MaterialsTable [];

#endif	/* METERIALS_HPP */

