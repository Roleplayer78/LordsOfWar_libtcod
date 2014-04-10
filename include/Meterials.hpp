/* 
 * File:   Meterials.hpp
 * Author: user
 *
 * Created on 10 April 2014, 08:00
 */

#ifndef METERIALS_HPP
#define	METERIALS_HPP

typedef enum {
    MATERIAL_GRANITE = 1,
    MATERIAL_NORMAL_WOOD,
    
} eMaterials;

typedef struct {
    eMaterials          Id;
    char                name[20]; //Name of the material
    unsigned short      armour; // Resistance to damage (global)
    unsigned short      MaxIntegrity; // How much integrity has a new tile.
} stMaterialsType;


#endif	/* METERIALS_HPP */

