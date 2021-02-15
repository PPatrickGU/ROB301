/* TP3_mapping.c */

#include "TP3_type.h"
#include "TP3_interface.h"
#include "TP3_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(array_3);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_14, 1);
DECL_SCOPE(scope_13, 3);
DECL_SCOPE(scope_12, 1);
DECL_SCOPE(scope_11, 1);
DECL_SCOPE(scope_10, 3);
DECL_SCOPE(scope_9, 1);
DECL_SCOPE(scope_8, 3);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 1);
DECL_SCOPE(scope_4, 5);
DECL_SCOPE(scope_3, 12);
DECL_SCOPE(scope_2, 1);
DECL_SCOPE(scope_1, 4);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_KO_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_KO_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_OK_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_OK_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_x0_ko_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_x0_ko_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_x1_ko_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_x1_ko_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_x2_ko_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_x2_ko_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_OK_x0_ko_3_OK_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_OK_x0_ko_3_OK_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_OK_x1_ko_1_OK_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_OK_x1_ko_1_OK_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_OK_x2_ko_2_OK_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_OK_x2_ko_2_OK_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_x0_ko_KO_1_x0_ko_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_x0_ko_KO_1_x0_ko_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_x1_ko_KO_1_x1_ko_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_x1_ko_KO_1_x1_ko_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_x2_ko_KO_1_x2_ko_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_x2_ko_KO_1_x2_ko_SM1; }

/* mapping definition */

const MappingIterator iter_array_3 = { "array", 3, 3, NULL };

const MappingEntry scope_14_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_x0_ko_KO_1_x0_ko_SM1, NULL, 1, 0 }
};
const MappingScope scope_14 = {
    "E1_Q2/ E1_Q2SM1:x0_ko:<1",
    scope_14_entries, 1
};

const MappingEntry scope_13_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_x0_ko_KO_1_x0_ko_SM1, &scope_14, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_x0_ko_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_x0_ko_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_x0_ko_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_x0_ko_SM1, NULL, 1, 2 }
};
const MappingScope scope_13 = {
    "E1_Q2/ E1_Q2SM1:x0_ko:",
    scope_13_entries, 3
};

const MappingEntry scope_12_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_KO_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_KO_SM1, NULL, 1, 0 }
};
const MappingScope scope_12 = {
    "E1_Q2/ E1_Q2SM1:KO:",
    scope_12_entries, 1
};

const MappingEntry scope_11_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_x2_ko_KO_1_x2_ko_SM1, NULL, 1, 0 }
};
const MappingScope scope_11 = {
    "E1_Q2/ E1_Q2SM1:x2_ko:<1",
    scope_11_entries, 1
};

const MappingEntry scope_10_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_x2_ko_KO_1_x2_ko_SM1, &scope_11, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_x2_ko_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_x2_ko_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_x2_ko_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_x2_ko_SM1, NULL, 1, 2 }
};
const MappingScope scope_10 = {
    "E1_Q2/ E1_Q2SM1:x2_ko:",
    scope_10_entries, 3
};

const MappingEntry scope_9_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_x1_ko_KO_1_x1_ko_SM1, NULL, 1, 0 }
};
const MappingScope scope_9 = {
    "E1_Q2/ E1_Q2SM1:x1_ko:<1",
    scope_9_entries, 1
};

const MappingEntry scope_8_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_x1_ko_KO_1_x1_ko_SM1, &scope_9, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_x1_ko_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_x1_ko_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_x1_ko_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_x1_ko_SM1, NULL, 1, 2 }
};
const MappingScope scope_8 = {
    "E1_Q2/ E1_Q2SM1:x1_ko:",
    scope_8_entries, 3
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_OK_x0_ko_3_OK_SM1, NULL, 1, 0 }
};
const MappingScope scope_7 = {
    "E1_Q2/ E1_Q2SM1:OK:<3",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_OK_x2_ko_2_OK_SM1, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "E1_Q2/ E1_Q2SM1:OK:<2",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_OK_x1_ko_1_OK_SM1, NULL, 1, 0 }
};
const MappingScope scope_5 = {
    "E1_Q2/ E1_Q2SM1:OK:<1",
    scope_5_entries, 1
};

const MappingEntry scope_4_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_OK_x1_ko_1_OK_SM1, &scope_5, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_OK_x2_ko_2_OK_SM1, &scope_6, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_OK_x0_ko_3_OK_SM1, &scope_7, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5_OK_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_OK_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6_OK_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_OK_SM1, NULL, 1, 4 }
};
const MappingScope scope_4 = {
    "E1_Q2/ E1_Q2SM1:OK:",
    scope_4_entries, 5
};

const MappingEntry scope_3_entries[12] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "OK:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_OK_SM1, &scope_4, 1, 7 },
    /* 8 */ { MAP_STATE, "x1_ko:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_x1_ko_SM1, &scope_8, 1, 8 },
    /* 9 */ { MAP_STATE, "x2_ko:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_x2_ko_SM1, &scope_10, 1, 9 },
    /* 10 */ { MAP_STATE, "KO:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_KO_SM1, &scope_12, 1, 10 },
    /* 11 */ { MAP_STATE, "x0_ko:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_x0_ko_SM1, &scope_13, 1, 11 }
};
const MappingScope scope_3 = {
    "E1_Q2/ E1_Q2SM1:",
    scope_3_entries, 12
};

const MappingEntry scope_2_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_2 = {
    "array_bool_3",
    scope_2_entries, 1
};

const MappingEntry scope_1_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "y", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.y, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "error", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.error, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "x", NULL, sizeof(array_bool_3), (size_t)&inputs_ctx.x, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 2 },
    /* 3 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_3, 1, 3 }
};
const MappingScope scope_1 = {
    "E1_Q2/ E1_Q2",
    scope_1_entries, 4
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "E1_Q2", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
