#include "Materials.hpp"


sMaterialsType MaterialsTable [] = {
    // Mat. id              //Name          //Armor //Max Int.  //Scale
    {MATERIAL_VOID,         "Nothing",      0,      0,          SCALE_LOCAL|SCALE_REGION|SCALE_WORLD},
    {MATERIAL_HARD_STONE,      "Granite",      40,     1000,       SCALE_LOCAL},
    {MATERIAL_SOFT_WOOD,         "Wood",         5,      100,        SCALE_LOCAL}

};

