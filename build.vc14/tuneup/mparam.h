/* Generated by MPFR's tuneup.c, 2015-12-08, system compiler */


#ifndef MPFR_TUNE_CASE
#define MPFR_TUNE_CASE "src/mparam.h"
#endif

#define MPFR_MULHIGH_TAB  \
 -1,0,0,0,-1,-1,-1,0,0,0,0,0,0,0,0,0, \
 0,0,0,0,0,0,15,13,0,15,20,18,20,22,18,20, \
 20,20,22,20,26,26,24,22,26,28,28,30,28,28,32,28, \
 36,32,36,32,40,36,40,40,40,40,40,44,40,44,44,36, \
 44,40,44,48,48,44,44,48,48,52,48,52,52,52,48,52, \
 52,48,52,52,56,52,56,56,64,64,64,60,64,64,56,52, \
 64,72,88,71,64,80,56,72,72,80,80,71,80,72,72,78, \
 72,88,80,80,88,80,80,78,79,80,88,88,80,80,88,88, \
 88,80,88,95,80,88,88,80,96,88,96,88,80,104,101,103, \
 88,89,102,103,87,104,101,103,95,104,117,100,114,104,104,103, \
 117,111,104,123,117,117,115,117,101,117,128,117,120,115,116,132, \
 117,120,122,141,116,132,129,129,129,129,129,129,129,129,129,117, \
 141,132,117,141,132,144,129,132,144,143,153,131,144,156,152,129, \
 153,151,141,144,138,141,153,153,165,156,151,144,165,153,165,151, \
 153,168,153,153,151,165,153,156,164,165,153,148,148,162,163,153, \
 168,177,153,163,165,189,168,162,189,189,188,189,165,189,189,177, \
 189,192,187,177,176,189,188,192,184,187,189,187,165,187,188,187, \
 191,213,212,211,189,190,189,212,212,212,216,177,212,188,212,212, \
 211,216,213,207,213,216,213,216,213,211,237,216,216,192,211,240, \
 237,213,236,236,240,240,237,249,216,213,237,237,211,240,239,240, \
 237,237,250,249,252,237,237,212,237,237,250,235,252,237,235,252, \
 252,240,251,236,240,251,280,246,240,236,236,237,236,249,283,280, \
 240,250,246,237,250,252,252,255,236,252,240,249,282,284,236,252, \
 251,283,252,284,252,252,284,283,236,283,284,284,315,252,343,284, \
 313,284,283,284,284,285,284,343,288,314,250,284,282,316,315,284, \
 315,344,315,343,344,337,291,316,339,344,336,341,339,313,342,342, \
 313,344,315,284,343,342,337,335,343,316,339,342,343,334,341,372, \
 344,376,335,344,282,375,344,316,343,375,373,344,341,374,376,343, \
 342,371,336,344,374,341,340,343,342,340,374,344,339,344,344,341, \
 342,375,344,344,344,373,342,339,328,369,384,375,373,341,375,343, \
 343,344,406,374,376,344,352,373,371,376,352,376,375,372,376,370, \
 375,376,375,407,368,408,375,407,405,376,391,404,408,408,420,438, \
 408,408,404,403,376,391,406,432,406,403,407,407,408,405,408,400, \
 413,405,440,407,408,408,401,407,399,427,469,440,440,440,439,439, \
 408,423,416,406,440,470,438,407,440,401,438,471,439,439,431,407, \
 436,438,438,399,448,439,465,440,439,440,439,438,437,438,471,472, \
 439,440,437,440,463,438,472,416,440,471,472,504,439,472,472,440, \
 470,472,470,464,439,439,504,472,469,472,471,439,469,562,469,504, \
 472,440,504,472,438,504,504,502,501,470,502,472,502,503,504,511, \
 503,520,434,520,502,501,496,520,559,499,504,541,504,563,500,518, \
 568,499,568,499,502,542,499,504,565,567,564,564,502,559,503,468, \
 566,567,504,563,472,503,500,566,567,501,563,575,503,564,503,502, \
 503,567,566,567,566,565,563,562,568,568,567,568,567,565,565,561, \
 499,568,568,568,559,561,568,568,568,567,568,561,567,562,568,567, \
 567,631,557,568,622,568,568,567,560,567,632,568,568,564,574,565, \
 567,631,563,566,568,563,632,565,568,564,627,632,562,629,622,626, \
 629,628,632,629,568,632,568,566,632,630,631,630,628,628,632,559, \
 623,631,630,631,608,630,631,632,632,632,629,627,630,632,640,632, \
 632,568,626,627,626,600,692,563,694,631,689,632,627,695,567,631, \
 696,628,627,616,629,632,628,629,630,568,691,631,632,683,694,631, \
 631,617,631,631,695,632,619,678,632,627,631,696,694,696,632,630, \
 631,632,631,629,694,693,679,696,630,704,696,696,628,696,681,691, \
 696,696,622,696,683,693,695,694,632,696,696,690,640,632,692,626, \
 674,691,693,694,694,682,695,689,694,686,696,695,696,630,691,692, \
 695,689,690,693,695,696,696,694,693,689,696,694,689,696,696,693, \
 696,686,695,696,694,692,691,692,693,689,695,753,690,696,766,757, \
 703,760,696,760,691,762,694,691,760,756,696,758,760,696,757,694, \
 759,757,756,756,759,758,692,757,694,759,696,759,695,760,696,757, \
 755,821,760,754,760,756,752,757,760,696,694,758,692,760,753,760, \
 760,760,759,758,822,757,760,758,757,712,768,734,759,824,696,759, \
 694,822,758,690,756,821,823,756,760,820,756,758,758,824,768,791, \
 768,824,756,824,822,823,824,810,760,759,824,760,822,760,759,820, \
 824,759,749,806,758,820,824,758,836,855,750,820,811,821,767,818, \
 823,823,818,824,823,816,760,927,821,788,824,823,824,820,824,756 \
  
#define MPFR_SQRHIGH_TAB  \
 -1,0,0,0,0,-1,-1,-1,7,-1,7,7,9,9,9,11, \
 11,10,11,11,12,12,13,15,15,16,15,15,16,16,19,19, \
 19,20,21,19,20,20,21,22,22,22,23,23,25,25,26,27, \
 32,30,30,32,28,33,30,34,32,38,32,38,36,40,36,36, \
 34,38,42,37,44,36,40,41,38,40,40,40,42,40,46,46, \
 42,44,48,43,48,49,46,48,46,49,51,48,64,48,51,49, \
 52,60,59,53,64,54,60,60,64,68,68,64,64,64,66,64, \
 60,58,64,64,60,75,64,68,66,64,64,67,80,69,72,68, \
 71,72,70,72,72,72,76,78,78,76,80,77,83,80,76,76, \
 80,80,80,85,82,76,82,80,80,91,95,80,88,84,84,87, \
 92,100,87,84,84,96,92,92,94,96,95,104,104,94,96,96, \
 96,100,96,100,100,118,96,97,96,104,108,118,96,120,107,120, \
 100,108,128,117,120,116,104,116,120,104,136,103,120,119,120,119, \
 120,128,121,119,127,127,119,112,128,124,118,116,128,128,118,127, \
 116,132,122,130,145,120,136,119,152,118,120,120,128,127,128,143, \
 135,144,136,129,132,144,127,132,127,127,136,127,144,136,142,136, \
 144,149,144,156,144,136,144,136,152,156,160,145,150,144,152,145, \
 143,138,177,152,176,177,175,176,156,177,144,177,177,164,176,150, \
 152,175,176,154,177,175,176,177,174,176,173,176,172,177,187,193, \
 176,180,177,189,187,176,186,189,199,189,188,177,186,194,200,203, \
 192,189,188,201,194,201,193,189,189,199,189,177,175,199,200,201, \
 200,200,201,201,176,211,224,213,207,207,223,189,212,213,201,189, \
 188,225,213,222,219,225,201,225,198,201,225,220,200,200,213,213, \
 211,211,212,200,189,200,237,208,203,213,201,235,223,212,203,225, \
 213,201,224,225,223,200,237,224,225,211,225,237,225,210,216,225, \
 212,213,235,234,237,212,223,237,224,235,223,221,228,237,224,228, \
 225,228,236,237,235,236,235,228,214,235,268,240,236,221,230,234, \
 234,251,224,237,225,279,230,240,225,237,280,283,236,237,235,237, \
 237,243,240,239,241,251,240,237,260,261,237,237,236,237,316,243, \
 272,252,240,265,268,237,237,286,264,243,263,252,252,288,281,284, \
 284,284,283,274,280,281,264,282,307,315,307,264,284,272,313,268, \
 308,307,268,316,307,300,291,303,303,315,316,307,300,288,300,300, \
 314,300,300,315,308,303,332,332,307,311,300,328,316,280,324,313, \
 284,316,316,316,315,282,309,313,328,321,376,283,313,308,313,291, \
 315,332,292,296,339,316,376,320,308,300,376,376,376,375,376,383, \
 376,332,300,376,392,375,313,403,314,382,379,304,345,384,407,389, \
 392,316,392,375,376,383,375,381,376,376,375,376,392,376,392,392, \
 348,376,376,329,375,389,376,399,416,375,418,438,391,472,382,424, \
 392,392,464,364,375,464,414,354,472,376,392,410,407,345,408,471, \
 415,415,416,433,376,376,416,469,416,423,472,440,472,472,384,376, \
 400,439,340,382,389,383,423,471,472,437,391,375,362,421,376,440, \
 470,472,382,421,480,501,424,471,406,431,463,467,420,472,472,381, \
 472,471,471,504,472,424,472,469,424,471,471,472,471,503,471,472, \
 472,471,503,472,504,440,472,504,504,467,472,470,472,472,472,472, \
 500,472,504,392,503,503,472,472,472,502,495,502,472,503,503,470, \
 480,472,504,503,503,496,504,466,504,503,502,502,503,504,472,531, \
 552,463,503,501,504,480,494,514,470,504,502,496,503,455,504,459, \
 554,504,504,568,502,504,502,472,504,504,472,501,503,482,528,471, \
 472,503,504,504,584,502,500,512,503,536,536,504,502,502,503,504, \
 504,534,535,470,560,536,470,502,504,504,502,536,567,503,493,501, \
 503,466,532,502,504,503,536,503,535,536,566,535,536,623,515,536, \
 501,568,532,504,567,502,568,536,536,568,565,535,566,504,560,503, \
 600,518,596,600,567,567,568,568,536,519,566,622,568,567,566,568, \
 600,529,536,561,597,533,600,568,536,563,628,534,568,567,600,535, \
 535,536,499,600,561,567,600,566,568,470,598,520,520,619,534,560, \
 599,536,568,599,597,599,600,567,568,534,566,599,662,632,655,562, \
 536,568,578,568,567,599,632,599,600,566,614,530,536,599,598,565, \
 722,661,597,631,661,630,498,504,632,596,500,598,632,600,621,631, \
 599,596,469,499,638,621,624,596,616,632,728,695,599,568,632,663, \
 663,597,551,600,624,614,631,599,632,632,664,600,631,600,662,613, \
 598,694,535,664,628,630,511,597,632,565,630,630,662,581,664,610, \
 631,630,664,659,582,661,597,652,664,629,548,662,632,631,527,726, \
 696,649,631,627,708,630,632,660,726,630,524,629,627,632,713,607, \
 672,637,664,674,598,758,688,637,599,632,632,598,663,694,632,599 \
  
#define MPFR_DIVHIGH_TAB  \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*0-15*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*16-31*/ \
 0,0,0,0,0,0,0,0,0,0,26,0,0,0,26,0, /*32-47*/ \
 0,0,0,0,29,34,0,0,0,0,0,32,32,33,0,36, /*48-63*/ \
 38,35,0,36,0,36,41,40,0,0,44,40,40,44,46,44, /*64-79*/ \
 46,52,45,48,52,48,46,48,48,46,50,48,52,48,56,54, /*80-95*/ \
 57,60,57,51,52,53,57,56,56,64,61,58,65,64,60,64, /*96-111*/ \
 65,58,64,60,60,60,64,61,64,72,72,72,67,68,72,73, /*112-127*/ \
 80,80,76,73,81,73,80,80,89,88,80,73,72,73,88,81, /*128-143*/ \
 80,81,88,81,80,76,92,88,96,78,92,80,89,100,89,96, /*144-159*/ \
 88,89,96,90,88,96,104,90,97,90,96,96,104,88,96,96, /*160-175*/ \
 99,100,96,96,96,98,96,96,96,108,112,112,96,102,100,104, /*176-191*/ \
 112,106,103,99,111,112,112,108,112,108,128,112,104,112,121,118, /*192-207*/ \
 114,116,107,120,120,120,128,128,116,121,113,112,130,114,120,113, /*208-223*/ \
 128,120,120,124,128,126,127,144,119,129,120,120,127,128,121,129, /*224-239*/ \
 145,124,128,144,128,128,129,144,128,128,129,144,144,144,137,146, /*240-255*/ \
 145,144,144,144,145,145,147,160,144,160,145,146,152,160,144,144, /*256-271*/ \
 144,176,152,144,176,144,148,176,176,144,176,160,162,160,152,160, /*272-287*/ \
 160,159,176,176,176,161,192,176,176,188,160,164,159,177,160,176, /*288-303*/ \
 160,177,177,176,177,177,192,176,177,176,159,190,161,176,161,161, /*304-319*/ \
 192,178,193,176,176,176,191,176,181,191,192,191,176,192,208,175, /*320-335*/ \
 192,208,176,193,176,208,192,204,200,193,177,208,177,176,190,192, /*336-351*/ \
 192,196,194,200,192,208,192,208,208,200,200,208,192,193,201,208, /*352-367*/ \
 192,197,200,192,193,224,200,192,192,208,195,209,208,208,208,193, /*368-383*/ \
 208,215,224,200,206,209,224,205,204,210,208,208,212,200,208,208, /*384-399*/ \
 208,212,225,211,208,224,224,224,224,226,217,232,209,225,227,229, /*400-415*/ \
 256,224,256,228,216,216,225,240,224,256,224,223,223,288,232,231, /*416-431*/ \
 224,232,223,232,257,225,256,255,229,257,256,256,256,224,263,258, /*432-447*/ \
 254,245,273,240,239,288,256,238,269,258,258,257,256,257,258,240, /*448-463*/ \
 256,255,288,258,256,276,256,289,280,288,288,257,242,256,258,282, /*464-479*/ \
 272,291,258,295,288,271,289,289,258,288,256,256,288,256,253,258, /*480-495*/ \
 292,288,287,288,256,288,288,288,290,288,288,286,280,258,290,290, /*496-511*/ \
 289,258,288,292,305,288,292,320,269,289,288,304,305,321,289,321, /*512-527*/ \
 287,352,289,348,287,320,290,288,288,288,288,323,288,288,288,292, /*528-543*/ \
 288,288,288,289,304,288,304,304,318,322,304,320,321,304,320,289, /*544-559*/ \
 288,296,284,320,289,292,352,288,319,352,352,320,288,322,304,320, /*560-575*/ \
 304,318,343,327,320,353,322,319,352,320,316,354,353,352,324,352, /*576-591*/ \
 352,352,324,320,320,320,304,304,320,352,352,336,353,354,320,354, /*592-607*/ \
 320,352,352,320,353,354,319,354,346,352,322,352,317,354,356,354, /*608-623*/ \
 320,320,352,368,353,388,320,352,351,352,352,323,320,351,352,351, /*624-639*/ \
 384,354,352,352,352,353,352,349,378,384,351,352,346,350,352,354, /*640-655*/ \
 384,352,360,352,356,336,384,352,392,352,384,352,384,352,384,354, /*656-671*/ \
 388,416,354,352,384,354,353,413,350,348,384,387,352,350,351,383, /*672-687*/ \
 353,385,356,352,384,353,352,400,392,416,384,420,384,376,354,354, /*688-703*/ \
 384,384,386,417,383,384,384,420,382,384,384,384,383,388,384,409, /*704-719*/ \
 416,385,384,384,422,416,413,416,376,416,416,418,412,400,407,384, /*720-735*/ \
 384,416,414,384,382,416,384,418,418,420,416,408,416,416,384,418, /*736-751*/ \
 415,378,418,384,432,380,427,422,416,414,432,424,420,416,424,396, /*752-767*/ \
 417,432,412,416,465,413,400,405,416,417,449,416,409,416,418,400, /*768-783*/ \
 432,416,411,400,415,418,423,420,432,416,430,462,419,413,414,401, /*784-799*/ \
 416,420,416,432,480,448,416,416,468,432,424,434,412,480,416,416, /*800-815*/ \
 440,473,414,417,416,464,421,425,464,468,480,480,448,420,450,464, /*816-831*/ \
 480,462,463,419,466,466,424,465,480,451,461,448,458,447,451,480, /*832-847*/ \
 448,478,450,480,432,496,464,456,480,480,483,452,453,474,467,464, /*848-863*/ \
 480,458,468,468,511,480,466,462,441,474,466,461,544,468,469,455, /*864-879*/ \
 448,462,450,462,456,464,480,480,468,480,546,468,460,463,463,465, /*880-895*/ \
 461,514,458,480,468,480,464,460,460,462,480,472,510,466,480,480, /*896-911*/ \
 468,466,514,464,464,464,480,466,480,464,498,464,480,482,466,503, /*912-927*/ \
 500,512,510,488,481,480,496,484,576,512,560,472,576,516,568,566, /*928-943*/ \
 514,484,528,576,576,482,512,513,484,560,576,576,576,480,611,576, /*944-959*/ \
 484,516,576,516,576,511,580,513,576,552,512,584,564,503,513,578, /*960-975*/ \
 512,608,510,580,512,516,576,584,584,576,516,528,544,559,512,592, /*976-991*/ \
 560,582,561,504,528,610,568,600,612,581,560,632,640,512,608,556, /*992-1007*/ \
 608,564,624,576,608,606,576,564,582,608,576,576,600,528,592,558 /*1008-1023*/ \
  
#define MPFR_MUL_THRESHOLD 11 /* limbs */
#define MPFR_SQR_THRESHOLD 16 /* limbs */
#define MPFR_DIV_THRESHOLD 1 /* limbs */
#define MPFR_EXP_2_THRESHOLD 1022 /* bits */
#define MPFR_EXP_THRESHOLD 10465 /* bits */
#define MPFR_SINCOS_THRESHOLD 24301 /* bits */
#define MPFR_AI_THRESHOLD1 -5323 /* threshold for negative input of mpfr_ai */
#define MPFR_AI_THRESHOLD2 341
#define MPFR_AI_THRESHOLD3 8456
/* Tuneup completed successfully, took 1878 seconds */
