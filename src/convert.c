#include "convert.h"

/** Double Fixed Point Type Conversions **/

/* Converting to Double Fixed Point */
struct dfp_t int2dfp( int i ){
	struct dfp_t dfp;
	dfp.integer = i;
	dfp.decimal = 0;
	return dfp;
}

struct dfp_t float2dfp( float f ){
	struct dfp_t dfp;
	dfp.decimal = modff( f, &(return_dfp.integer) );
	return dfp;
}

struct dfp_t double2dfp( double d ){
	struct dfp_t dfp;
	dfp.decimal = modf( d, &(return_dfp.integer) );
	return dfp;
}

struct dfp_t uint2dfp( unsigned int u ){
	struct dfp_t dfp;
	dfp.integer = i;
	dfp.decimal = 0;
	return dfp;
}


struct scidfp_t int2sci( int i ){

}

struct scidfp_t float2sci( float f ){

}

struct scidfp_t double2sci( double d ){

}

struct scidfp_t uint2sci( unsigned int u ){

}


struct polardfp_t int2polar( int i ){

}

struct polardfp_t float2polar( float f ){

}

struct polardfp_t double2polar( double d ){

}

struct polardfp_t uint2dfp( unsigned int u ){

}


struct cdfp_t int2complex( int i ){

}

struct cdfp_t float2complex( float f ){

}

struct cdfp_t double2complex( double d ){

}

struct cdfp_t uint2comlex( unsigned int u ){

}


/* Converting from Double Fixed Point */
int	dfp2int( struct dfp_t dfp ){

}

float dfp2float( struct dfp_t dfp ){
}

double dfp2double( struct dfp_t dfp ){

}

unsigned int dfp2uint( struct dfp_t dfp ){

}


int	sci2int( struct scidfp_t sci ){

}

float sci2float( struct scidfp_t sci ){

}

double sci2double( struct scidfp_t sci ){

}

unsigned int sci2uint( struct scidfp_t sci ){

}


int polar2int( struct polardfp_t polar ){
}

float polar2float( struct polardfp_t polar ){

}

double polar2double( struct polardfp_t polar ){

}

unsigned int polar2uint( struct polardfp_t polar ){

}


int complex2int( struct cdfp_t cdfp ){

}

float complex2float( struct cdfp_t cdfp ){

}

double complex2double( struct cdfp_t cdfp ){

}

unsigned int complex2uint( struct cdfp_t cdfp ){

}


/* Converting Double Fixed Point to Double Fixed Point */
struct dfp_t sci2dfp( struct scidfp_t sci ){

}

struct dfp_t polar2dfp( struct polardfp_t polar ){

}

struct dfp_t complex2dfp( struct cdfp_t cdfp ){

}


struct scidfp_t dfp2sci( struct dfp_t dfp ){
}

struct scidfp_t polar2sci( struct polardfp_t polar){

}

struct scidfp_t complex2sci( struct cdfp_t cdfp ){

}


struct polardfp_t dfp2polar( struct dfp_t dfp ){

}

struct polardfp_t sci2polar( struct scidfp_t sci ){

}

struct polardfp_t complex2polar( struct cdfp_t cdfp ){

}


struct cdfp_t dfp2complex( struct dfp_t dfp ){

}

struct cdfp_t sci2complex( struct scidfp_t sci ){

}

struct cdfp_t polar2complex( struct polardfp_t polar ){

}


/** Symbolic Type Conversions **/

/* Converting to Symbolic */
int int2sym( struct sym_t *sym, int i ){

}

int float2sym( struct sym_t *sym, float f ){

}

int double2sym( struct sym_t *sym, double d ){

}

int uint2sym( struct sym_t *sym, unsigned int u ){

}


int int2psym( struct psym_t *psym, int i ){

}

int float2psym( struct psym_t *psym, float f ){

}

int double2psym( struct psym_t *psym, double d ){

}

int uint2psym( struct psym_t *psym, unsigned int u ){

}


int int2csym( struct csym_t *csym, int i ){

}

int float2csym( struct csym_t *csym, float f ){

}

int double2csym( struct csym_t *csym, double d ){

}

int uint2csym( struct csym_t *csym, unsigned int u ){

}


/* Converting from Symbolic */
int sym2int( struct sym_t sym ){

}

float sym2float( struct sym_t sym ){

}

double sym2double( struct sym_t sym ){

}

unsigned int sym2uint( struct sym_t sym ){

}


int psym2int( struct psym_t psym ){

}

float psym2float( struct psym_t psym ){

}

double psym2double( struct psym_t psym ){

}

unsigned int psym2uint( struct psym_t psym ){

}


int csym2int( struct csym_t csym ){

}

float csym2float( struct csym_t csym ){

}

double csym2double( struct csym_t csym ){

}

unsigned int csym2uint( struct csym_t csym ){

}

/* Converting Symbolic to symbolic */
int psym2sym( struct sym_t *sym, struct psym_t psym ){

}

int csym2sym( struct sym_t *sym, struct csym_t csym ){

}


int sym2psym( struct psym_t *psym, struct sym_t sym ){

}

int csym2psym( struct psym_t *psym, struct csym_t csym ){

}


int psym2csym( struct csym_t *csym, struct sym_t sym ){

}

int psym2csym( struct csym_t *csym, struct polardfp_t polar ){

}

/** Conversions betwee Symbolic and Double Fixed Point **/

/* Double Fixed Point to Symbolic */
int dfp2sym( struct sym_t *sym, struct dfp_t dfp ){

}

int sci2sym( struct sym_t *sym, struct scidfp_t sci ){

}

int polar2sym( struct sym_t *sym, struct polardfp_t polar ){

}

int complex2sym( struct sym_t *sym, struct cdfp_t cdfp ){

}


int dfp2psym( struct psym_t *psym, struct dfp_t dfp ){

}

int sci2psym( struct psym_t *psym, struct scidfp_t sci ){

}

int polar2psym( struct psym_t *psym, struct polardfp_t polar ){

}

int complex2psym( struct psym_t *psym, struct cdfp_t cdfp ){

}


int dfp2csym( struct csym_t *csym, struct dfp_t dfp ){

}

int sci2csym( struct csym_t *csym, struct scidfp_t sci ){

}

int polar2csym( struct csym_t *csym, struct polardfp_t polar ){

}

int complex2csym( struct csym_t *csym, struct cdfp_t cdfp ){

}


/* Symbolic to Double Fixed Point */
struct dfp_t sym2dfp( struct sym_t sym ){

}

struct dfp_t psym2dfp( struct psym_t psym ){

}

struct dfp_t csym2dfp( struct csym_t csym ){

}


struct scidfp_t sym2sci( struct sym_t sym ){

}

struct scidfp_t psym2sci( struct psym_t psym ){

}

struct scidfp_t csym2sci( struct csym_t csym ){

}


struct polardfp_t sym2polar( struct sym_t sym ){

}

struct polardfp_t psym2polar( struct psym_t psym ){

}

struct polardfp_t csym2polar( struct csym_t csym ){

}


struct cdfp_t sym2complex( struct sym_t sym ){

}

struct cdfp_t psym2complex( struct psym_t psym ){

}

struct cdfp_t csym2complex( struct csym_t csym ){

}

