
class Actor : public Persistent {
public :
	int x,y;					// position on map
	int ch; 					// ascii code
	TCODColor col; 				// color
	const char *name; 			// the actor's name
	bool blocks; 				// can we walk on this actor?
	bool fovOnly; 				// only display when in fov

	cDiceRoller	Dice;			// Rolling dice :-)

	// For non-creatures
	Destructible *destructible; // something that can be damaged but is not a creature
	Pickable *pickable; 		// something that can be picked and used
	Container *container; 		// something that can contain actors

	// Applicable to creatures
	Attacker *attacker;			// something that deals damages
	Ai *ai; 					// something self-updating
	tCreature *Stats; 			// If it's a creature then should have this block, NULL if not
	
	float _APPool; 				// Action pool for every action, only if actor has an Ai associated (can act)
	 
	Actor(int x, int y, int ch, const char *name, const TCODColor &col);
	~Actor();
	void update();
	void updateAP(float ap, bool add);
	void render() const;
	float getDistance(int cx, int cy) const;
	void load(TCODZip &zip);
	void save(TCODZip &zip);    
};
