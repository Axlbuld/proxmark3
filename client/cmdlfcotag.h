//-----------------------------------------------------------------------------
// Authored by Iceman
//
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// Low frequency COTAG commands
//-----------------------------------------------------------------------------

#ifndef CMDLFCOTAG_H__
#define CMDLFCOTAG_H__

#include "proxmark3.h"// Definitions, USB controls, COTAG_BITS
#include "util.h"     // FALSE / TRUE
#include "cmddata.h"  // getSamples
#include "cmdparser.h"// CmdsParse, CmdsHelp
#include "cmdmain.h"
#include "ui.h"       // PrintAndLog
#include "cmdlf.h"    // Setconfig 
#include "lfdemod.h"  // manrawdecode, bytebits_tobyteLSBF

#ifndef COTAG_BITS
#define COTAG_BITS 264
#endif

int CmdLFCOTAG(const char *Cmd);
int CmdCOTAGRead(const char *Cmd);
int CmdCOTAGDemod(const char *Cmd);

int usage_lf_cotag_read(void);
#endif
