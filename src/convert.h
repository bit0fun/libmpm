#ifndef MPM_CONVERT_H
#define MPM_CONVERT_H

#include "mpm_types.h"

/** Double Fixed Point Type Conversions **/

/* Converting to Double Fixed Point */
struct dfp_t int2dfp( int i );
struct dfp_t float2dfp( float f );
struct dfp_t double2dfp( double d );
struct dfp_t uint2fp( unsigned int u );

/* Converting from Double Fixed Point */
int dfp2int( struct dfp_t dfp );
float dfp2float( struct dfp_t dfp );
double dfp2double( struct dfp_t dfp );
unsigned int dfp2uint( struct dfp_t dfp );

#endif /* MPM_CONVERT_H */
