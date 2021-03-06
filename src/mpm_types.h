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

#ifndef MP_TYPE_H
#define MP_TYPE_H

/*** Type Definitions ***/


/** Double Fixed Point Types **/

/* Normal Double Fixed Point */
struct dfp_t {
	intmax_t integer;			/* Integer part of number */
	uintmax_t decimal;			/* Decimal part of number */
};

/* Scientific Notation Double Fixed Point */

struct scidfp_t {
	uint8_t num;				/* Integer part of number */
	intmax_t exp;				/* Exponent of number */
	uintmax_t decimal;			/* Decimal part of number */
};

/* Polar Double Fixed Point */
struct polardfp_t {
	struct dfp_t radius;		/* Radius component */
	struct dfp_t angle;			/* Angle component */
};

/* Complex Double Fixed Point */
struct cdfp_t{
	struct dfp_t real;			/* Real component */
	struct dfp_t imag;			/* Imaginary component */
};

/** Multiprecision/Symbolic Type definitions **/

/* Normal Symbolic */
struct sym_t {
	uint8_t sign;				/* Binary value of sign. 0, positive. 1 negative */
	uint8_t *num;				/* Pointer to array of BCD digits for number */
	uintmax_t num_len;			/* Length of array for 'num' */
	uint8_t exp_sign;			/* Binary value of sign for exponent */
	uint8_t *exp;				/* Pointer to array of BCD digits for exponent */
	uintmax_t exp_len;			/* Length of array for 'exp' */
};

/* Polar Symbolic*/
struct psym_t {
	struct sym_t radius;		/* Radius component */
	struct sym_t angle;			/* Angle component */
};

/* Complex Symbolic */
struct csym_t {
	struct sym_t real;			/* Real component */
	struct sym_t imag;			/* Imaginary component */
};

#endif /* MP_TYPE_H */
