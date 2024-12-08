/***********************************************************************/
/***********************************************************************/
/********************  Author: Eman Assem      *************************/
/********************  SWC: TIMERS                *************************/
/********************  LAYER: MCAL             *************************/
/********************  VERSION: 1.0            *************************/
/********************         *************************/
/***********************************************************************/
/***********************************************************************/



#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_

// PRESCALER OF TIMER 0
#define TIMER0_PRESCALER_NoClockSRC   0
#define TIMER0_PRESCALER_1            1
#define TIMER0_PRESCALER_8            2
#define TIMER0_PRESCALER_64           3
#define TIMER0_PRESCALER_256          4
#define TIMER0_PRESCALER_1024         5


// PRESCALER OF TIMER 1 
#define TIMER1_PRESCALER_NoClockSRC   0
#define TIMER1_PRESCALER_1            1
#define TIMER1_PRESCALER_8            2
#define TIMER1_PRESCALER_64           3
#define TIMER1_PRESCALER_256          4
#define TIMER1_PRESCALER_1024         5



/*WaveGeneration mode Timer0*/
#define TIMER0_WGM_FAST_PWM    0
#define TIMER0_WGM_PHASE_CORRECT_PWM  1
#define TIMER0_WGM_NORMAL       2
#define TIMER0_WGM_CTC          3

#endif