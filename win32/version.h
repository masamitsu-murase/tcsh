/*$Header$*/
#ifndef VERSION_H
#define VERSION_H

/* remember to change both instance of the version -amol */

#ifdef NTDBG
#define LOCALSTR ",nt-rev-7.04-debug"
#else
#define LOCALSTR ",nt-rev-7.04" //changed ordonly test in nt_open
								//patches
#endif NTDBG

#endif VERSION_H
