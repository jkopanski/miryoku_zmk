// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Copied from MIRYOKU_ALTERNATIVES_BASE_DVORAK
// switched mouse with fun activation
#define MIRYOKU_LAYER_BASE \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
U_MT(LGUI, A),     U_MT(LALT, O),     U_MT(LCTRL, E),    U_MT(LSHFT, U),    &kp I,             &kp D,             U_MT(LSHFT, H),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT(LGUI, S),     \
U_LT(U_BUTTON, SLASH),U_MT(RALT, Q),     &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             U_MT(RALT, V),     U_LT(U_BUTTON, Z), \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_FUN, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_MOUSE, DEL),  U_NP,              U_NP

// since cnano has physical trackball I won't use mouse emulation layer,
// therefore I've used mouse activation to activate fun layer.
// In order for that to work nicely I need to make it flipped to the other side.
#define MIRYOKU_LAYER_FUN MIRYOKU_ALTERNATIVES_FUN_FLIP
