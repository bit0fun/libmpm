/*
 * ISC License
 * 
 * Copyright (c) 2019, Dylan Wadler
 * 
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 */

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
