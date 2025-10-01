/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include "timing.h"
#include <stdio.h>

#include "scchart_heart.h"

void logic(TickData* d) {
  d->_g30 = d->_pg9;
  if (d->_g30) {
    d->_region0_null_URI += d->deltaT;
  }
  d->_g31_e1 = !d->_g30;
  d->AP = 0;
  d->VP = 0;
  d->VR = 0;
  d->AR = 0;
  d->a = 0;
  d->v = 0;
  d->VS_i = 0;
  d->_pre_VS_i = d->_reg_VS_i;
  d->_g235 = d->_pg217;
  d->_cg235 = d->_pre_VS_i;
  d->_g236 = d->_g235 && d->_cg235;
  if (d->_g236) {
    d->v |= 1;
  }
  d->_pre_VP = d->_reg_VP;
  d->_g235 = d->_g235 && !d->_cg235;
  d->_cg237 = d->_pre_VP;
  d->_g238 = d->_g235 && d->_cg237;
  if (d->_g238) {
    d->v |= 1;
  }
  d->_g34 = d->_pg13;
  d->_cg34 = d->v;
  d->_g35 = d->_g34 && d->_cg34;
  if (d->_g35) {
    d->_heart2_local__Atrig2 = 1;
  }
  d->_cg30 = d->_heart2_local__Atrig2;
  d->_g31 = d->_g30 && d->_cg30;
  d->_g35_e2 = !d->_g34;
  d->_g35_e2 = (d->_g31_e1 || d->_g31) && (d->_g35_e2 || d->_g35) && (d->_g31 || d->_g35);
  if (d->_g35_e2) {
    d->_region0_null_URI = 0;
    d->ready = 0;
  }
  d->_g31 = d->_pg7_e1;
  if (d->_g31) {
    d->_region0_null_URI += d->deltaT;
  }
  d->_g31_e1 = !d->_g31;
  d->_g35 = d->_pg36;
  d->_cg21 = d->_region0_null_URI >= d->URI_time;
  d->_g22 = d->_g35 && d->_cg21;
  if (d->_g22) {
    d->_heart2_local__Atrig = 1;
  }
  d->_g24 = d->_g35 && !d->_cg21;
  d->_cg24 = d->v;
  d->_g25 = d->_g24 && d->_cg24;
  if (d->_g25) {
    d->_heart2_local__Atrig1 = 1;
  }
  d->_cg6 = d->_heart2_local__Atrig || d->_heart2_local__Atrig1;
  d->_g7 = d->_g31 && d->_cg6;
  d->_g17 = d->_pg37;
  d->_g11 = d->_pg14;
  d->_g14_e2 = !(d->_g17 || d->_g11);
  d->sleepT = 1000.0;
  d->_g11 = d->_g11 || d->_g17;
  d->_cg12 = d->_region0_null_URI < d->URI_time;
  d->_g17 = d->_g11 && d->_cg12;
  if (d->_g17) {
    d->sleepT = (d->sleepT < (d->URI_time - d->_region0_null_URI)) ? d->sleepT : (d->URI_time - d->_region0_null_URI);
  }
  d->_cg13 = d->_heart2_local__Atrig || d->_heart2_local__Atrig1;
  d->_g12 = d->_g11 && !d->_cg12;
  d->_cg15 = d->_heart2_local__Atrig || d->_heart2_local__Atrig1;
  d->_g14 = d->_g17 && d->_cg13 || d->_g12 && d->_cg15;
  d->_g21 = !d->_g35;
  d->_g22 = d->_g22 || d->_g25;
  d->_g25 = (d->_g31_e1 || d->_g7) && (d->_g14_e2 || d->_g14) && (d->_g21 || d->_g22) && (d->_g7 || d->_g14 || d->_g22);
  d->_cg26 = d->_heart2_local__Atrig;
  d->_g23_e3 = d->_g25 && !d->_cg26;
  if (d->_g23_e3) {
    d->_region0_null_URI = 0;
  }
  d->_g23 = d->_GO || d->_g35_e2 || d->_g23_e3;
  if (d->_g23) {
    d->_heart2_local__Atrig = 0;
    d->_heart2_local__Atrig1 = 0;
  }
  d->_cg4 = d->_heart2_local__Atrig || d->_heart2_local__Atrig1;
  d->_g7_e1 = d->_g23 && !d->_cg4 || d->_g31 && !d->_cg6;
  d->_cg8 = d->_region0_null_URI < d->URI_time;
  d->_g7 = d->_g23 && d->_cg8;
  if (d->_g7) {
    d->sleepT = (d->sleepT < (d->URI_time - d->_region0_null_URI)) ? d->sleepT : (d->URI_time - d->_region0_null_URI);
  }
  d->_cg9 = d->_heart2_local__Atrig || d->_heart2_local__Atrig1;
  d->_g14 = d->_g7 && !d->_cg9 || d->_g17 && !d->_cg13;
  d->_g14_e2 = d->_g23 && !d->_cg8;
  d->_cg18 = d->_heart2_local__Atrig || d->_heart2_local__Atrig1;
  d->_g37 = d->_g12 && !d->_cg15 || d->_g14_e2 && !d->_cg18;
  d->_g36 = d->_g23 || d->_g24 && !d->_cg24;
  d->_g6 = d->_g25 && d->_cg26;
  if (d->_g6) {
    d->ready = 1;
    d->_heart2_local__Atrig2 = 0;
  }
  d->_cg28 = d->_heart2_local__Atrig2;
  d->_g9 = d->_g6 && !d->_cg28 || d->_g30 && !d->_cg30;
  d->_g13 = d->_g6 || d->_g34 && !d->_cg34;
  d->_g15 = d->_pg46;
  if (d->_g15) {
    d->_region1_null_LRI += d->deltaT;
  }
  d->_g18 = !d->_g15;
  d->_g24 = d->_pg50;
  d->_cg71 = d->v;
  d->_g3 = d->_g24 && d->_cg71;
  if (d->_g3) {
    d->_heart2_local__Atrig5 = 1;
  }
  d->_cg67 = d->_heart2_local__Atrig5;
  d->_g26 = d->_g15 && d->_cg67;
  d->_g30 = !d->_g24;
  d->_g27 = (d->_g18 || d->_g26) && (d->_g30 || d->_g3) && (d->_g26 || d->_g3);
  if (d->_g27) {
    d->_region1_null_LRI = 0;
  }
  d->_g34 = d->_pg44_e1;
  if (d->_g34) {
    d->_region1_null_LRI += d->deltaT;
  }
  d->_g72_e2 = !d->_g34;
  d->_g68_e1 = d->_pg74;
  d->_cg58 = d->_region1_null_LRI >= d->LRI_time;
  d->_g68 = d->_g68_e1 && d->_cg58;
  if (d->_g68) {
    d->_heart2_local__Atrig3 = 1;
  }
  d->_g72 = d->_g68_e1 && !d->_cg58;
  d->_cg61 = d->v;
  d->_g62 = d->_g72 && d->_cg61;
  if (d->_g62) {
    d->_heart2_local__Atrig4 = 1;
  }
  d->_cg43 = d->_heart2_local__Atrig3 || d->_heart2_local__Atrig4;
  d->_g44 = d->_g34 && d->_cg43;
  d->_g54 = d->_pg73;
  d->_g48 = d->_pg51_e2;
  d->_g51_e2 = !(d->_g54 || d->_g48);
  d->_g48 = d->_g48 || d->_g54;
  d->_cg49 = d->_region1_null_LRI < d->LRI_time;
  d->_g54 = d->_g48 && d->_cg49;
  if (d->_g54) {
    d->sleepT = (d->sleepT < (d->LRI_time - d->_region1_null_LRI)) ? d->sleepT : (d->LRI_time - d->_region1_null_LRI);
  }
  d->_cg50 = d->_heart2_local__Atrig3 || d->_heart2_local__Atrig4;
  d->_g49 = d->_g48 && !d->_cg49;
  d->_cg52 = d->_heart2_local__Atrig3 || d->_heart2_local__Atrig4;
  d->_g51 = d->_g54 && d->_cg50 || d->_g49 && d->_cg52;
  d->_g58 = !d->_g68_e1;
  d->_g62 = d->_g68 || d->_g62;
  d->_g59 = (d->_g72_e2 || d->_g44) && (d->_g51_e2 || d->_g51) && (d->_g58 || d->_g62) && (d->_g44 || d->_g51 || d->_g62);
  d->_cg63 = d->_heart2_local__Atrig3;
  d->_g51 = d->_g59 && !d->_cg63;
  if (d->_g51) {
    d->_region1_null_LRI = 0;
  }
  d->_g60_e3 = d->_GO || d->_g27 || d->_g51;
  if (d->_g60_e3) {
    d->_heart2_local__Atrig3 = 0;
    d->_heart2_local__Atrig4 = 0;
  }
  d->_cg41 = d->_heart2_local__Atrig3 || d->_heart2_local__Atrig4;
  d->_g44_e1 = d->_g60_e3 && !d->_cg41 || d->_g34 && !d->_cg43;
  d->_cg45 = d->_region1_null_LRI < d->LRI_time;
  d->_g44 = d->_g60_e3 && d->_cg45;
  if (d->_g44) {
    d->sleepT = (d->sleepT < (d->LRI_time - d->_region1_null_LRI)) ? d->sleepT : (d->LRI_time - d->_region1_null_LRI);
  }
  d->_cg46 = d->_heart2_local__Atrig3 || d->_heart2_local__Atrig4;
  d->_g51_e2 = d->_g44 && !d->_cg46 || d->_g54 && !d->_cg50;
  d->_g60 = d->_g60_e3 && !d->_cg45;
  d->_cg55 = d->_heart2_local__Atrig3 || d->_heart2_local__Atrig4;
  d->_g73 = d->_g49 && !d->_cg52 || d->_g60 && !d->_cg55;
  d->_g74 = d->_g60_e3 || d->_g72 && !d->_cg61;
  d->_g43 = d->_g59 && d->_cg63;
  if (d->_g43) {
    d->VP |= 1;
    d->_heart2_local__Atrig5 = 0;
  }
  d->_cg65 = d->_heart2_local__Atrig5;
  d->_g46 = d->_g43 && !d->_cg65 || d->_g15 && !d->_cg67;
  d->_g50 = d->_g43 || d->_g24 && !d->_cg71;
  d->_g55 = d->_pg83;
  if (d->_g55) {
    d->_region2_null_VRP += d->deltaT;
  }
  d->_g52 = !d->_g55;
  d->_g40 = d->_pg89;
  d->_cg108 = d->v;
  d->_g61 = d->_g40 && d->_cg108;
  if (d->_g61) {
    d->_heart2_local__Atrig8 = 1;
  }
  d->_g63 = d->_g40 && !d->_cg108;
  d->_g67 = d->_g63 && d->VS;
  if (d->_g67) {
    d->_heart2_local__Atrig9 = 1;
  }
  d->_cg104 = d->_heart2_local__Atrig8 || d->_heart2_local__Atrig9;
  d->_g64 = d->_g55 && d->_cg104;
  d->_g71 = !d->_g40;
  d->_g108 = d->_g61 || d->_g67;
  d->_g112 = (d->_g52 || d->_g64) && (d->_g71 || d->_g108) && (d->_g64 || d->_g108);
  d->_cg113 = d->_heart2_local__Atrig8;
  d->_g109 = d->_g112 && d->_cg113;
  if (d->_g109) {
    d->_region2_null_VRP = 0;
  }
  d->_g105_e1 = d->_pg88;
  if (d->_g105_e1) {
    d->_region2_null_VRP += d->deltaT;
  }
  d->_g110 = !d->_g105_e1;
  d->_g105 = d->_pg114;
  d->_cg95 = d->_region2_null_VRP >= d->VRP_time;
  d->_g110_e2 = d->_g105 && d->_cg95;
  if (d->_g110_e2) {
    d->_heart2_local__Atrig6 = 1;
  }
  d->_g98 = d->_g105 && !d->_cg95;
  d->_g99 = d->_g98 && d->VS;
  if (d->_g99) {
    d->_heart2_local__Atrig7 = 1;
  }
  d->_cg80 = d->_heart2_local__Atrig6 || d->_heart2_local__Atrig7;
  d->_g81 = d->_g105_e1 && d->_cg80;
  d->_g91 = d->_pg116;
  d->_g85 = d->_pg97_e3;
  d->_g88_e2 = !(d->_g91 || d->_g85);
  d->_g91 = d->_g85 || d->_g91;
  d->_cg86 = d->_region2_null_VRP < d->VRP_time;
  d->_g85 = d->_g91 && d->_cg86;
  if (d->_g85) {
    d->sleepT = (d->sleepT < (d->VRP_time - d->_region2_null_VRP)) ? d->sleepT : (d->VRP_time - d->_region2_null_VRP);
  }
  d->_cg87 = d->_heart2_local__Atrig6 || d->_heart2_local__Atrig7;
  d->_g86 = d->_g91 && !d->_cg86;
  d->_cg89 = d->_heart2_local__Atrig6 || d->_heart2_local__Atrig7;
  d->_g88 = d->_g85 && d->_cg87 || d->_g86 && d->_cg89;
  d->_g95 = !d->_g105;
  d->_g99 = d->_g110_e2 || d->_g99;
  d->_g96 = (d->_g110 || d->_g81) && (d->_g88_e2 || d->_g88) && (d->_g95 || d->_g99) && (d->_g81 || d->_g88 || d->_g99);
  d->_cg100 = d->_heart2_local__Atrig6;
  d->_g81_e1 = d->_g96 && !d->_cg100;
  if (d->_g81_e1) {
    d->VR |= 1;
  }
  d->_g97 = d->_GO || d->_g109 || d->_g81_e1;
  if (d->_g97) {
    d->_heart2_local__Atrig6 = 0;
    d->_heart2_local__Atrig7 = 0;
  }
  d->_cg78 = d->_heart2_local__Atrig6 || d->_heart2_local__Atrig7;
  d->_g88 = d->_g97 && !d->_cg78 || d->_g105_e1 && !d->_cg80;
  d->_cg82 = d->_region2_null_VRP < d->VRP_time;
  d->_g81 = d->_g97 && d->_cg82;
  if (d->_g81) {
    d->sleepT = (d->sleepT < (d->VRP_time - d->_region2_null_VRP)) ? d->sleepT : (d->VRP_time - d->_region2_null_VRP);
  }
  d->_cg83 = d->_heart2_local__Atrig6 || d->_heart2_local__Atrig7;
  d->_g97_e3 = d->_g81 && !d->_cg83 || d->_g85 && !d->_cg87;
  d->_g88_e2 = d->_g97 && !d->_cg82;
  d->_cg92 = d->_heart2_local__Atrig6 || d->_heart2_local__Atrig7;
  d->_g116 = d->_g86 && !d->_cg89 || d->_g88_e2 && !d->_cg92;
  d->_g114 = d->_g97 || d->_g98 && !d->VS;
  d->_g80 = d->_g112 && !d->_cg113;
  if (d->_g80) {
    d->VS_i |= 1;
  }
  d->_g87 = d->_g96 && d->_cg100 || d->_g80;
  if (d->_g87) {
    d->_heart2_local__Atrig8 = 0;
    d->_heart2_local__Atrig9 = 0;
  }
  d->_cg102 = d->_heart2_local__Atrig8 || d->_heart2_local__Atrig9;
  d->_g83 = d->_g87 && !d->_cg102 || d->_g55 && !d->_cg104;
  d->_g89 = d->_g87 || d->_g63 && !d->VS;
  d->_g92 = d->_pg129;
  if (d->_g92) {
    d->_region3_null_PVARP += d->deltaT;
  }
  d->_g77 = !d->_g92;
  d->_g98 = d->_pg134;
  d->_cg150 = d->v;
  d->_g113 = d->_g98 && d->_cg150;
  if (d->_g113) {
    d->_heart2_local__Atrig12 = 1;
  }
  d->_g115 = d->_g98 && !d->_cg150;
  d->_g100 = d->_g115 && d->AS;
  if (d->_g100) {
    d->_heart2_local__Atrig13 = 1;
  }
  d->_cg146 = d->_heart2_local__Atrig12 || d->_heart2_local__Atrig13;
  d->_g104 = d->_g92 && d->_cg146;
  d->_g101 = !d->_g98;
  d->_g111 = d->_g113 || d->_g100;
  d->_g150 = (d->_g77 || d->_g104) && (d->_g101 || d->_g111) && (d->_g104 || d->_g111);
  d->_cg155 = d->_heart2_local__Atrig12;
  d->_g154 = d->_g150 && d->_cg155;
  if (d->_g154) {
    d->_region3_null_PVARP = 0;
  }
  d->_g151 = d->_pg130_e2;
  if (d->_g151) {
    d->_region3_null_PVARP += d->deltaT;
  }
  d->_g147_e1 = !d->_g151;
  d->_g152 = d->_pg158;
  d->_cg137 = d->_region3_null_PVARP >= d->PVARP_time;
  d->_g147 = d->_g152 && d->_cg137;
  if (d->_g147) {
    d->_heart2_local__Atrig10 = 1;
  }
  d->_g152_e2 = d->_g152 && !d->_cg137;
  d->_g141 = d->_g152_e2 && d->AS;
  if (d->_g141) {
    d->_heart2_local__Atrig11 = 1;
  }
  d->_cg122 = d->_heart2_local__Atrig10 || d->_heart2_local__Atrig11;
  d->_g123 = d->_g151 && d->_cg122;
  d->_g133 = d->_pg156;
  d->_g127 = d->_pg139;
  d->_g130_e2 = !(d->_g133 || d->_g127);
  d->_g127 = d->_g127 || d->_g133;
  d->_cg128 = d->_region3_null_PVARP < d->PVARP_time;
  d->_g133 = d->_g127 && d->_cg128;
  if (d->_g133) {
    d->sleepT = (d->sleepT < (d->PVARP_time - d->_region3_null_PVARP)) ? d->sleepT : (d->PVARP_time - d->_region3_null_PVARP);
  }
  d->_cg129 = d->_heart2_local__Atrig10 || d->_heart2_local__Atrig11;
  d->_g128 = d->_g127 && !d->_cg128;
  d->_cg131 = d->_heart2_local__Atrig10 || d->_heart2_local__Atrig11;
  d->_g130 = d->_g133 && d->_cg129 || d->_g128 && d->_cg131;
  d->_g137 = !d->_g152;
  d->_g138 = d->_g147 || d->_g141;
  d->_g141 = (d->_g147_e1 || d->_g123) && (d->_g130_e2 || d->_g130) && (d->_g137 || d->_g138) && (d->_g123 || d->_g130 || d->_g138);
  d->_cg142 = d->_heart2_local__Atrig10;
  d->_g123 = d->_g141 && !d->_cg142;
  if (d->_g123) {
    d->AR |= 1;
  }
  d->_g123_e1 = d->_GO || d->_g154 || d->_g123;
  if (d->_g123_e1) {
    d->_heart2_local__Atrig10 = 0;
    d->_heart2_local__Atrig11 = 0;
  }
  d->_cg120 = d->_heart2_local__Atrig10 || d->_heart2_local__Atrig11;
  d->_g130_e2 = d->_g123_e1 && !d->_cg120 || d->_g151 && !d->_cg122;
  d->_cg124 = d->_region3_null_PVARP < d->PVARP_time;
  d->_g130 = d->_g123_e1 && d->_cg124;
  if (d->_g130) {
    d->sleepT = (d->sleepT < (d->PVARP_time - d->_region3_null_PVARP)) ? d->sleepT : (d->PVARP_time - d->_region3_null_PVARP);
  }
  d->_cg125 = d->_heart2_local__Atrig10 || d->_heart2_local__Atrig11;
  d->_g139 = d->_g130 && !d->_cg125 || d->_g133 && !d->_cg129;
  d->_g139_e3 = d->_g123_e1 && !d->_cg124;
  d->_cg134 = d->_heart2_local__Atrig10 || d->_heart2_local__Atrig11;
  d->_g156 = d->_g128 && !d->_cg131 || d->_g139_e3 && !d->_cg134;
  d->_g158 = d->_g123_e1 || d->_g152_e2 && !d->AS;
  d->_g122 = d->_g150 && !d->_cg155;
  if (d->_g122) {
    d->a |= 1;
  }
  d->_g125 = d->_g141 && d->_cg142 || d->_g122;
  if (d->_g125) {
    d->_heart2_local__Atrig12 = 0;
    d->_heart2_local__Atrig13 = 0;
  }
  d->_cg144 = d->_heart2_local__Atrig12 || d->_heart2_local__Atrig13;
  d->_g129 = d->_g125 && !d->_cg144 || d->_g92 && !d->_cg146;
  d->_g134 = d->_g125 || d->_g115 && !d->AS;
  d->_g131 = d->_pg179;
  if (d->_g131) {
    d->_region4_null_AEI += d->deltaT;
  }
  d->_g119 = !d->_g131;
  d->_g140 = d->_pg181_e3;
  d->_cg193 = d->v;
  d->_g155 = d->_g140 && d->_cg193;
  if (d->_g155) {
    d->_heart2_local__Atrig16 = 1;
  }
  d->_cg189 = d->_heart2_local__Atrig16;
  d->_g157 = d->_g131 && d->_cg189;
  d->_g142 = !d->_g140;
  d->_g146 = (d->_g119 || d->_g157) && (d->_g142 || d->_g155) && (d->_g157 || d->_g155);
  if (d->_g146) {
    d->_region4_null_AEI = 0;
  }
  d->_g153 = d->_GO || d->_g146;
  if (d->_g153) {
    d->_heart2_local__Atrig14 = 0;
    d->_heart2_local__Atrig15 = 0;
  }
  d->_cg162 = d->_heart2_local__Atrig14 || d->_heart2_local__Atrig15;
  d->_g143 = d->_pg195;
  if (d->_g143) {
    d->_region4_null_AEI += d->deltaT;
  }
  d->_g190_e1 = d->_pg173;
  d->_cg179 = d->_region4_null_AEI >= d->AEI_time;
  d->_g190 = d->_g190_e1 && d->_cg179;
  if (d->_g190) {
    d->_heart2_local__Atrig14 = 1;
  }
  d->_g194_e2 = d->_g190_e1 && !d->_cg179;
  d->_cg182 = d->a;
  d->_g194 = d->_g194_e2 && d->_cg182;
  if (d->_g194) {
    d->_heart2_local__Atrig15 = 1;
  }
  d->_cg164 = d->_heart2_local__Atrig14 || d->_heart2_local__Atrig15;
  d->_g195 = d->_g153 && !d->_cg162 || d->_g143 && !d->_cg164;
  d->_g165 = d->_g143 && d->_cg164;
  d->_cg166 = d->_region4_null_AEI < d->AEI_time;
  d->_g167 = d->_g153 && d->_cg166;
  if (d->_g167) {
    d->sleepT = (d->sleepT < (d->AEI_time - d->_region4_null_AEI)) ? d->sleepT : (d->AEI_time - d->_region4_null_AEI);
  }
  d->_cg167 = d->_heart2_local__Atrig14 || d->_heart2_local__Atrig15;
  d->_g169 = d->_pg167;
  d->_g175 = d->_pg176;
  d->_g170 = d->_g169 || d->_g175;
  d->_cg170 = d->_region4_null_AEI < d->AEI_time;
  d->_g171 = d->_g170 && d->_cg170;
  if (d->_g171) {
    d->sleepT = (d->sleepT < (d->AEI_time - d->_region4_null_AEI)) ? d->sleepT : (d->AEI_time - d->_region4_null_AEI);
  }
  d->_cg171 = d->_heart2_local__Atrig14 || d->_heart2_local__Atrig15;
  d->_g167 = d->_g167 && !d->_cg167 || d->_g171 && !d->_cg171;
  d->_g170 = d->_g170 && !d->_cg170;
  d->_cg173 = d->_heart2_local__Atrig14 || d->_heart2_local__Atrig15;
  d->_g171 = d->_g171 && d->_cg171 || d->_g170 && d->_cg173;
  d->_g176 = d->_g153 && !d->_cg166;
  d->_cg176 = d->_heart2_local__Atrig14 || d->_heart2_local__Atrig15;
  d->_g176 = d->_g170 && !d->_cg173 || d->_g176 && !d->_cg176;
  d->_g173 = d->_g153 || d->_g194_e2 && !d->_cg182;
  d->_g182 = d->_g190 || d->_g194;
  d->_g161 = !d->_g143;
  d->_g183 = !(d->_g175 || d->_g169);
  d->_g180 = !d->_g190_e1;
  d->_g164 = (d->_g161 || d->_g165) && (d->_g183 || d->_g171) && (d->_g180 || d->_g182) && (d->_g165 || d->_g171 || d->_g182);
  d->_cg184 = d->_heart2_local__Atrig14;
  d->_g175 = d->_g164 && d->_cg184;
  if (d->_g175) {
    d->AP |= 1;
    d->a |= 1;
  }
  d->_g169 = d->_g175 || d->_g164 && !d->_cg184;
  if (d->_g169) {
    d->_heart2_local__Atrig16 = 0;
  }
  d->_cg187 = d->_heart2_local__Atrig16;
  d->_g179 = d->_g169 && !d->_cg187 || d->_g131 && !d->_cg189;
  d->_g181_e3 = d->_g169 || d->_g140 && !d->_cg193;
  d->_g181 = d->_pg206;
  if (d->_g181) {
    d->_region5_null_AVI += d->deltaT;
  }
  d->_g165 = !d->_g181;
  d->_g165_e1 = d->_pg213;
  d->_cg225 = d->v;
  d->_g172 = d->_g165_e1 && d->_cg225;
  if (d->_g172) {
    d->_heart2_local__Atrig18 = 1;
  }
  d->_g172_e2 = d->_g165_e1 && !d->_cg225;
  d->_cg228 = d->ready && d->_region5_null_AVI >= d->AVI_time;
  d->_g185 = d->_g172_e2 && d->_cg228;
  if (d->_g185) {
    d->_heart2_local__Atrig19 = 1;
  }
  d->_cg210 = d->_heart2_local__Atrig18 || d->_heart2_local__Atrig19;
  d->_g184 = d->_g181 && d->_cg210;
  d->_g189 = d->_pg210;
  d->_g193 = d->_pg202;
  d->_g186 = !(d->_g189 || d->_g193);
  d->_g215 = d->_g193 || d->_g189;
  d->_cg216 = d->_region5_null_AVI < d->AVI_time;
  d->_g221 = d->_g215 && d->_cg216;
  if (d->_g221) {
    d->sleepT = (d->sleepT < (d->AVI_time - d->_region5_null_AVI)) ? d->sleepT : (d->AVI_time - d->_region5_null_AVI);
  }
  d->_cg217 = d->_heart2_local__Atrig18 || d->_heart2_local__Atrig19;
  d->_g216 = d->_g215 && !d->_cg216;
  d->_cg219 = d->_heart2_local__Atrig18 || d->_heart2_local__Atrig19;
  d->_g218 = d->_g221 && d->_cg217 || d->_g216 && d->_cg219;
  d->_g225 = !d->_g165_e1;
  d->_g226 = d->_g172 || d->_g185;
  d->_g229 = (d->_g165 || d->_g184) && (d->_g186 || d->_g218) && (d->_g225 || d->_g226) && (d->_g184 || d->_g218 || d->_g226);
  d->_cg230 = d->_heart2_local__Atrig18;
  d->_g227_e3 = d->_g229 && !d->_cg230;
  if (d->_g227_e3) {
    d->VP |= 1;
  }
  d->_g211 = d->_GO || d->_g229 && d->_cg230 || d->_g227_e3;
  if (d->_g211) {
    d->_heart2_local__Atrig17 = 0;
  }
  d->_cg199 = d->_heart2_local__Atrig17;
  d->_g218_e2 = d->_pg231;
  d->_cg205 = d->a;
  d->_g218 = d->_g218_e2 && d->_cg205;
  if (d->_g218) {
    d->_heart2_local__Atrig17 = 1;
  }
  d->_g227 = d->_pg211_e1;
  if (d->_g227) {
    d->_region5_null_AVI += d->deltaT;
  }
  d->_cg201 = d->_heart2_local__Atrig17;
  d->_g211_e1 = d->_g211 && !d->_cg199 || d->_g227 && !d->_cg201;
  d->_g230 = d->_g227 && d->_cg201;
  d->_g231 = d->_g211 || d->_g218_e2 && !d->_cg205;
  d->_g198 = !d->_g227;
  d->_g201 = !d->_g218_e2;
  d->_g205 = (d->_g198 || d->_g230) && (d->_g201 || d->_g218) && (d->_g230 || d->_g218);
  if (d->_g205) {
    d->_region5_null_AVI = 0;
    d->_heart2_local__Atrig18 = 0;
    d->_heart2_local__Atrig19 = 0;
  }
  d->_cg208 = d->_heart2_local__Atrig18 || d->_heart2_local__Atrig19;
  d->_g206 = d->_g205 && !d->_cg208 || d->_g181 && !d->_cg210;
  d->_cg212 = d->_region5_null_AVI < d->AVI_time;
  d->_g206_e2 = d->_g205 && d->_cg212;
  if (d->_g206_e2) {
    d->sleepT = (d->sleepT < (d->AVI_time - d->_region5_null_AVI)) ? d->sleepT : (d->AVI_time - d->_region5_null_AVI);
  }
  d->_cg213 = d->_heart2_local__Atrig18 || d->_heart2_local__Atrig19;
  d->_g202 = d->_g206_e2 && !d->_cg213 || d->_g221 && !d->_cg217;
  d->_g202_e1 = d->_g205 && !d->_cg212;
  d->_cg222 = d->_heart2_local__Atrig18 || d->_heart2_local__Atrig19;
  d->_g210 = d->_g216 && !d->_cg219 || d->_g202_e1 && !d->_cg222;
  d->_g213 = d->_g205 || d->_g172_e2 && !d->_cg228;
  d->_g217 = d->_GO || d->_g236 || d->_g238 || d->_g235 && !d->_cg237;
  d->_reg_VP = d->VP;
  d->_reg_VS_i = d->VS_i;
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->VRP_time = VRP_VALUE;
  d->PVARP_time = PVARP_VALUE;
  d->URI_time = URI_VALUE;
  d->LRI_time = LRI_VALUE;
  d->AEI_time = AEI_VALUE;
  d->AVI_time = AVI_VALUE;
  d->ready = 0;
  d->_region0_null_URI = 0.0;
  d->_region1_null_LRI = 0.0;
  d->_region2_null_VRP = 0.0;
  d->_region3_null_PVARP = 0.0;
  d->_region4_null_AEI = 0.0;
  d->_region5_null_AVI = 0.0;
  d->deltaT = 0.0;
  d->sleepT = 0.0;
  d->_reg_VP = 0;
  d->_reg_VS_i = 0;
  d->_pg9 = 0;
  d->_pg217 = 0;
  d->_pg13 = 0;
  d->_pg7_e1 = 0;
  d->_pg36 = 0;
  d->_pg37 = 0;
  d->_pg14 = 0;
  d->_pg46 = 0;
  d->_pg50 = 0;
  d->_pg44_e1 = 0;
  d->_pg74 = 0;
  d->_pg73 = 0;
  d->_pg51_e2 = 0;
  d->_pg83 = 0;
  d->_pg89 = 0;
  d->_pg88 = 0;
  d->_pg114 = 0;
  d->_pg116 = 0;
  d->_pg97_e3 = 0;
  d->_pg129 = 0;
  d->_pg134 = 0;
  d->_pg130_e2 = 0;
  d->_pg158 = 0;
  d->_pg156 = 0;
  d->_pg139 = 0;
  d->_pg179 = 0;
  d->_pg181_e3 = 0;
  d->_pg195 = 0;
  d->_pg173 = 0;
  d->_pg167 = 0;
  d->_pg176 = 0;
  d->_pg206 = 0;
  d->_pg213 = 0;
  d->_pg210 = 0;
  d->_pg202 = 0;
  d->_pg231 = 0;
  d->_pg211_e1 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg9 = d->_g9;
  d->_pg217 = d->_g217;
  d->_pg13 = d->_g13;
  d->_pg7_e1 = d->_g7_e1;
  d->_pg36 = d->_g36;
  d->_pg37 = d->_g37;
  d->_pg14 = d->_g14;
  d->_pg46 = d->_g46;
  d->_pg50 = d->_g50;
  d->_pg44_e1 = d->_g44_e1;
  d->_pg74 = d->_g74;
  d->_pg73 = d->_g73;
  d->_pg51_e2 = d->_g51_e2;
  d->_pg83 = d->_g83;
  d->_pg89 = d->_g89;
  d->_pg88 = d->_g88;
  d->_pg114 = d->_g114;
  d->_pg116 = d->_g116;
  d->_pg97_e3 = d->_g97_e3;
  d->_pg129 = d->_g129;
  d->_pg134 = d->_g134;
  d->_pg130_e2 = d->_g130_e2;
  d->_pg158 = d->_g158;
  d->_pg156 = d->_g156;
  d->_pg139 = d->_g139;
  d->_pg179 = d->_g179;
  d->_pg181_e3 = d->_g181_e3;
  d->_pg195 = d->_g195;
  d->_pg173 = d->_g173;
  d->_pg167 = d->_g167;
  d->_pg176 = d->_g176;
  d->_pg206 = d->_g206;
  d->_pg213 = d->_g213;
  d->_pg210 = d->_g210;
  d->_pg202 = d->_g202;
  d->_pg231 = d->_g231;
  d->_pg211_e1 = d->_g211_e1;
  d->_GO = 0;
}
