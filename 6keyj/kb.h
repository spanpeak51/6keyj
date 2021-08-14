#ifndef KB_H
#define KB_H

#include "quantum.h"

#define LAYOUT( \
      k00, k01, k02, \
      k10, k11, k12 \
) \
{ \
    { k00, k01, k02}, \
    { k10, k11, k12 }, \
}
#endif