/* projet_operators_mapping.c */

#include "projet_operators_type.h"
#include "projet_operators_interface.h"
#include "projet_operators_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_13, 1);
DECL_SCOPE(scope_12, 1);
DECL_SCOPE(scope_11, 2);
DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 2);
DECL_SCOPE(scope_8, 1);
DECL_SCOPE(scope_7, 2);
DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 1);
DECL_SCOPE(scope_4, 1);
DECL_SCOPE(scope_3, 4);
DECL_SCOPE(scope_2, 12);
DECL_SCOPE(scope_1, 30);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_test_valiid_SSM_st_Eliminate_1_test_valiid(void* pHandle) { return *(SSM_ST_test_valiid*)pHandle == SSM_st_Eliminate_1_test_valiid; }
static int isActive_SSM_ST_test_valiid_SSM_st_Eliminate_2_test_valiid(void* pHandle) { return *(SSM_ST_test_valiid*)pHandle == SSM_st_Eliminate_2_test_valiid; }
static int isActive_SSM_ST_test_valiid_SSM_st_Eliminate_3_test_valiid(void* pHandle) { return *(SSM_ST_test_valiid*)pHandle == SSM_st_Eliminate_3_test_valiid; }
static int isActive_SSM_ST_test_valiid_SSM_st_Invalid_test_valiid(void* pHandle) { return *(SSM_ST_test_valiid*)pHandle == SSM_st_Invalid_test_valiid; }
static int isActive_SSM_ST_test_valiid_SSM_st_valid_all_test_valiid(void* pHandle) { return *(SSM_ST_test_valiid*)pHandle == SSM_st_valid_all_test_valiid; }
static int isActive_SSM_TR_test_valiid_SSM_TR_Eliminate_1_Invalid_1_Eliminate_1_test_valiid(void* pHandle) { return *(SSM_TR_test_valiid*)pHandle == SSM_TR_Eliminate_1_Invalid_1_Eliminate_1_test_valiid; }
static int isActive_SSM_TR_test_valiid_SSM_TR_Eliminate_2_Invalid_1_Eliminate_2_test_valiid(void* pHandle) { return *(SSM_TR_test_valiid*)pHandle == SSM_TR_Eliminate_2_Invalid_1_Eliminate_2_test_valiid; }
static int isActive_SSM_TR_test_valiid_SSM_TR_Eliminate_3_Invalid_1_Eliminate_3_test_valiid(void* pHandle) { return *(SSM_TR_test_valiid*)pHandle == SSM_TR_Eliminate_3_Invalid_1_Eliminate_3_test_valiid; }
static int isActive_SSM_TR_test_valiid_SSM_TR_valid_all_Eliminate_1_1_valid_all_test_valiid(void* pHandle) { return *(SSM_TR_test_valiid*)pHandle == SSM_TR_valid_all_Eliminate_1_1_valid_all_test_valiid; }
static int isActive_SSM_TR_test_valiid_SSM_TR_valid_all_Eliminate_2_2_valid_all_test_valiid(void* pHandle) { return *(SSM_TR_test_valiid*)pHandle == SSM_TR_valid_all_Eliminate_2_2_valid_all_test_valiid; }
static int isActive_SSM_TR_test_valiid_SSM_TR_valid_all_Eliminate_3_3_valid_all_test_valiid(void* pHandle) { return *(SSM_TR_test_valiid*)pHandle == SSM_TR_valid_all_Eliminate_3_3_valid_all_test_valiid; }

/* mapping definition */


const MappingEntry scope_13_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Invalid_test_valiid, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_test_valiid_SSM_st_Invalid_test_valiid, NULL, 1, 0 }
};
const MappingScope scope_13 = {
    "ifvalid_sensor/ ifvalid_sensortest_valiid:Invalid:",
    scope_13_entries, 1
};

const MappingEntry scope_12_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_test_valiid_SSM_TR_Eliminate_3_Invalid_1_Eliminate_3_test_valiid, NULL, 1, 0 }
};
const MappingScope scope_12 = {
    "ifvalid_sensor/ ifvalid_sensortest_valiid:Eliminate_3:<1",
    scope_12_entries, 1
};

const MappingEntry scope_11_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_test_valiid_SSM_TR_Eliminate_3_Invalid_1_Eliminate_3_test_valiid, &scope_12, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Eliminate_3_test_valiid, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_test_valiid_SSM_st_Eliminate_3_test_valiid, NULL, 1, 1 }
};
const MappingScope scope_11 = {
    "ifvalid_sensor/ ifvalid_sensortest_valiid:Eliminate_3:",
    scope_11_entries, 2
};

const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_test_valiid_SSM_TR_Eliminate_2_Invalid_1_Eliminate_2_test_valiid, NULL, 1, 0 }
};
const MappingScope scope_10 = {
    "ifvalid_sensor/ ifvalid_sensortest_valiid:Eliminate_2:<1",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_test_valiid_SSM_TR_Eliminate_2_Invalid_1_Eliminate_2_test_valiid, &scope_10, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Eliminate_2_test_valiid, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_test_valiid_SSM_st_Eliminate_2_test_valiid, NULL, 1, 1 }
};
const MappingScope scope_9 = {
    "ifvalid_sensor/ ifvalid_sensortest_valiid:Eliminate_2:",
    scope_9_entries, 2
};

const MappingEntry scope_8_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_test_valiid_SSM_TR_Eliminate_1_Invalid_1_Eliminate_1_test_valiid, NULL, 1, 0 }
};
const MappingScope scope_8 = {
    "ifvalid_sensor/ ifvalid_sensortest_valiid:Eliminate_1:<1",
    scope_8_entries, 1
};

const MappingEntry scope_7_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_test_valiid_SSM_TR_Eliminate_1_Invalid_1_Eliminate_1_test_valiid, &scope_8, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_Eliminate_1_test_valiid, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_test_valiid_SSM_st_Eliminate_1_test_valiid, NULL, 1, 1 }
};
const MappingScope scope_7 = {
    "ifvalid_sensor/ ifvalid_sensortest_valiid:Eliminate_1:",
    scope_7_entries, 2
};

const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_test_valiid_SSM_TR_valid_all_Eliminate_3_3_valid_all_test_valiid, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "ifvalid_sensor/ ifvalid_sensortest_valiid:valid_all:<3",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_test_valiid_SSM_TR_valid_all_Eliminate_2_2_valid_all_test_valiid, NULL, 1, 0 }
};
const MappingScope scope_5 = {
    "ifvalid_sensor/ ifvalid_sensortest_valiid:valid_all:<2",
    scope_5_entries, 1
};

const MappingEntry scope_4_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_test_valiid_SSM_TR_valid_all_Eliminate_1_1_valid_all_test_valiid, NULL, 1, 0 }
};
const MappingScope scope_4 = {
    "ifvalid_sensor/ ifvalid_sensortest_valiid:valid_all:<1",
    scope_4_entries, 1
};

const MappingEntry scope_3_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_test_valiid_SSM_TR_valid_all_Eliminate_1_1_valid_all_test_valiid, &scope_4, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_test_valiid_SSM_TR_valid_all_Eliminate_2_2_valid_all_test_valiid, &scope_5, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_test_valiid_SSM_TR_valid_all_Eliminate_3_3_valid_all_test_valiid, &scope_6, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_valid_all_test_valiid, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_test_valiid_SSM_st_valid_all_test_valiid, NULL, 1, 3 }
};
const MappingScope scope_3 = {
    "ifvalid_sensor/ ifvalid_sensortest_valiid:valid_all:",
    scope_3_entries, 4
};

const MappingEntry scope_2_entries[12] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_test_valiid), (size_t)&outputs_ctx.test_valiid_state_act, &_Type_SSM_ST_test_valiid_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.test_valiid_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_test_valiid), (size_t)&outputs_ctx.test_valiid_state_nxt, &_Type_SSM_ST_test_valiid_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.test_valiid_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_test_valiid), (size_t)&outputs_ctx.test_valiid_state_sel, &_Type_SSM_ST_test_valiid_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_test_valiid), (size_t)&outputs_ctx.test_valiid_fired_strong, &_Type_SSM_TR_test_valiid_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_test_valiid), (size_t)&outputs_ctx.test_valiid_fired, &_Type_SSM_TR_test_valiid_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "valid_all:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_test_valiid_SSM_st_valid_all_test_valiid, &scope_3, 1, 7 },
    /* 8 */ { MAP_STATE, "Eliminate_1:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_test_valiid_SSM_st_Eliminate_1_test_valiid, &scope_7, 1, 8 },
    /* 9 */ { MAP_STATE, "Eliminate_2:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_test_valiid_SSM_st_Eliminate_2_test_valiid, &scope_9, 1, 9 },
    /* 10 */ { MAP_STATE, "Eliminate_3:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_test_valiid_SSM_st_Eliminate_3_test_valiid, &scope_11, 1, 10 },
    /* 11 */ { MAP_STATE, "Invalid:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_test_valiid_SSM_st_Invalid_test_valiid, &scope_13, 1, 11 }
};
const MappingScope scope_2 = {
    "ifvalid_sensor/ ifvalid_sensortest_valiid:",
    scope_2_entries, 12
};

const MappingEntry scope_1_entries[30] = {
    /* 0 */ { MAP_OUTPUT, "output", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.output, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "anomaly", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.anomaly, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "sensor_1", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.sensor_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INPUT, "sensor_2", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.sensor_2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_INPUT, "sensor_3", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.sensor_3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "diff_12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.diff_12, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "diff_23", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.diff_23, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "diff_13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.diff_13, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "equal_12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.equal_12, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "equal_13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.equal_13, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "equal_23", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.equal_23, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L14, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L15, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L16, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L18, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L19, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L20, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L22, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L23, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L24, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L26, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L28, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L29, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L30, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L33, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L34, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_AUTOMATON, "test_valiid:", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 29 }
};
const MappingScope scope_1 = {
    "ifvalid_sensor/ ifvalid_sensor",
    scope_1_entries, 30
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "ifvalid_sensor", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
