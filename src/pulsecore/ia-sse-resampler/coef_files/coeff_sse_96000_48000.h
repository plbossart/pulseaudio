/*
    This file is provided under a dual LGPL/BSD license.  When using
    or redistributing this file, you may do so under either license.

    LGPL LICENSE SUMMARY

    Copyright(c) 2011. Intel Corporation. All rights reserved.

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation; either version 2.1 of the
    License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
    USA.

    BSD LICENSE

    Copyright (c) 2011. Intel Corporation. All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:

      - Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.
      - Redistributions in binary form must reproduce the above copyright
        notice, this list of conditions and the following disclaimer in
        the documentation and/or other materials provided with the
        distribution.
      - Neither the name of Intel Corporation nor the names of its
        contributors may be used to endorse or promote products derived
        from this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
    A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
    OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
    SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
    LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
    DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
    THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
    OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

    Contact Information for Intel:
        Intel Corporation
        2200 Mission College Blvd.
        Santa Clara, CA  97052
*/
/*
* Filter for conversion from 96000Hz to 48000Hz
* Coefficients per phase   = 60
* Upsample rate            = 1
* Downsample rate          = 2
* Pass band frequency      = 2.157250e+004
* Stop band frequency      = 25995
* Pass band ripple         = 0.10
* Stop band attenuation    = 90.00
* Generalized equiripple method
* Linear phase
*/
float const coeff_96000_48000_float_sse[60] __attribute__ ((aligned(16))) = {

/** Phase 0 **/
0.000287239915422F, 0.001174075106221F, 0.001827103616246F, 0.000746422097722F, -0.001494784779442F, -0.001547828227249F,
0.001522944567340F, 0.002838653464199F, -0.001161729473806F, -0.004517315725338F, 0.000091841168695F, 0.006417480130844F,
0.001953489082225F, -0.008280084801026F, -0.005228557427339F, 0.009741599985649F, 0.009969167353670F, -0.010317233163690F,
-0.016429036321341F, 0.009353879869665F, 0.024972138880422F, -0.005893713778526F, -0.036365908210893F, -0.001788346414272F,
0.052711280197566F, 0.017977923429873F, -0.081530831205307F, -0.060092596003326F, 0.172337686772685F, 0.423537017545248F,
0.423537017545248F, 0.172337686772685F, -0.060092596003326F, -0.081530831205307F, 0.017977923429873F, 0.052711280197566F,
-0.001788346414272F, -0.036365908210893F, -0.005893713778526F, 0.024972138880422F, 0.009353879869665F, -0.016429036321341F,
-0.010317233163690F, 0.009969167353670F, 0.009741599985649F, -0.005228557427339F, -0.008280084801026F, 0.001953489082225F,
0.006417480130844F, 0.000091841168695F, -0.004517315725338F, -0.001161729473806F, 0.002838653464199F, 0.001522944567340F,
-0.001547828227249F, -0.001494784779442F, 0.000746422097722F, 0.001827103616246F, 0.001174075106221F, 0.000287239915422F,
};
