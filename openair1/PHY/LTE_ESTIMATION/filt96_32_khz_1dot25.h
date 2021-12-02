/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

short filt24_0_khz_1dot25[24] __attribute__((aligned(32))) ={
  2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_0_dcl_khz_1dot25[24] __attribute__((aligned(32))) ={
  2341,4681,7022,9362,11703,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_0_dcr_khz_1dot25[24] __attribute__((aligned(32))) ={
  2730,5461,8192,10922,13653,16384,14043,11703,9362,7022,4681,0,0,0,0,0,0,0,0,0,0,0,0
};

short filt24_1_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_1_dcl_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,4681,7022,9362,11703,14043,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_1_dcr_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,2730,5461,8192,10922,13653,16384,14043,11703,9362,7022,4681,0,0,0,0,0,0,0,0,0,0,0,0
};


short filt24_2_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_2_dcl_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,2341,4681,7022,9362, 11703,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_2_dcr_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,2730,5461,8192,10922,13653,16384,14043,11703,9362,4681,2341,0,0,0,0,0,0,0,0,0,0,0
};

//  X X X Y | X X X X | X Y X X
short filt24_3_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0
};
short filt24_3_dcl_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,2341,4681,7022,9362,14043,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0
};
//  X X X Y | X X DC X X | X Y X X
short filt24_3_dcr_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,2730,5461,8192,10922,13653,16384,14043,11703,7022,4681,2341,0,0,0,0,0,0,0,0,0,0
};


short filt24_4_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0
};
short filt24_4_dcl_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,2341,7022,9362,11703,14043,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0
};
short filt24_4_dcr_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,2730,5461,8192,10922,13653,16384,14043,11703,7022,4681,2341,0,0,0,0,0,0,0,0,0
};

short filt24_5_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0
};
//  X X X Y | X X DC X X | X Y X X
short filt24_5_dcl_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,2341,4681,9362,11703,14043,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0
};
short filt24_5_dcr_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,2730,5461,8192,10922,13653,16384,11703,9362,7022,4681,2730,0,0,0,0,0,0,0,0
};


short filt24_6_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0
};
short filt24_6_dcl_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,0,4681,7022,9362,11703,14043,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0
};
short filt24_6_dcr_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,0,2730,5461,8192,10922,13653,16384,14043,11703,9362,7022,4681,0,0,0,0,0,0,0
};


short filt24_7_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,0,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0
};
short filt24_7_dcl_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,0,0,4681,7022,9362,11703,14043,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0
};
short filt24_7_dcr_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,0,0,2730,5461,8192,10922,13653,16384,14043,11703,9362,7022,4681,0,0,0,0,0,0
};

short filt24_0l_khz_1dot25[24] __attribute__((aligned(32))) ={
  30037,27306,24576,21845,19114,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_1l_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,30037,27306,24576,21845,19114,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_2l_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,30037,27306,24576,21845,19114,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_3l_khz_1dot25[24] __attribute__((aligned(32))) ={
  //0,0,0,30037,27306,24576,21845,19114,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0};
  0,0,0,0,0,24576,21845,19114,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0
};
short filt24_4l_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,30037,27306,24576,21845,19114,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0
};
short filt24_5l_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,30037,27306,24576,21845,19114,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0
};
short filt24_6l_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,0,30037,27306,24576,21845,19114,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0
};
short filt24_7l_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,0,0,30037,27306,24576,21845,19114,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0
};
short filt24_0l2_khz_1dot25[24] __attribute__((aligned(32))) ={
  2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_1l2_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_2l2_khz_1dot25[24] __attribute__((aligned(32))) ={
  -2730,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_3l2_khz_1dot25[24] __attribute__((aligned(32))) ={
  -5461,-2730,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0,0
};
short filt24_4l2_khz_1dot25[24] __attribute__((aligned(32))) ={
  -8192,-5461,-2730,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0,0
};
short filt24_5l2_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,-8192,-5461,-2730,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0,0
};
short filt24_6l2_khz_1dot25[24] __attribute__((aligned(32))) ={
  -13653,-10922,-8192,-5461,-2730,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0,0
};
short filt24_7l2_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,-13653,-10922,-8192,-5461,-2730,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,0,0,0,0,0
};
short filt24_0r_khz_1dot25[24] __attribute__((aligned(32))) ={
  2730,5461,8192,10922,13653,16384,19114,21845,24576,27306,30037,0,0,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_1r_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,2730,5461,8192,10922,13653,16384,19114,21845,24576,27306,30037,0,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_2r_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,2730,5461,8192,10922,13653,16384,19114,21845,24576,27306,30037,0,0,0,0,0,0,0,0,0,0,0
};
short filt24_3r_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,2730,5461,8192,10922,13653,16384,19114,21845,24576,27306,30037,0,0,0,0,0,0,0,0,0,0
};
short filt24_4r_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,2730,5461,8192,10922,13653,16384,19114,21845,24576,27306,30037,0,0,0,0,0,0,0,0,0
};
short filt24_5r_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,2730,5461,8192,10922,13653,16384,19114,21845,24576,27306,30037,0,0,0,0,0,0,0,0
};
short filt24_6r_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,0,2730,5461,8192,10922,13653,16384,19114,21845,24576,27306,30037,0,0,0,0,0,0,0
};
short filt24_7r_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,0,0,2730,5461,8192,10922,13653,16384,19114,21845,24576,27306,30037,0,0,0,0,0,0
};
short filt24_0r2_khz_1dot25[24] __attribute__((aligned(32))) ={  /****/
  2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,-2730,-5461,-8192,-10922,-13653,0,0,0,0,0,0,0
};
short filt24_1r2_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,-2730,-5461,-8192,-10922,-13653,0,0,0,0,0,0
};
short filt24_2r2_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,-2730,-5461,-8192,-10922,-13653,0,0,0,0,0
};
short filt24_3r2_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,-2730,-5461,-8192,-10922,-13653,0,0,0,0
};
short filt24_4r2_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,-2730,-5461,-8192,-10922,-13653,0,0,0
};
short filt24_5r2_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,-2730,-5461,-8192,-10922,-13653,0,0
};
short filt24_6r2_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,-2730,-5461,-8192,-10922,-13653,0
};
short filt24_7r2_khz_1dot25[24] __attribute__((aligned(32))) ={
  0,0,0,0,0,0,0,2730,5461,8192,10922,13653,16384,13653,10922,8192,5461,2730,0,-2730,-5461,-8192,-10922,-13653
};
