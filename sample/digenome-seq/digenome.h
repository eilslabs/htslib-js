#include "htslib/sam.h"

void digenome(htsFile *fp, int min_mapq, int overhang, int min_f, int min_r, float min_score, int min_depth_f, int min_depth_r, float min_ratio_f, float min_ratio_r, void (*callback)(char*, int, int, int, int, int, float, float, float) );
