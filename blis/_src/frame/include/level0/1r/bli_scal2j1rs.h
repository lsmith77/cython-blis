/*

   BLIS
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2014, The University of Texas at Austin

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    - Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    - Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    - Neither the name of The University of Texas at Austin nor the names
      of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef BLIS_SCAL2J1RS_H
#define BLIS_SCAL2J1RS_H

// scal2j1rs

#define bli_cscal2j1rs( a, x, yr, yi ) \
{ \
	bli_cscal2jris( bli_creal(a), bli_cimag(a), bli_creal(x), bli_cimag(x), yr, yi ); \
}

#define bli_zscal2j1rs( a, x, yr, yi ) \
{ \
	bli_zscal2jris( bli_zreal(a), bli_zimag(a), bli_zreal(x), bli_zimag(x), yr, yi ); \
}

#define bli_scscal2j1rs( a, x, yr, yi ) \
{ \
	bli_scscal2jris( bli_sreal(a), bli_simag(a), bli_creal(x), bli_cimag(x), yr, yi ); \
}

#define bli_dzscal2j1rs( a, x, yr, yi ) \
{ \
	bli_dzscal2jris( bli_dreal(a), bli_dimag(a), bli_zreal(x), bli_zimag(x), yr, yi ); \
}

#endif
