// pixel_characters.h

// ピクセル文字の一部を8x4で定義する
#ifndef PIXEL_CHARACTERS_H
#define PIXEL_CHARACTERS_H

// ピクセル文字のサイズ
#define P_ROWS 8
#define P_COLS 4

// ピクセル文字の総数
#define P_KOSUU 128

// ピクセル文字を定義するマクロ
#define DEFINE_PIXEL_CHARACTER(name, ...) \
    static const int name[P_ROWS][P_COLS] = {__VA_ARGS__};

DEFINE_PIXEL_CHARACTER(P_nbsp,
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_excla,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})

DEFINE_PIXEL_CHARACTER(P_quot,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_sharp,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_dollar,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_percent,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_amp,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_apos,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_lparen,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_rparen,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_aster,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_plus,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_comma,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_minus,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_period,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_slash,
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 1, 0, 0},
                       {0, 1, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0})
DEFINE_PIXEL_CHARACTER(P_0,
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 0, 0, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_1,
                       {0, 0, 0, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_2,
                       {0, 1, 1, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 1, 1, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_3,
                       {0, 1, 1, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_4,
                       {0, 0, 0, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_5,
                       {0, 1, 1, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {0, 1, 1, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_6,
                       {0, 1, 1, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_7,
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 0, 0, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 0}, )

DEFINE_PIXEL_CHARACTER(P_8,
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_9,
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_colon,
                       {0, 0, 0, 0},
                       {0, 1, 1, 0},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0},
                       {0, 1, 1, 0},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0})
DEFINE_PIXEL_CHARACTER(P_scolon,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_lt,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_eq,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_gt, {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_question,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})
DEFINE_PIXEL_CHARACTER(P_at,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})

DEFINE_PIXEL_CHARACTER(P_A,
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1})

DEFINE_PIXEL_CHARACTER(P_B,
                       {1, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_C,
                       {0, 1, 1, 1},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {0, 1, 1, 1},
                       {0, 0, 0, 0})
DEFINE_PIXEL_CHARACTER(P_D,
                       {1, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_E,
                       {1, 1, 1, 1},
                       {1, 0, 0, 0},
                       {1, 1, 1, 0},
                       {1, 0, 0, 0},
                       {1, 1, 1, 1},
                       {1, 0, 0, 0},
                       {1, 1, 1, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_F,
                       {1, 1, 1, 1},
                       {1, 0, 0, 0},
                       {1, 1, 1, 0},
                       {1, 0, 0, 0},
                       {1, 1, 1, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {0, 0, 0, 0})
DEFINE_PIXEL_CHARACTER(P_G,
                       {0, 1, 1, 1},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 1, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_H,
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 1, 1, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_I,
                       {1, 1, 1, 1},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {1, 1, 1, 1},
                       {0, 0, 0, 0})
DEFINE_PIXEL_CHARACTER(P_J,
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_K,
                       {1, 0, 0, 1},
                       {1, 0, 1, 0},
                       {1, 1, 0, 0},
                       {1, 0, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_L,
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 1, 1, 1},
                       {0, 0, 0, 0})
DEFINE_PIXEL_CHARACTER(P_M,
                       {1, 0, 0, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 0, 1, 1},
                       {1, 0, 1, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_N,
                       {1, 0, 0, 1},
                       {1, 1, 0, 1},
                       {1, 1, 0, 1},
                       {1, 0, 1, 1},
                       {1, 0, 1, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_O,
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})
DEFINE_PIXEL_CHARACTER(P_P,
                       {1, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 1, 1, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_Q,
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 1, 1},
                       {1, 0, 1, 0},
                       {0, 1, 0, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_R,
                       {1, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 1, 1, 0},
                       {1, 0, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 0, 0, 0})
DEFINE_PIXEL_CHARACTER(P_S,
                       {0, 1, 1, 1},
                       {1, 0, 0, 0},
                       {1, 1, 1, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_T,
                       {1, 1, 1, 1},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_U,
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_V,
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 1, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 0, 0})
DEFINE_PIXEL_CHARACTER(P_W,
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 0, 1, 1},
                       {1, 0, 0, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_X,
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 1, 1, 0},
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_Y,
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 1, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_Z,
                       {1, 1, 1, 1},
                       {0, 0, 0, 1},
                       {0, 0, 1, 0},
                       {0, 1, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 1, 1, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_lbracket,
                       {1, 1, 1, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_bslash,
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {0, 1, 0, 0},
                       {0, 1, 0, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_rbracket,
                       {1, 1, 1, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {1, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_caret,
                       {0, 0, 1, 0},
                       {0, 1, 0, 0},
                       {1, 0, 0, 1},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_uscore,
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {1, 1, 1, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_bquote,
                       {1, 1, 0, 0},
                       {1, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_a,
                       {0, 0, 0, 0},
                       {0, 1, 1, 0},
                       {0, 0, 0, 1},
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_b,
                       {0, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_c,
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 1, 1, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_d,
                       {0, 0, 0, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_e,
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 1, 1, 0},
                       {1, 0, 0, 0},
                       {0, 1, 1, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_f,
                       {0, 0, 0, 0},
                       {0, 1, 1, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {0, 1, 1, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_g,
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {1, 1, 1, 1},
                       {1, 0, 1, 0},
                       {1, 1, 1, 0},
                       {0, 0, 0, 1},
                       {1, 1, 0, 0})

DEFINE_PIXEL_CHARACTER(P_h,
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 1, 0, 0},
                       {1, 0, 1, 0},
                       {1, 0, 1, 0},
                       {1, 0, 1, 0},
                       {1, 0, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_i,
                       {0, 0, 1, 0},
                       {0, 0, 0, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_j,
                       {0, 0, 0, 1},
                       {0, 0, 0, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {0, 0, 1, 0},
                       {1, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_k,
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 1, 0},
                       {1, 1, 0, 0},
                       {1, 0, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_l,
                       {0, 1, 0, 0},
                       {0, 1, 0, 0},
                       {0, 1, 0, 0},
                       {0, 1, 0, 0},
                       {0, 1, 0, 0},
                       {0, 1, 0, 0},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_m,
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {1, 1, 1, 0},
                       {1, 0, 1, 0},
                       {1, 0, 1, 0},
                       {1, 0, 1, 0},
                       {1, 0, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_n,
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {1, 1, 0, 0},
                       {1, 0, 1, 0},
                       {1, 0, 1, 0},
                       {1, 0, 1, 0},
                       {1, 0, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_o,
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_p,
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {1, 1, 0, 0},
                       {1, 0, 1, 0},
                       {1, 1, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_q,
                       {0, 0, 0, 0},
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 1},
                       {0, 0, 0, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_r,
                       {0, 0, 0, 0},
                       {1, 1, 0, 0},
                       {1, 0, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_s,
                       {0, 1, 1, 1},
                       {1, 0, 0, 0},
                       {0, 1, 1, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_t,
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {1, 1, 1, 1},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_u,
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 1},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_v,
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 1, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_w,
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {1, 0, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 1},
                       {0, 1, 0, 1},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_x,
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 1, 1, 0},
                       {0, 0, 1, 0},
                       {0, 1, 1, 0},
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_y,
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 1},
                       {0, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_z,
                       {1, 1, 1, 1},
                       {0, 0, 0, 1},
                       {0, 0, 1, 0},
                       {0, 1, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 1, 1, 1},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_lbrace,
                       {0, 0, 1, 0},
                       {0, 1, 0, 0},
                       {0, 1, 0, 0},
                       {1, 0, 0, 0},
                       {0, 1, 0, 0},
                       {0, 1, 0, 0},
                       {0, 0, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_pipe,
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_rbrace,
                       {0, 1, 0, 0},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 0, 0, 1},
                       {0, 0, 1, 0},
                       {0, 0, 1, 0},
                       {0, 1, 0, 0},
                       {0, 0, 0, 0})

DEFINE_PIXEL_CHARACTER(P_tilde,
                       {0, 0, 0, 0},
                       {0, 1, 0, 0},
                       {1, 0, 1, 0},
                       {0, 0, 0, 1},
                       {0, 0, 1, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0})

// ピクセル文字の辞書を定義するマクロ
#define DEFINE_PIXEL_CHARACTER_DICT() \
    static const int(*P_DICT[P_KOSUU])[P_ROWS][P_COLS] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, P_nbsp, P_excla, P_quot, P_sharp, P_dollar, P_percent, P_amp, P_apos, P_lparen, P_rparen, P_aster, P_plus, P_comma, P_minus, P_period, P_slash, P_0, P_1, P_2, P_3, P_4, P_5, P_6, P_7, P_8, P_9, P_colon, P_scolon, P_lt, P_eq, P_gt, P_question, P_at, P_A, P_B, P_C, P_D, P_E, P_F, P_G, P_H, P_I, P_J, P_K, P_L, P_M, P_N, P_O, P_P, P_Q, P_R, P_S, P_T, P_U, P_V, P_W, P_X, P_Y, P_Z, P_lbracket, P_bslash, P_rbracket, P_caret, P_uscore, P_bquote, P_a, P_b, P_c, P_d, P_e, P_f, P_g, P_h, P_i, P_j, P_k, P_l, P_m, P_n, P_o, P_p, P_q, P_r, P_s, P_t, P_u, P_v, P_w, P_x, P_y, P_z, P_lbrace, P_pipe, P_rbrace, P_tilde, NULL};

DEFINE_PIXEL_CHARACTER_DICT();

#endif // PIXEL_CHARACTERS_H
