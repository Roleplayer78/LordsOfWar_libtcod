#ifndef DICEROLLER_H
#define DICEROLLER_H

typedef enum {
	OUTCOME_CRIT_FAILURE,
	OUTCOME_FAILURE,
	OUTCOME_SUCCESS,
	OUTCOME_CRIT_SUCCESS,
	OUTCOME_UNKOWN
} eOutcome;


class cDiceRoller {

    public:
        cDiceRoller  ( void ) {};
        ~cDiceRoller  ( void ) {};

        int rollDice( unsigned int dType, unsigned int dNum, int dMod, int minRes = +1, int baseValue = +1);
        eOutcome skillCheck( int diceRes, int skillValue );
        eOutcome genericCheck( int diceRes, int checkValue, bool crit );

    private:

};

#endif // DICEROLLER_H
