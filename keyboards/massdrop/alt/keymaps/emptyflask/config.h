#pragma once

#define ONESHOT_TIMEOUT 3000

/*****************************
 * SLEEPMODE CONFIG
 *****************************/
#define SLEEPMODE_ENABLE

/* How long the backlight should stay on
   without any interaction before turning off. */
#define SLEEPMODE_TIMEOUT 10  // in minutes
/* Which mode we should enter after the timeout,
   RGB_MATRIX_NONE to turn off. */
#define SLEEPMODE_RGB_MODE RGB_MATRIX_NONE
/* The desired animation speed when in "sleep mode" */
#define SLEEPMODE_RGB_ANIMATION_SPEED 10
/* The desired brightness when in "sleep mode" */
#define SLEEPMODE_RGB_VAL 10