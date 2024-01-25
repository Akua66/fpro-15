```
#include "pixel_characters.h"

(中略)

int matrix[P_ROWS][P_COLS];
memcpy(matrix, *P_DICT[ASCIInum], sizeof(int) * P_ROWS * P_COLS);
```
で呼び出せる


# note
C言語の文字の実体はASCIIの数字なので、それをインデックスとして用いて該当する配列の要素にアクセスする

的なことを考察に書けばいい
