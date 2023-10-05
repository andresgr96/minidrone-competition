#include "rtwtypes.h"
#include "traceLine_Cky3vk4l.h"
#include "mwmathutil.h"

real_T traceLine_Cky3vk4l(const real_T drone_position[2], const real_T step[2],
  const boolean_T BW[19200], uint8_T R[19200], uint8_T G[19200], uint8_T B[19200],
  const real_T lineColor[3])
{
  real_T len;
  real_T new_point;
  real_T new_point_idx_0;
  int32_T i;
  int32_T tmp;
  boolean_T exitg1;
  len = 0.0;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 160)) {
    new_point_idx_0 = muDoubleScalarRound((real_T)(i + 1) * step[0] +
      drone_position[0]);
    new_point = muDoubleScalarRound((real_T)(i + 1) * step[1] + drone_position[1]);
    if ((new_point_idx_0 > 0.0) && (new_point > 0.0) && (new_point_idx_0 <=
         120.0) && (new_point <= 160.0)) {
      tmp = (int32_T)(((real32_T)new_point - 1.0F) * 120.0F + (real32_T)
                      new_point_idx_0) - 1;
      if (BW[tmp]) {
        new_point_idx_0 = muDoubleScalarRound(lineColor[0]);
        if (new_point_idx_0 < 256.0) {
          if (new_point_idx_0 >= 0.0) {
            R[tmp] = (uint8_T)new_point_idx_0;
          } else {
            R[tmp] = 0U;
          }
        } else if (new_point_idx_0 >= 256.0) {
          R[tmp] = MAX_uint8_T;
        } else {
          R[tmp] = 0U;
        }

        new_point_idx_0 = muDoubleScalarRound(lineColor[1]);
        if (new_point_idx_0 < 256.0) {
          if (new_point_idx_0 >= 0.0) {
            G[tmp] = (uint8_T)new_point_idx_0;
          } else {
            G[tmp] = 0U;
          }
        } else if (new_point_idx_0 >= 256.0) {
          G[tmp] = MAX_uint8_T;
        } else {
          G[tmp] = 0U;
        }

        new_point_idx_0 = muDoubleScalarRound(lineColor[2]);
        if (new_point_idx_0 < 256.0) {
          if (new_point_idx_0 >= 0.0) {
            B[tmp] = (uint8_T)new_point_idx_0;
          } else {
            B[tmp] = 0U;
          }
        } else if (new_point_idx_0 >= 256.0) {
          B[tmp] = MAX_uint8_T;
        } else {
          B[tmp] = 0U;
        }

        len++;
        i++;
      } else {
        exitg1 = true;
      }
    } else {
      exitg1 = true;
    }
  }

  return len;
}
