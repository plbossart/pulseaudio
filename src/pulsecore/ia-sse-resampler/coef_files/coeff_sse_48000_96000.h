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
* Filter for conversion from 48000Hz to 96000Hz
* Coefficients per phase   = 32
* Upsample rate            = 2
* Downsample rate          = 1
* Pass band frequency      = 2.163750e+004
* Stop band frequency      = 25975
* Pass band ripple         = 0.10
* Stop band attenuation    = 90.00
* Generalized equiripple method
* Linear phase
*/
float const coeff_48000_96000_float_sse[64] __attribute__ ((aligned (16)))= {
/** Phase 0 **/
-0.001695469139220F, -0.000616790157528F, 0.001783699590643F, -0.003742399291829F, 0.006456593118216F, -0.009774818481009F,
0.013380057041694F, -0.016786368806332F, 0.019296785748875F, -0.019990459715404F, 0.017619482323549F, -0.010329882687416F,
-0.005274732048836F, 0.037725463429155F, -0.121841642283746F, 0.848439701470910F, 0.343744746922529F, -0.162658642956225F,
0.105574904692235F, -0.073400816610516F, 0.051032066409902F, -0.034222228585052F, 0.021417058509235F, -0.011886622703013F,
0.005153152347517F, -0.000777627459355F, -0.001689607654412F, 0.002725396827196F, -0.002790355305784F, 0.002385538059126F,
-0.002415655291083F, -0.000450885342768F,
/** Phase 1 **/
-0.000450885342768F, -0.002415655291083F, 0.002385538059126F, -0.002790355305784F, 0.002725396827196F, -0.001689607654412F,
-0.000777627459355F, 0.005153152347517F, -0.011886622703013F, 0.021417058509235F, -0.034222228585052F, 0.051032066409902F,
-0.073400816610516F, 0.105574904692235F, -0.162658642956225F, 0.343744746922529F, 0.848439701470910F, -0.121841642283746F,
0.037725463429155F, -0.005274732048836F, -0.010329882687416F, 0.017619482323549F, -0.019990459715404F, 0.019296785748875F,
-0.016786368806332F, 0.013380057041694F, -0.009774818481009F, 0.006456593118216F, -0.003742399291829F, 0.001783699590643F,
-0.000616790157528F, -0.001695469139220F
};