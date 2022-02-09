/* © 2017 Silicon Laboratories Inc.
 */

/*
 * Slightly unsual mock: It has no expectations or configurable responses.
 * It merely prints out the debug information from libs2.
 */
#include <stdarg.h>
#include <stdio.h>

/****************************************************************************/
/*                              INCLUDE FILES                               */
/****************************************************************************/

/****************************************************************************/
/*                      PRIVATE TYPES and DEFINITIONS                       */
/****************************************************************************/

/****************************************************************************/
/*                              EXPORTED DATA                               */
/****************************************************************************/

/****************************************************************************/
/*                              PRIVATE DATA                                */
/****************************************************************************/

/****************************************************************************/
/*                              PRIVATE FUNCTIONS                           */
/****************************************************************************/

/****************************************************************************/
/*                              EXPORTED FUNCTIONS                          */
/****************************************************************************/

void S2_dbg_printf(const char *format, ...)
{
    va_list argptr;

    va_start(argptr, format);
    vfprintf(stdout, format, argptr);
    va_end(argptr);

}