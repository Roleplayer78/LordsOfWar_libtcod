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
        void cDiceRoller  ( void );
        void ~cDiceRoller  ( void );

        int rollDice( unsigned int dType, unsigned int dNum, int dMod, int minRes);
        eOutcome skillCheck( int diceRes, int skillValue );
        eOutcome genericCheck( int diceRes, int checkValue, bool crit );

    private:

};

#endif // DICEROLLER_H
