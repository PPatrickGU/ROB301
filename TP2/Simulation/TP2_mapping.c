/* TP2_mapping.c */

#include "TP2_type.h"
#include "TP2_interface.h"
#include "TP2_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_1, 6);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */


const MappingEntry scope_1_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Output1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INPUT, "Input1", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Input1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L8, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_1 = {
    "E1_Q2/ E1_Q2",
    scope_1_entries, 6
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
