// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&kp B,             &kp W,             &kp P,             &kp O,             &kp SQT,             &kp DOT,             &kp V,             &kp D,             &kp L,             &kp J,             \
U_MT(LGUI, A),     U_MT(LALT, U),     U_MT(LSHFT, I),    U_MT(LCTRL, E),    &kp COMMA,             &kp C,             U_MT(LCTRL, T),    U_MT(LSHFT, S),    U_MT(LALT, R),     U_MT(LGUI, N),     \
U_LT(U_BUTTON, Z), U_MT(RALT, Y),     &kp X,             &kp SLASH,             &kp K,             &kp M,             &kp Q,         &kp G,           U_MT(RALT, H), U_LT(U_BUTTON, F),\
U_NP,              U_NP,              U_LT(U_FUN, BSPC),  U_LT(U_NAV, SPACE), U_LT(U_SYM, TAB),  U_LT(U_SYM, ESC),U_LT(U_NUM, SPACE),U_LT(U_MEDIA, DEL),U_NP,              U_NP


//     BSP_NAV, ENT_MBO, TAB_MED,    ESC_SYM, SPC_NUM)

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LSHFT,         &kp LCTRL,         U_NA,              &kp BSPC,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp DEL,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp RET,          &kp DEL,           U_NP,              U_NP


// todo num, symbols, homerow mods 
// delete, backspace
// mouse k


#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
