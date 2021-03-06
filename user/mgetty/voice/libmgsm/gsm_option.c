/*
 * Copyright 1992 by Jutta Degener and Carsten Bormann, Technische
 * Universitaet Berlin.  See the accompanying file "COPYRIGHT" for
 * details.  THERE IS ABSOLUTELY NO WARRANTY FOR THIS SOFTWARE.
 */

/* $Id: gsm_option.c,v 1.4 1998/09/09 21:06:48 gert Exp $ */

#include "private.h"

#include "gsm.h"
#include "proto.h"

int gsm_option P3((r, opt, val), gsm r, int opt, int * val)
{
     int  result = -1;

     switch (opt) {
     case GSM_OPT_LTP_CUT:
#ifdef    LTP_CUT
          result = r->ltp_cut;
          if (val) r->ltp_cut = *val;
#endif
          break;

     case GSM_OPT_VERBOSE:
#ifndef   NDEBUG
          result = r->verbose;
          if (val) r->verbose = *val;
#endif
          break;

     case GSM_OPT_FAST:

#if  defined(FAST) && defined(USE_FLOAT_MUL)
          result = r->fast;
          if (val) r->fast = !!*val;
#endif
          break;

     default:
          break;
     }
     return result;
}
