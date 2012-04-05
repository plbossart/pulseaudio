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
* Filter for conversion from 8000Hz to 48000Hz
* Coefficients per phase   = 60
* Upsample rate            = 6
* Downsample rate          = 1
* Pass band frequency      = 3.632500e+003
* Stop band frequency      = 4000
* Pass band ripple         = 0.10
* Stop band attenuation    = 90.00
* Generalized equiripple filter, converted to min phase by cepstral windowing
* Minimum phase
*/
float const coeff_8000_48000_float_sse[360] __attribute__ ((aligned(16))) = {

/** Phase 0 **/
0.000033311321134F, -0.000047904693657F, 0.000071221055532F, -0.000096968868530F, 0.000120194832403F, -0.000136142492980F,
0.000132355643797F, -0.000098003510372F, 0.000019917532006F, 0.000121173277180F, -0.000338451428700F, 0.000644810216616F,
-0.001046214479594F, 0.001540362365999F, -0.002109294721075F, 0.002717506990582F, -0.003304386559713F, 0.003786711899325F,
-0.004050697921709F, 0.003956567254246F, -0.003338369951287F, 0.002018788468795F, 0.000177140457037F, -0.003383701522777F,
0.007636166591889F, -0.012733216623773F, 0.017936072305449F, -0.021168745961491F, 0.017683208079329F, -0.023566593164214F,
0.021044309563654F, -0.017377262039151F, 0.011116187801274F, -0.002358345975969F, -0.008546916207736F, 0.020924075764352F,
-0.033764965648957F, 0.045748857034595F, -0.055307962926951F, 0.060733713103531F, -0.060329496286586F, 0.052626281855450F,
-0.036649309427571F, 0.012253686415939F, 0.019506528764644F, -0.055939619149648F, 0.092324047287158F, -0.121567775113351F,
0.134196963341962F, -0.119035411315273F, 0.065350342081660F, 0.031985151239456F, -0.161707682134970F, 0.276047817137911F,
-0.261330346520246F, -0.065117921091392F, 0.681845111596522F, 0.424160951268541F, 0.059743121023054F, 0.000526963652209F,

/** Phase 1 **/
0.000038766476791F, -0.000036768049008F, 0.000047618189830F, -0.000056316501545F, 0.000053203697915F, -0.000034844010136F,
-0.000011150476753F, 0.000094746376657F, -0.000224631858426F, 0.000411052774097F, -0.000660740233515F, 0.000970599768103F,
-0.001332243197238F, 0.001722772206184F, -0.002107000596936F, 0.002429950703548F, -0.002619146771041F, 0.002582894848027F,
-0.002217199773551F, 0.001406053652638F, -0.000037236678074F, -0.001985790097209F, 0.004712346686741F, -0.008109068794794F,
0.011988306980538F, -0.015893510344725F, 0.018861459085415F, -0.018981897387623F, 0.013440852019268F, -0.016845058102906F,
0.010687019648499F, -0.004203194850541F, -0.004284264749078F, 0.014246932943715F, -0.024969999696767F, 0.035477441136941F,
-0.044573934798442F, 0.050919279354879F, -0.053137473772814F, 0.049967968995947F, -0.040442838130118F, 0.024104986619696F,
-0.001246723550032F, -0.026827160391261F, 0.057571065867114F, -0.086972394169485F, 0.109500354193257F, -0.118227628617766F,
0.105459545778600F, -0.064193726193982F, -0.008941106490746F, 0.108223032896153F, -0.209574788000190F, 0.257274470238505F,
-0.154053659521699F, -0.200570886199588F, 0.621989525442765F, 0.508428736875585F, 0.093209471599644F, 0.001822366496694F,

/** Phase 2 **/
0.000031291014663F, -0.000019392919708F, 0.000016238970188F, -0.000007425976889F, -0.000017928559521F, 0.000064406574119F,
-0.000138049430315F, 0.000248686297225F, -0.000396966301929F, 0.000584736163667F, -0.000807780225326F, 0.001052940756973F,
-0.001296154402165F, 0.001504227973701F, -0.001629453474370F, 0.001614575460350F, -0.001388298435997F, 0.000875051253904F,
0.000001573216601F, -0.001305590725828F, 0.003079421052984F, -0.005319137185228F, 0.007952509439479F, -0.010795856767204F,
0.013504680056584F, -0.015483839181498F, 0.015761964958926F, -0.012857669617543F, 0.005666516428173F, -0.007068486093246F,
-0.001740516112342F, 0.009470642081541F, -0.018255539570794F, 0.027209638698968F, -0.035420908551207F, 0.041834995004142F,
-0.045335991280408F, 0.044853767298799F, -0.039495178709932F, 0.028698391580257F, -0.012400574899186F, -0.008794358692268F,
0.033453043464388F, -0.059177297667462F, 0.082552308254487F, -0.099167677120002F, 0.103879188600417F, -0.091326866079309F,
0.056986076909067F, 0.000982753607457F, -0.078718260391511F, 0.161995232328261F, -0.219959382555669F, 0.199616028681207F,
-0.032484194978142F, -0.303303521831753F, 0.525835315811813F, 0.586412409290359F, 0.137906106927155F, 0.004743862321751F,

/** Phase 3 **/
0.000006924611203F, 0.000003539901522F, -0.000013691882678F, 0.000037522749021F, -0.000077133445246F, 0.000138393987082F,
-0.000222011456225F, 0.000331659758719F, -0.000464886627746F, 0.000611569003206F, -0.000761030741193F, 0.000890602172032F,
-0.000970474708944F, 0.000961223054181F, -0.000817813394806F, 0.000489129240816F, 0.000075045993316F, -0.000922498505733F,
0.002083208107206F, -0.003563110946890F, 0.005325822574608F, -0.007279791385391F, 0.009251717575190F, -0.010964484678919F,
0.011999285222144F, -0.011762756107077F, 0.009454225813957F, -0.004187069510952F, -0.003756957026848F, 0.003410685842080F,
-0.013458336986691F, 0.020608274047188F, -0.027761293430950F, 0.033786103134400F, -0.037778642170633F, 0.038838023198583F,
-0.036165727436077F, 0.029183111303224F, -0.017652762510158F, 0.001804358149048F, 0.017548648493708F, -0.038918381912575F,
0.060095809795712F, -0.078154004762486F, 0.089582138810840F, -0.090515494424763F, 0.077237504243643F, -0.046928670693896F,
-0.001114078411613F, 0.063684013633528F, -0.131173117321511F, 0.184505935236699F, -0.192499633071666F, 0.113558707416432F,
0.086139489353231F, -0.363190286940712F, 0.398494845936663F, 0.650284925540972F, 0.194560666987775F, 0.010404936110867F,

/** Phase 4 **/
-0.000063983307739F, 0.000021027402178F, -0.000036620193068F, 0.000068465337681F, -0.000112148075361F, 0.000173327831323F,
-0.000247387773728F, 0.000332344534297F, -0.000421064731362F, 0.000498463015057F, -0.000545619375382F, 0.000539886390444F,
-0.000449115731742F, 0.000240339862423F, 0.000122821270126F, -0.000670860696978F, 0.001427261058398F, -0.002398917287690F,
0.003570049689418F, -0.004886986435554F, 0.006252380196667F, -0.007508787320787F, 0.008431604895691F, -0.008712816184711F,
0.007958889473168F, -0.005693374018124F, 0.001420275600384F, 0.005114141044230F, -0.012618476992818F, 0.012174580618614F,
-0.021946887656956F, 0.026830452753482F, -0.030845327232181F, 0.032722439929268F, -0.031764641343480F, 0.027413248716489F,
-0.019348986383100F, 0.007589471612002F, 0.007420770706158F, -0.024744053275065F, 0.042903600320826F, -0.059888903082700F,
0.073223501530371F, -0.080103074817195F, 0.077665243740067F, -0.063367620810148F, 0.035593905713589F, 0.005544884566094F,
-0.057102701640440F, 0.111914951160356F, -0.157073496607094F, 0.172789554906500F, -0.133258521188063F, 0.013789807699227F,
0.185247287716615F, -0.374896433117385F, 0.249004712887541F, 0.692007872484110F, 0.262723634072241F, 0.020237120129930F,

/** Phase 5 **/
0.000021769028162F, 0.000032865047485F, -0.000047593442734F, 0.000079881839536F, -0.000118235795666F, 0.000164829664447F,
-0.000214665808758F, 0.000257626853348F, -0.000286096657191F, 0.000281709447210F, -0.000224800331041F, 0.000093735082891F,
0.000134572663789F, -0.000483800224150F, 0.000970192196550F, -0.001602306620582F, 0.002369718561557F, -0.003243262087293F,
0.004163647905246F, -0.005037637357910F, 0.005728165754404F, -0.006055314585840F, 0.005791086304575F, -0.004669574384561F,
0.002398296523905F, 0.001293076075519F, -0.006545307536090F, 0.013038370093232F, -0.018889634861510F, 0.017279925570938F,
-0.025498857541645F, 0.026918226334397F, -0.027030296111690F, 0.024487244005898F, -0.018950396942268F, 0.010311896162311F,
0.001217714951628F, -0.015050649956355F, 0.030185188623588F, -0.045205487458563F, 0.058319985930925F, -0.067449503261150F,
0.070393729289316F, -0.065058152850527F, 0.049799956525069F, -0.023847092685067F, -0.012115866136745F, 0.055288870350885F,
-0.099962751527739F, 0.136793607680965F, -0.152408728861274F, 0.130133600771325F, -0.053573985034038F, -0.083178654740717F,
0.251352920417462F, -0.338825541855265F, 0.089677388017973F, 0.704332998863247F, 0.340473267838378F, 0.036045704542862F,
};
