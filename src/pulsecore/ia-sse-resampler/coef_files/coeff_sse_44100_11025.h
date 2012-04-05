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
* Filter for conversion from 44100Hz to 11025Hz
* Coefficients per phase   = 236
* Upsample rate            = 1
* Downsample rate          = 4
* Pass band frequency      = 5.002500e+003
* Stop band frequency      = 5515
* Pass band ripple         = 0.10
* Stop band attenuation    = 90.00
* Generalized equiripple filter, converted to min phase by cepstral windowing
* Minimum phase
*/
float const coeff_44100_11025_float_sse[236] __attribute__ ((aligned(16))) = {

/** Phase 0 **/
0.000014662439741F, -0.000001196393586F, -0.000005881160560F, -0.000011118928644F, -0.000010933687908F, -0.000007006314502F,
0.000003683322142F, 0.000013066730665F, 0.000016815960613F, 0.000011698470376F, -0.000001833599487F, -0.000018179222496F,
-0.000026666351579F, -0.000021396426853F, -0.000003294294378F, 0.000020630298866F, 0.000038046305123F, 0.000036632826055F,
0.000013728700905F, -0.000020557350725F, -0.000049033214653F, -0.000054780684429F, -0.000030428535436F, 0.000015666373259F,
0.000060780229883F, 0.000079444490393F, 0.000056521680526F, -0.000001609908834F, -0.000067621882420F, -0.000105490091993F,
-0.000090439444550F, -0.000022779034721F, 0.000067836769465F, 0.000134502730592F, 0.000136130123923F, 0.000062782157843F,
-0.000055438193495F, -0.000159008681486F, -0.000188901246212F, -0.000118579393825F, 0.000026179843689F, 0.000175827437263F,
0.000248609126717F, 0.000194780594545F, 0.000027429234087F, -0.000175705068189F, -0.000308126764701F, -0.000288521677822F,
-0.000109232259589F, 0.000151441559180F, 0.000360715251707F, 0.000398780116445F, 0.000224801296017F, -0.000090893036372F,
-0.000393546556151F, -0.000517467679337F, -0.000375775244808F, -0.000015121000302F, 0.000393699438257F, 0.000635463003392F,
0.000561148810793F, 0.000176958801500F, -0.000343624997644F, -0.000734836439557F, -0.000773183199951F, -0.000400904449014F,
0.000224733666248F, 0.000794998275896F, 0.000998796778478F, 0.000690211978704F, -0.000017989149099F, -0.000787771917200F,
-0.001215327566111F, -0.001038868372903F, -0.000293043741426F, 0.000681933065517F, 0.001390582947734F, 0.001431754377105F,
0.000719251879402F, -0.000441748956930F, -0.001480844238345F, -0.001838005980972F, -0.001261370802835F, 0.000032994563066F,
0.001431171726137F, 0.002209502582095F, 0.001903272323651F, 0.000574323250270F, -0.001176337721678F, -0.002474073921075F,
-0.002603900651920F, -0.001394661726153F, 0.000644678854803F, 0.002532896670862F, 0.003283300005791F, 0.002413426220588F,
0.000232431678197F, -0.002253664248671F, -0.003804092567798F, -0.003557242209966F, -0.001498134581079F, 0.001474949831741F,
0.003940300818927F, 0.004636005609151F, 0.003102478946042F, -0.000038828872807F, -0.003338745926795F, -0.005202037995721F,
-0.004681052180355F, -0.001979306360730F, 0.001600103958209F, 0.004268747027251F, 0.004639769977468F, 0.002454949940474F,
-0.001232371144852F, -0.004533593056644F, -0.005655773325161F, -0.003828917116028F, 0.000239354308474F, 0.004643536416335F,
0.007185690336147F, 0.006480765578589F, 0.002705909811137F, -0.002403671869368F, -0.006350800349205F, -0.007099256669012F,
-0.004125474496542F, 0.001242501422816F, 0.006404842568838F, 0.008739859477686F, 0.006924677937504F, 0.001663194408203F,
-0.004572850669404F, -0.008705109861866F, -0.008567944291422F, -0.004038172888627F, 0.002810586648927F, 0.008648516307355F,
0.010502129320201F, 0.007258520640437F, 0.000304070548005F, -0.007059839905059F, -0.011182227255226F, -0.009869286106650F,
-0.003539620458141F, 0.004873534993421F, 0.011276288134725F, 0.012399729547984F, 0.007457238599410F, -0.001363800493637F,
-0.009863956694106F, -0.013828532992398F, -0.011109611427194F, -0.002769815950911F, 0.007314153039487F, 0.014249222057503F,
0.014493402924326F, 0.007648126311763F, -0.003223477792988F, -0.012963874197970F, -0.016763365248275F, -0.012523384999964F,
-0.001982933909289F, 0.009981864053397F, 0.017610646512663F, 0.017021633085835F, 0.008163839622249F, -0.005015724014358F,
-0.016328302992290F, -0.020243681383985F, -0.014574702998806F, -0.001651355917801F, 0.012629900862042F, 0.021493257651659F,
0.020484030959671F, 0.009673004487501F, -0.006211562710339F, -0.019853902821015F, -0.024710746429731F, -0.018122047375257F,
-0.002700737699909F, 0.014699419176026F, 0.026030463746095F, 0.025750262934267F, 0.013483664139595F, -0.005617883961260F,
-0.023047620912640F, -0.030724118166457F, -0.024696051904349F, -0.007088378329219F, 0.014642030163348F, 0.030873773536184F,
0.034056118763801F, 0.022147305266862F, -0.000282756912740F, -0.023831762984429F, -0.038210251540806F, -0.036686155297802F,
-0.019114178033714F, 0.007771895197562F, 0.032985262290609F, 0.045769537667392F, 0.040096602529529F, 0.017310443593274F,
-0.014183594044602F, -0.042093945611753F, -0.055025575191299F, -0.046987552564916F, -0.019859233332697F, 0.017122663075921F,
0.050651418239345F, 0.068148145820498F, 0.062288008513986F, 0.033626156091131F, -0.009532808440561F, -0.053877381754388F,
-0.085380029996712F, -0.093626263838560F, -0.074764932617151F, -0.032265879686676F, 0.024554554828093F, 0.083534703220830F,
0.133112061543798F, 0.165128318972892F, 0.176298634600547F, 0.168135418861407F, 0.145652857999633F, 0.115457257711689F,
0.083899085492638F, 0.055747682663567F, 0.033638646876676F, 0.018202910050544F, 0.008650899594997F, 0.003475988123058F,
0.001097684636539F, 0.000223744079467F, };
