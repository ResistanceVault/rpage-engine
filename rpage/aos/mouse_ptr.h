/*  Athanor 2, Original game by Eric "Atlantis" Safar, (C) Safargames 2019  
    Amiga version by Francois "Astrofra" Gutherz.
*/

#include <exec/types.h>
#include "rpage/utils.h"

#ifndef _POINTER_DATA_
#define _POINTER_DATA_

#define WAIT_POINTER_HEIGHT 22L
/* Legacy (== vintage) AmigaOS 1.3 cursor */
extern USHORT chip pointer_normal_data[36];

/* Wait cursor */
extern USHORT chip wait_pointer[(WAIT_POINTER_HEIGHT * 2) + 4];

/* Custom cursors */
extern vec2 mouse_cursors_hotspot[4];
extern UWORD chip mouse_cursors_img[4][36];

#endif