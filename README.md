```
#include "pixel_characters.h"

(中略)

int matrix[P_ROWS][P_COLS];
memcpy(matrix, *P_DICT[ASCIInum], sizeof(int) * P_ROWS * P_COLS);
```
で呼び出せる
