 #include "main.hpp"

// Humanoid Strike Location Table
tLocation HumanStrikeTable[] = 
{	//	Location 			High	Arms	Mid		Legs
	{	LOCATION_RAIDERLEGS,0,		0,		0,		0,		},
    {	LOCATION_HEAD,		16,		1,		2,		0,		},
    {	LOCATION_FACE,		27,		5,		5,		0,		},
    {	LOCATION_NECK,		43,		7,		8,		0,		},
    {	LOCATION_SHOULDER,	75,		21,		16,		0,		},
    {	LOCATION_UPPERARM,	79,		33,		24,		0,		},
    {	LOCATION_ELBOW,		81,		39,		28,		0,		},
    {	LOCATION_FOREARM,	85,		69,		32,		0,		},
    {	LOCATION_HAND,		89,		89,		34,		0,		},
    {	LOCATION_WING,		94,		95,		40,		0,		}, // Only if winged
    {	LOCATION_THORAX,	97,		97,		55,		0,		},
    {	LOCATION_ABDOMEN,	98,		98,		68,		0,		},
    {	LOCATION_HIP,		100,	100,	84,		0,		},
    {	LOCATION_GROIN,		0,		0,		85,		0,		},
    {	LOCATION_TAIL,		0,		0,		87,		0,		},
    {	LOCATION_THIGH,		0,		0,		95,		0,		},
    {	LOCATION_KNEE,		0,		0,		97,		0,		},
    {	LOCATION_CALF,		0,		0,		99,		0,		},
    {	LOCATION_FEET,		0,		0,		0,		0,		},
    {	LOCATION_STEED,		0,		0,		100,	0,		} // Special location for mounted characters
};

// Quadruped Strike Location Table
tLocation QuadrupedStrikeTable[] = 
{	//	Location 			High	Arms	Mid		Legs
	{	LOCATION_RAIDERLEGS,0,		0,		0,		0,		},
    {	LOCATION_HEAD,		0,		0,		0,		0,		},
    {	LOCATION_FACE,		0,		0,		0,		0,		},
    {	LOCATION_NECK,		0,		0,		0,		0,		},
    {	LOCATION_SHOULDER,	0,		0,		0,		0,		},
    {	LOCATION_UPPERARM,	0,		0,		0,		0,		},
    {	LOCATION_ELBOW,		0,		0,		0,		0,		},
    {	LOCATION_FOREARM,	0,		0,		0,		0,		},
    {	LOCATION_HAND,		0,		0,		0,		0,		},
    {	LOCATION_WING,		0,		0,		0,		0,		},
    {	LOCATION_THORAX,	0,		0,		0,		0,		},
    {	LOCATION_ABDOMEN,	0,		0,		0,		0,		},
    {	LOCATION_HIP,		0,		0,		0,		0,		},
    {	LOCATION_GROIN,		0,		0,		0,		0,		},
    {	LOCATION_TAIL,		0,		0,		0,		0,		},
    {	LOCATION_THIGH,		0,		0,		0,		0,		},
    {	LOCATION_KNEE,		0,		0,		0,		0,		},
    {	LOCATION_CALF,		0,		0,		0,		0,		},
    {	LOCATION_FEET,		0,		0,		0,		0,		},
    {	LOCATION_STEED,		0,		0,		0,		0,		} // Special location for mounted characters
};

// Avian Strike Location Table
tLocation AvianStrikeTable[] = 
{	//	Location 			High	Arms	Mid		Legs
	{	LOCATION_RAIDERLEGS,16,		01,		0,		0,		},
    {	LOCATION_HEAD,		0,		0,		0,		0,		},
    {	LOCATION_FACE,		0,		0,		0,		0,		},
    {	LOCATION_NECK,		0,		0,		0,		0,		},
    {	LOCATION_SHOULDER,	0,		0,		0,		0,		},
    {	LOCATION_UPPERARM,	0,		0,		0,		0,		},
    {	LOCATION_ELBOW,		0,		0,		0,		0,		},
    {	LOCATION_FOREARM,	0,		0,		0,		0,		},
    {	LOCATION_HAND,		0,		0,		0,		0,		},
    {	LOCATION_WING,		0,		0,		0,		0,		},
    {	LOCATION_THORAX,	0,		0,		0,		0,		},
    {	LOCATION_ABDOMEN,	0,		0,		0,		0,		},
    {	LOCATION_HIP,		0,		0,		0,		0,		},
    {	LOCATION_GROIN,		0,		0,		0,		0,		},
    {	LOCATION_TAIL,		0,		0,		0,		0,		},
    {	LOCATION_THIGH,		0,		0,		0,		0,		},
    {	LOCATION_KNEE,		0,		0,		0,		0,		},
    {	LOCATION_CALF,		0,		0,		0,		0,		},
    {	LOCATION_FEET,		0,		0,		0,		0,		},
    {	LOCATION_STEED,		0,		0,		0,		0,		} // Special location for mounted characters
};

// Serpentine Strike Location Table
tLocation SerpentineStrikeTable[] = 
{	//	Location 			High	Arms	Mid		Legs
	{	LOCATION_RAIDERLEGS,16,		01,		0,		0,		},
    {	LOCATION_HEAD,		0,		0,		0,		0,		},
    {	LOCATION_FACE,		0,		0,		0,		0,		},
    {	LOCATION_NECK,		0,		0,		0,		0,		},
    {	LOCATION_SHOULDER,	0,		0,		0,		0,		},
    {	LOCATION_UPPERARM,	0,		0,		0,		0,		},
    {	LOCATION_ELBOW,		0,		0,		0,		0,		},
    {	LOCATION_FOREARM,	0,		0,		0,		0,		},
    {	LOCATION_HAND,		0,		0,		0,		0,		},
    {	LOCATION_WING,		0,		0,		0,		0,		},
    {	LOCATION_THORAX,	0,		0,		0,		0,		},
    {	LOCATION_ABDOMEN,	0,		0,		0,		0,		},
    {	LOCATION_HIP,		0,		0,		0,		0,		},
    {	LOCATION_GROIN,		0,		0,		0,		0,		},
    {	LOCATION_TAIL,		0,		0,		0,		0,		},
    {	LOCATION_THIGH,		0,		0,		0,		0,		},
    {	LOCATION_KNEE,		0,		0,		0,		0,		},
    {	LOCATION_CALF,		0,		0,		0,		0,		},
    {	LOCATION_FEET,		0,		0,		0,		0,		},
    {	LOCATION_STEED,		0,		0,		0,		0,		} // Special location for mounted characters
};
