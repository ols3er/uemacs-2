#ifndef _EVAL_H_
#define _EVAL_H_

/*	Macro argument token types					*/

#define	TKNUL	0		/* end-of-string                */
#define	TKARG	1		/* interactive argument         */
#define	TKBUF	2		/* buffer argument              */
#define	TKVAR	3		/* user variables               */
#define	TKENV	4		/* environment variables        */
#define	TKFUN	5		/* function....                 */
#define	TKDIR	6		/* directive                    */
#define	TKLBL	7		/* line label                   */
#define	TKLIT	8		/* numeric literal              */
#define	TKSTR	9		/* quoted string literal        */
#define	TKCMD	10		/* command name                 */

int gettyp( char *token) ;

void varinit( void) ;
char *gtfun( char *fname) ;
char *gtusr( char *vname) ;
char *gtenv( char *vname) ;
int setvar( int f, int n) ;
char *itoa( int i) ;
char *getval( char *token) ;
int stol( char *val) ;
char *mkupper( char *str) ;
char *mklower( char *str) ;
int abs( int x) ;
int ernd( void) ;
int sindex( char *source, char *pattern) ;
char *xlat( char *source, char *lookup, char *trans) ;

#endif
