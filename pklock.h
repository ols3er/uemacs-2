/* pklock.h -- */

#ifndef _PKLOCK_H_
#define _PKLOCK_H_

#include "estruct.h"

#if (FILOCK && BSD) || SVR4

char *dolock( const char *fname) ;
char *undolock( const char *fname) ;

#endif

#endif

/* end of pklock.h */
