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
* Filter for conversion from 48000Hz to 16000Hz
* Coefficients per phase   = 180
* Upsample rate            = 1
* Downsample rate          = 3
* Pass band frequency      = 7.262500e+003
* Stop band frequency      = 7995
* Pass band ripple         = 0.10
* Stop band attenuation    = 90.00
* Generalized equiripple filter, converted to min phase by cepstral windowing
* Minimum phase
*/
float const coeff_48000_16000_float_sse[180] __attribute__ ((aligned(16))) = {

/** Phase 0 **/
0.000000089367632F, -0.000005284509879F, 0.000015045584169F, 0.000009586743350F, -0.000000111783400F, -0.000011889391498F,
-0.000015645844244F, -0.000003855706611F, 0.000016716999055F, 0.000025470449341F, 0.000010812095877F, -0.000019073772361F,
-0.000038775898233F, -0.000024077957984F, 0.000019651222491F, 0.000054704386725F, 0.000043198076631F, -0.000014158287584F,
-0.000071459861508F, -0.000071065402277F, 0.000000080981039F, 0.000087428171781F, 0.000107458091153F, 0.000025954840584F,
-0.000098460978166F, -0.000151786814320F, -0.000067605749029F, 0.000099184572899F, 0.000201809776956F, 0.000128518764522F,
-0.000083211093059F, -0.000253676038830F, -0.000210535429620F, 0.000043375881531F, 0.000300159813232F, 0.000313492422086F,
0.000028687132187F, -0.000331192929911F, -0.000434806942606F, -0.000141018576075F, 0.000334194848058F, 0.000567996207768F,
0.000299758908698F, -0.000294091141962F, -0.000701293968925F, -0.000507733590565F, 0.000193648963412F, 0.000816849160093F,
0.000763140197264F, -0.000014879225940F, -0.000890939506588F, -0.001057152450091F, -0.000258280634360F, 0.000893576910297F,
0.001371319969900F, 0.000637454717437F, -0.000789343853024F, -0.001675259555159F, -0.001126062021285F, 0.000539030216442F,
0.001924815894576F, 0.001714739047825F, -0.000103435946180F, -0.002060409228003F, -0.002375013870423F, -0.000551616688049F,
0.002006369028738F, 0.003052422184474F, 0.001446675628115F, -0.001672375948274F, -0.003657166823926F, -0.002575576213835F,
0.000958449596361F, 0.004052767554028F, 0.003883090203736F, 0.000232141938358F, -0.004041426214204F, -0.005225896845023F,
-0.001958419692442F, 0.003351797843653F, 0.006294239658626F, 0.004138824555691F, -0.001664268889647F, -0.006451100962303F,
-0.006190348871054F, -0.001027509849245F, 0.004606396038711F, 0.005654046141670F, 0.000874065392329F, -0.005803555744234F,
-0.008424348275539F, -0.004173826681828F, 0.003872106661137F, 0.009021391853500F, 0.006603890308593F, -0.001766661635921F,
-0.009162208384601F, -0.009045229835834F, -0.001016843235521F, 0.008431674430109F, 0.011146431193996F, 0.004324920456268F,
-0.006700475085290F, -0.012600972862974F, -0.007925627601112F, 0.003921350233295F, 0.013103013510222F, 0.011500183074496F,
-0.000150492629458F, -0.012376500778107F, -0.014653179613434F, -0.004431151280283F, 0.010213337719979F, 0.016936068326027F,
0.009503635013376F, -0.006515878612851F, -0.017882161352296F, -0.014604949230811F, 0.001339344195024F, 0.017055552659424F,
0.019142220062446F, 0.005067730699682F, -0.014111585879913F, -0.022420874289397F, -0.012230923357810F, 0.008869595892220F,
0.023694837861905F, 0.019429705456884F, -0.001393333864068F, -0.022243634626475F, -0.025699344801209F, -0.007921268690873F,
0.017481066420432F, 0.029863402489375F, 0.018260476476083F, -0.009101668791865F, -0.030614680827383F, -0.028318707590167F,
-0.002731246451080F, 0.026665204459976F, 0.036262473769462F, 0.017152727453897F, -0.017000447832484F, -0.039767819936067F,
-0.032328977150755F, 0.001278155914384F, 0.036208486205108F, 0.045191421241454F, 0.019570553816223F, -0.023119292424226F,
-0.051275050948118F, -0.042493201646736F, -0.000838168826086F, 0.044908102190685F, 0.061241811345648F, 0.034060716035141F,
-0.020332026577515F, -0.065391534781839F, -0.068864557944292F, -0.024979769942302F, 0.040689363201892F, 0.086843601480150F,
0.082247318028502F, 0.025211199837146F, -0.054977780138813F, -0.114679867073601F, -0.119783235004118F, -0.062840220138547F,
0.035187257954479F, 0.137547543893645F, 0.210059661237189F, 0.235050314107225F, 0.215027990726892F, 0.166704530893651F,
0.110661013201003F, 0.062605561836386F, 0.029620255037047F, 0.011254457742884F, 0.003152042687653F, 0.000514578016497F,
};
