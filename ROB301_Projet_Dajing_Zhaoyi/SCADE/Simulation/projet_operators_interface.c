#include "projet_operators_interface.h"
#include "projet_operators_type.h"
#include "projet_operators_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

inC_ifvalid_sensor inputs_ctx;
static inC_ifvalid_sensor inputs_ctx_execute;
outC_ifvalid_sensor outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    init_kcg_bool(&inputs_ctx.sensor_1);
    init_kcg_bool(&inputs_ctx_execute.sensor_1);
    init_kcg_bool(&inputs_ctx.sensor_2);
    init_kcg_bool(&inputs_ctx_execute.sensor_2);
    init_kcg_bool(&inputs_ctx.sensor_3);
    init_kcg_bool(&inputs_ctx_execute.sensor_3);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.sensor_1 = inputs_ctx.sensor_1;
    inputs_ctx_execute.sensor_2 = inputs_ctx.sensor_2;
    inputs_ctx_execute.sensor_3 = inputs_ctx.sensor_3;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "e572827ee83fda82e6a11e1fbe16a909";
const char* _SCSIM_SmuTypesCheckSum = "6757860ac1d8ce9bd3fc91d925ceefb8";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    ifvalid_sensor_init(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

int SimReset(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    ifvalid_sensor_reset(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

#ifdef __cplusplus
    #ifdef pSimoutC_ifvalid_sensorCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_ifvalid_sensorCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_ifvalid_sensorCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_ifvalid_sensorCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_ifvalid_sensorCIVTable != NULL && 
        pSimoutC_ifvalid_sensorCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_ifvalid_sensorCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    }
    else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
    int GraphicalInputsConnected = 1;
#endif

int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif
    _SCSIM_ExecuteInterface();
    ifvalid_sensor(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif
    return 1;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#else
    UNUSED(bConnect);
#endif
}

/* dump */

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(inC_ifvalid_sensor);
    nSize += sizeof(outC_ifvalid_sensor);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_ifvalid_sensor));
    pCurrent += sizeof(inC_ifvalid_sensor);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_ifvalid_sensor));
    pCurrent += sizeof(outC_ifvalid_sensor);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_ifvalid_sensor));
    pCurrent += sizeof(inC_ifvalid_sensor);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_ifvalid_sensor));
    pCurrent += sizeof(outC_ifvalid_sensor);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif
}

/* snapshot */

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

/* checksum */

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

#ifdef __cplusplus
} /* "C" */
#endif

