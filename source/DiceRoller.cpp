#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include "Di

#define MIN_PARAM 2

typedef enum {
	OUTCOME_CRIT_FAILURE,
	OUTCOME_FAILURE,
	OUTCOME_SUCCESS,
	OUTCOME_CRIT_SUCCESS,
	OUTCOME_UNKOWN
} eOutcome;


int rollDice( unsigned int dType, unsigned int dNum, int dMod, int minRes);
eOutcome skillCheck( int diceRes, int skillValue );
eOutcome genericCheck( int diceRes, int checkValue, bool crit );

int
main( int argc, char *argv[] )
{
	int i = 0;
	unsigned int dType = 0;
	unsigned int dNum = 0;
	unsigned int dMod = 0;
	char sMod[10];
	int skill = 0;
	int dice = 0;

	if ( argc < MIN_PARAM )
	{
		printf("Usage: diceRoller <ndX> [mod]\n");
		printf("<ndX> : number and dice type.\n 2d4 = 2 4-sided dice. 1d100 = 1 100-sided dice.\n Common types: d4,d6,d8,d10,d12,d20,d30,d100... \n");
		printf("<n> : number of dice \n");
		printf("<mod> : modifier +1,-3 \n");
		exit( 1 );
	}

	for ( i = 1; i < argc; i++ )
	{
		if ( strstr(argv[i], "d") != NULL )
		{
			dNum = atoi(strtok(argv[i], "d"));
			dType = atoi(strtok(NULL, "d"));
		}
		else
		{
			memset(sMod, '\0', sizeof(sMod));
			dMod = atoi(argv[i]);
			strcpy( sMod, argv[i]);
		}
	}

	skill = rollDice( 100, 1, 0, 1);
	dice  = rollDice( dType, dNum, dMod, 1);
	printf("Skill %d, roll %d : outcome %d \n", skill, dice, skillCheck( dice, skill) );
	dice  = rollDice( 6, 4, dMod, 1);
	printf("genericCheck %d, roll %d : outcome %d \n", 15, dice, genericCheck( dice, skill, true) );

	exit( 0 );
}

int
rollDice( unsigned int dType, unsigned int dNum, int dMod, int minRes)
{
	int i;
	int diceRes = 0;
	struct timespec rTime;

	for ( i = 0; i < dNum; i++ )
	{
		//setting seed
		ock_gettime(CLOCK_MONOTONIC, &rTime);
		srand(rTime.tv_nsec);
		diceRes += ( rand() % dType ) + 1;
	}

	diceRes += dMod;

	// Dice che never result in less than minRes
	if (diceRes < minRes )
	{
		diceRes = minRes;
	}

	return(diceRes);

}

eOutcome
skillCheck( int diceRes, int skillValue )
{
	eOutcome outcome = OUTCOME_UNKOWN;

	if ( diceRes <= skillValue )
	{
		outcome = OUTCOME_SUCCESS;
		if ( ( diceRes % 5 ) == 0 )
		{
			outcome = OUTCOME_CRIT_SUCCESS;
		}
	}
	else if ( diceRes > skillValue )
	{
		outcome = OUTCOME_FAILURE;
		if ( ( diceRes % 5 ) == 0 )
		{
			outcome = OUTCOME_CRIT_FAILURE;
		}
	}

	return(outcome);
}


/**
 *	This function will only check success/failure
 *	and is checked against provided values.
 *
 *	If critical flag is true, it returns critical
 *	outcome if
 */
eOutcome
genericCheck( int diceRes, int checkValue, bool crit )
{
	eOutcome outcome = OUTCOME_UNKOWN;

	if ( diceRes <= checkValue )
	{
		outcome = OUTCOME_SUCCESS;
		if ( crit == true )
		{
			if ( diceRes <= round( checkValue * 0.1 ) )
			{
				outcome = OUTCOME_CRIT_SUCCESS;
			}
		}
	}
	else if ( diceRes > checkValue )
	{
		outcome = OUTCOME_FAILURE;
		if ( crit == true )
		{
			if ( diceRes >= round( checkValue * 0.9 ) )
			{
				outcome = OUTCOME_CRIT_FAILURE;
			}
		}
	}

	return(outcome);
}


