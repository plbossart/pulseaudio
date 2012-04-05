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
* Filter for conversion from 22050Hz to 44100Hz
* Coefficients per phase   = 60
* Upsample rate            = 2
* Downsample rate          = 1
* Pass band frequency      = 1.000750e+004
* Stop band frequency      = 11020
* Pass band ripple         = 0.10
* Stop band attenuation    = 90.00
* Generalized equiripple filter, converted to min phase by cepstral windowing
* Minimum phase
*/
float const coeff_22050_44100_float_sse[120] __attribute__ ((aligned (16)))= {
/** Phase 0 **/
0.000000095772440F, -0.000005947701262F, -0.000003689838357F, 0.000022262352202F, -0.000057619252926F, 0.000111720169439F,
-0.000192985092594F, 0.000302212937508F, -0.000438958725181F, 0.000599698153155F, -0.000773805241455F, 0.000941657661362F,
-0.001074666136540F, 0.001137018514399F, -0.001081770623660F, 0.000855012138125F, -0.000397729289967F, -0.000345024142575F,
0.001420479398680F, -0.002853181662962F, 0.004634301475552F, -0.006699488888891F, 0.008910525592335F, -0.011020268304516F,
0.012637601040170F, -0.013169766636766F, 0.011763053701533F, -0.007293390744111F, -0.000824981752730F, 0.000151991796406F,
-0.009722146228460F, 0.017297173428043F, -0.025121260860620F, 0.032235361398414F, -0.037709440060037F, 0.040575013893263F,
-0.039914217921550F, 0.034971514960458F, -0.025284729308184F, 0.010824651784495F, 0.007871037752788F, -0.029585903672762F,
0.052331290001986F, -0.073312363700151F, 0.088986725709560F, -0.095263003285597F, 0.087881114445648F, -0.063131699386391F,
0.019014465604086F, 0.042952333622025F, -0.115040546803102F, 0.179707013489310F, -0.205700590615891F, 0.147191315038799F,
0.042365485513375F, -0.344302700264860F, 0.455573734315268F, 0.627628616092632F, 0.167047478700964F, 0.006572329069250F,

/** Phase 1 **/
-0.000001054858349F, 0.000039551911782F, -0.000046196028248F, 0.000071607230657F, -0.000100812338878F, 0.000132946912633F,
-0.000158210931823F, 0.000170821434601F, -0.000157779728024F, 0.000102902589634F, 0.000010462322412F, -0.000199308535101F,
0.000480188597763F, -0.000866426587025F, 0.001360429289593F, -0.001952846586088F, 0.002616073987629F, -0.003301738188134F,
0.003931907319337F, -0.004399799107611F, 0.004564449792608F, -0.004255925394168F, 0.003277180450874F, -0.001423363782034F,
-0.001495542558921F, 0.005595541619440F, -0.010805109761898F, 0.016566419114583F, -0.020978915656166F, 0.017887019137442F,
-0.024458939305269F, 0.023395719164446F, -0.020887754475745F, 0.015748958919684F, -0.007900503821777F, -0.002453690320896F,
0.014781597924163F, -0.028196588132500F, 0.041462581978966F, -0.053032268803106F, 0.061136692896967F, -0.063923530958607F,
0.059654709356788F, -0.046965420664862F, 0.025204706308000F, 0.005162254707577F, -0.042085807638368F, 0.081418837458410F,
-0.116449910807091F, 0.137649662057581F, -0.132967776884251F, 0.089538357253608F, 0.001729940604474F, -0.135583038257254F,
0.270981437586369F, -0.294789366657063F, -0.003610967277886F, 0.698338282286644F, 0.388024913468554F, 0.046613427324267F
};