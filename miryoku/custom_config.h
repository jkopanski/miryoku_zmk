// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&kp B,             &kp W,             &kp P,             &kp O,             &kp SQT,             &kp DOT,             &kp V,             &kp D,             &kp L,             &kp J,             \
U_MT(LGUI, A),     U_MT(LALT, U),     U_MT(LCTRL, I),    U_MT(LSHFT, E),    &kp COMMA,             &kp C,             U_MT(LSHFT, T),    U_MT(LCTRL, S),    U_MT(LALT, R),     U_MT(LGUI, N),     \
U_LT(U_BUTTON, W), U_MT(RALT, Y),     &kp X,             &kp SLASH,             &kp K,             &kp M,             &kp Q,         &kp G,           U_MT(RALT, H), U_LT(U_BUTTON, F),\
U_NP,              U_NP,              U_LT(U_FUN, BSPC),  U_LT(U_NAV, RET), U_LT(U_SYM, TAB),  U_LT(U_SYM, ESC),U_LT(U_NUM, SPACE),U_LT(U_MEDIA, DEL),U_NP,              U_NP


//     BSP_NAV, ENT_MBO, TAB_MED,    ESC_SYM, SPC_NUM)

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LSHFT,         &kp L,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


// todo num, symbols, homerow mods