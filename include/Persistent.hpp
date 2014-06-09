#ifndef PERSISTENT_HPP
#define PERSISTENT_HPP

class Persistent {
public :
	virtual void load(TCODZip &zip) = 0;
	virtual void save(TCODZip &zip) = 0;
};

#endif // PERSISTENT_HPP
