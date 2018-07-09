#ifndef GENERATED_ASN1SCC_Context_vizkit3d_laserscan_H
#define GENERATED_ASN1SCC_Context_vizkit3d_laserscan_H
/*
Code automatically generated by asn1scc tool
*/
#include "dataview-uniq.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {
    asn1SccVizkit3D_FilePath configfile;
    asn1SccVizkit3D_PluginLabel id;
} asn1SccContext_vizkit3d_laserscan;

flag asn1SccContext_vizkit3d_laserscan_Equal(const asn1SccContext_vizkit3d_laserscan* pVal1, const asn1SccContext_vizkit3d_laserscan* pVal2);

void asn1SccContext_vizkit3d_laserscan_Initialize(asn1SccContext_vizkit3d_laserscan* pVal);

#define ERR_CONTEXT_VIZKIT3D_LASERSCAN_CONFIGFILE		1  /**/
#define ERR_CONTEXT_VIZKIT3D_LASERSCAN_ID		12  /**/
flag asn1SccContext_vizkit3d_laserscan_IsConstraintValid(const asn1SccContext_vizkit3d_laserscan* pVal, int* pErrCode);

extern const asn1SccContext_vizkit3d_laserscan vizkit3d_laserscan_ctxt; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

 


#ifdef  __cplusplus
}

#endif

#endif