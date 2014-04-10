#ifndef ACTIONS_H
#define ACTIONS_H

// Engine maximum frame per second
#define LIMIT_FPS  5  // Frames-per-second - one second real time 


#define MAX_AP_POOL ( LIMIT_FPS * 1.1 ) // Max Action points
#define MIN_AP_POOL ( LIMIT_FPS * 0.0 ) // Min Action points

#define ADD 1
#define REMOVE 0
// Standard Action Point (AP) costs of actions
// NOTE: one Action Point equal one FPS mormally
// TODO put everything in a conf file

#define AP_COST_MOVE			( LIMIT_FPS * 3 )
#define AP_COST_MELEE_ATTACK		( LIMIT_FPS * 4 )
#define AP_COST_RANGE_ATTACK		( LIMIT_FPS * 4 )


// after 20 turns, the monster cannot smell the scent anymore
#define  SCENT_THRESHOLD                ( LIMIT_FPS * 15 )


// Slowed/Hasted AP modifiers

#endif //ACTIONS_H
