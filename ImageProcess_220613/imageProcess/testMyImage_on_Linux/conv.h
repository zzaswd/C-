#pragma once
#include<assert.h>
#include<cstdio>
#include "bmpheader.h"
#include<cstring>
#define CLIP(x) (x < 0) ? 0 : x > 255 ? 255 : x  // 