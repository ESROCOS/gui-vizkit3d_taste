/* =====================================================================
 * FILE:  $URL$
 * =====================================================================
 * PROJECT:             :  SARGON
 * VERSION              :  $Revision$
 * LANGUAGE             :  C++
 * AUTHOR               :  $LastChangedBy$ 
 * COPYRIGHT            :  AVOS - GMV,S.A.
 * COMPILER             :  GCC-4.9.2, C++11
 * CREATED              :  $CreationDate$
 * CLASS                :  -
 * LAST MODIFIED        :  $LastChangedDate$
 * GENERATED FROM MODEL :  -
 * ORIGINAL MODEL AUTHOR:  -
 * ---------------------------------------------------------------------
 * C interface wrapper for a bodyStateVisualization plugin 
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "bodyStatePluginWrapper.h"
#include "BodyStatePluginController.hpp"
#include "wrapperTemplate.hpp"
#include "asn1_types_support/asn1BodyStateConvert.hpp"


int BodyStateVisualization_updateBodyState(const char* pluginName, const asn1SccBodyState* state)
{
    return updatePluginData<BodyStatePluginController>(pluginName, "BodyStateVisualization", state, BodyState_fromAsn1);
}
