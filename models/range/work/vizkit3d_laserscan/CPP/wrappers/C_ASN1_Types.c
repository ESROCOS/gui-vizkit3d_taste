#ifdef __unix__
#include <stdio.h>
#include <assert.h>
#endif

#include <string.h>

#include "C_ASN1_Types.h"

#ifdef __NEED_Dummy2Base_T_UPER
int Encode_UPER_Dummy2Base_T(void *pBuffer, size_t iMaxBufferSize, const asn1SccDummy2Base_T *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccDummy2Base_T_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Dummy2Base-T (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Dummy2Base_T_ACN
int Encode_ACN_Dummy2Base_T(void *pBuffer, size_t iMaxBufferSize, asn1SccDummy2Base_T *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccDummy2Base_T_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Dummy2Base-T (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Dummy2Base_T_NATIVE
int Encode_NATIVE_Dummy2Base_T(void *pBuffer, size_t iMaxBufferSize, const asn1SccDummy2Base_T *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccDummy2Base_T) );
    return sizeof(asn1SccDummy2Base_T);
}
#endif

#ifdef __NEED_Dummy2Base_T_UPER
int Decode_UPER_Dummy2Base_T(asn1SccDummy2Base_T *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccDummy2Base_T_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Dummy2Base-T (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Dummy2Base_T_ACN
int Decode_ACN_Dummy2Base_T(asn1SccDummy2Base_T *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccDummy2Base_T_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Dummy2Base-T (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Dummy2Base_T_NATIVE
int Decode_NATIVE_Dummy2Base_T(asn1SccDummy2Base_T *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccDummy2Base_T *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_JointState_MODE_UPER
int Encode_UPER_Base_JointState_MODE(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointState_MODE *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointState_MODE_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointState-MODE (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointState_MODE_ACN
int Encode_ACN_Base_JointState_MODE(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointState_MODE *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointState_MODE_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointState-MODE (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointState_MODE_NATIVE
int Encode_NATIVE_Base_JointState_MODE(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointState_MODE *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_JointState_MODE) );
    return sizeof(asn1SccBase_JointState_MODE);
}
#endif

#ifdef __NEED_Base_JointState_MODE_UPER
int Decode_UPER_Base_JointState_MODE(asn1SccBase_JointState_MODE *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointState_MODE_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointState-MODE (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointState_MODE_ACN
int Decode_ACN_Base_JointState_MODE(asn1SccBase_JointState_MODE *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointState_MODE_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointState-MODE (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointState_MODE_NATIVE
int Decode_NATIVE_Base_JointState_MODE(asn1SccBase_JointState_MODE *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_JointState_MODE *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Time_Resolution_UPER
int Encode_UPER_Base_Time_Resolution(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Time_Resolution *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Time_Resolution_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Time-Resolution (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Time_Resolution_ACN
int Encode_ACN_Base_Time_Resolution(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Time_Resolution *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Time_Resolution_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Time-Resolution (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Time_Resolution_NATIVE
int Encode_NATIVE_Base_Time_Resolution(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Time_Resolution *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Time_Resolution) );
    return sizeof(asn1SccBase_Time_Resolution);
}
#endif

#ifdef __NEED_Base_Time_Resolution_UPER
int Decode_UPER_Base_Time_Resolution(asn1SccBase_Time_Resolution *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Time_Resolution_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Time-Resolution (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Time_Resolution_ACN
int Decode_ACN_Base_Time_Resolution(asn1SccBase_Time_Resolution *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Time_Resolution_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Time-Resolution (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Time_Resolution_NATIVE
int Decode_NATIVE_Base_Time_Resolution(asn1SccBase_Time_Resolution *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Time_Resolution *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_geometry_SplineBase_CoordinateType_UPER
int Encode_UPER_Base_geometry_SplineBase_CoordinateType(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_geometry_SplineBase_CoordinateType *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_geometry_SplineBase_CoordinateType_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-geometry-SplineBase-CoordinateType (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_geometry_SplineBase_CoordinateType_ACN
int Encode_ACN_Base_geometry_SplineBase_CoordinateType(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_geometry_SplineBase_CoordinateType *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_geometry_SplineBase_CoordinateType_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-geometry-SplineBase-CoordinateType (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_geometry_SplineBase_CoordinateType_NATIVE
int Encode_NATIVE_Base_geometry_SplineBase_CoordinateType(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_geometry_SplineBase_CoordinateType *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_geometry_SplineBase_CoordinateType) );
    return sizeof(asn1SccBase_geometry_SplineBase_CoordinateType);
}
#endif

#ifdef __NEED_Base_geometry_SplineBase_CoordinateType_UPER
int Decode_UPER_Base_geometry_SplineBase_CoordinateType(asn1SccBase_geometry_SplineBase_CoordinateType *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_geometry_SplineBase_CoordinateType_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-geometry-SplineBase-CoordinateType (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_geometry_SplineBase_CoordinateType_ACN
int Decode_ACN_Base_geometry_SplineBase_CoordinateType(asn1SccBase_geometry_SplineBase_CoordinateType *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_geometry_SplineBase_CoordinateType_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-geometry-SplineBase-CoordinateType (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_geometry_SplineBase_CoordinateType_NATIVE
int Decode_NATIVE_Base_geometry_SplineBase_CoordinateType(asn1SccBase_geometry_SplineBase_CoordinateType *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_geometry_SplineBase_CoordinateType *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE_UPER
int Encode_UPER_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-DepthMap-DEPTH-MEASUREMENT-STATE (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE_ACN
int Encode_ACN_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-DepthMap-DEPTH-MEASUREMENT-STATE (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE_NATIVE
int Encode_NATIVE_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE) );
    return sizeof(asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE);
}
#endif

#ifdef __NEED_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE_UPER
int Decode_UPER_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE(asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-DepthMap-DEPTH-MEASUREMENT-STATE (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE_ACN
int Decode_ACN_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE(asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-DepthMap-DEPTH-MEASUREMENT-STATE (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE_NATIVE
int Decode_NATIVE_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE(asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_PROJECTION_TYPE_UPER
int Encode_UPER_Base_samples_DepthMap_PROJECTION_TYPE(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap_PROJECTION_TYPE *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_DepthMap_PROJECTION_TYPE_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-DepthMap-PROJECTION-TYPE (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_PROJECTION_TYPE_ACN
int Encode_ACN_Base_samples_DepthMap_PROJECTION_TYPE(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_DepthMap_PROJECTION_TYPE *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_DepthMap_PROJECTION_TYPE_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-DepthMap-PROJECTION-TYPE (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_PROJECTION_TYPE_NATIVE
int Encode_NATIVE_Base_samples_DepthMap_PROJECTION_TYPE(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap_PROJECTION_TYPE *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_DepthMap_PROJECTION_TYPE) );
    return sizeof(asn1SccBase_samples_DepthMap_PROJECTION_TYPE);
}
#endif

#ifdef __NEED_Base_samples_DepthMap_PROJECTION_TYPE_UPER
int Decode_UPER_Base_samples_DepthMap_PROJECTION_TYPE(asn1SccBase_samples_DepthMap_PROJECTION_TYPE *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_DepthMap_PROJECTION_TYPE_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-DepthMap-PROJECTION-TYPE (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_PROJECTION_TYPE_ACN
int Decode_ACN_Base_samples_DepthMap_PROJECTION_TYPE(asn1SccBase_samples_DepthMap_PROJECTION_TYPE *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_DepthMap_PROJECTION_TYPE_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-DepthMap-PROJECTION-TYPE (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_PROJECTION_TYPE_NATIVE
int Decode_NATIVE_Base_samples_DepthMap_PROJECTION_TYPE(asn1SccBase_samples_DepthMap_PROJECTION_TYPE *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_DepthMap_PROJECTION_TYPE *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_UNIT_AXIS_UPER
int Encode_UPER_Base_samples_DepthMap_UNIT_AXIS(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap_UNIT_AXIS *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_DepthMap_UNIT_AXIS_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-DepthMap-UNIT-AXIS (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_UNIT_AXIS_ACN
int Encode_ACN_Base_samples_DepthMap_UNIT_AXIS(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_DepthMap_UNIT_AXIS *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_DepthMap_UNIT_AXIS_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-DepthMap-UNIT-AXIS (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_UNIT_AXIS_NATIVE
int Encode_NATIVE_Base_samples_DepthMap_UNIT_AXIS(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap_UNIT_AXIS *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_DepthMap_UNIT_AXIS) );
    return sizeof(asn1SccBase_samples_DepthMap_UNIT_AXIS);
}
#endif

#ifdef __NEED_Base_samples_DepthMap_UNIT_AXIS_UPER
int Decode_UPER_Base_samples_DepthMap_UNIT_AXIS(asn1SccBase_samples_DepthMap_UNIT_AXIS *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_DepthMap_UNIT_AXIS_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-DepthMap-UNIT-AXIS (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_UNIT_AXIS_ACN
int Decode_ACN_Base_samples_DepthMap_UNIT_AXIS(asn1SccBase_samples_DepthMap_UNIT_AXIS *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_DepthMap_UNIT_AXIS_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-DepthMap-UNIT-AXIS (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_UNIT_AXIS_NATIVE
int Decode_NATIVE_Base_samples_DepthMap_UNIT_AXIS(asn1SccBase_samples_DepthMap_UNIT_AXIS *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_DepthMap_UNIT_AXIS *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_LASER_RANGE_ERRORS_UPER
int Encode_UPER_Base_samples_LASER_RANGE_ERRORS(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_LASER_RANGE_ERRORS *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_LASER_RANGE_ERRORS_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-LASER-RANGE-ERRORS (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_LASER_RANGE_ERRORS_ACN
int Encode_ACN_Base_samples_LASER_RANGE_ERRORS(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_LASER_RANGE_ERRORS *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_LASER_RANGE_ERRORS_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-LASER-RANGE-ERRORS (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_LASER_RANGE_ERRORS_NATIVE
int Encode_NATIVE_Base_samples_LASER_RANGE_ERRORS(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_LASER_RANGE_ERRORS *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_LASER_RANGE_ERRORS) );
    return sizeof(asn1SccBase_samples_LASER_RANGE_ERRORS);
}
#endif

#ifdef __NEED_Base_samples_LASER_RANGE_ERRORS_UPER
int Decode_UPER_Base_samples_LASER_RANGE_ERRORS(asn1SccBase_samples_LASER_RANGE_ERRORS *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_LASER_RANGE_ERRORS_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-LASER-RANGE-ERRORS (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_LASER_RANGE_ERRORS_ACN
int Decode_ACN_Base_samples_LASER_RANGE_ERRORS(asn1SccBase_samples_LASER_RANGE_ERRORS *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_LASER_RANGE_ERRORS_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-LASER-RANGE-ERRORS (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_LASER_RANGE_ERRORS_NATIVE
int Decode_NATIVE_Base_samples_LASER_RANGE_ERRORS(asn1SccBase_samples_LASER_RANGE_ERRORS *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_LASER_RANGE_ERRORS *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_mode_t_UPER
int Encode_UPER_Base_samples_frame_frame_mode_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_mode_t *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_frame_frame_mode_t_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-frame-frame-mode-t (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_mode_t_ACN
int Encode_ACN_Base_samples_frame_frame_mode_t(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_frame_frame_mode_t *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_frame_frame_mode_t_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-frame-frame-mode-t (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_mode_t_NATIVE
int Encode_NATIVE_Base_samples_frame_frame_mode_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_mode_t *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_frame_frame_mode_t) );
    return sizeof(asn1SccBase_samples_frame_frame_mode_t);
}
#endif

#ifdef __NEED_Base_samples_frame_frame_mode_t_UPER
int Decode_UPER_Base_samples_frame_frame_mode_t(asn1SccBase_samples_frame_frame_mode_t *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_frame_frame_mode_t_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-frame-frame-mode-t (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_mode_t_ACN
int Decode_ACN_Base_samples_frame_frame_mode_t(asn1SccBase_samples_frame_frame_mode_t *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_frame_frame_mode_t_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-frame-frame-mode-t (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_mode_t_NATIVE
int Decode_NATIVE_Base_samples_frame_frame_mode_t(asn1SccBase_samples_frame_frame_mode_t *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_frame_frame_mode_t *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_status_t_UPER
int Encode_UPER_Base_samples_frame_frame_status_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_status_t *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_frame_frame_status_t_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-frame-frame-status-t (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_status_t_ACN
int Encode_ACN_Base_samples_frame_frame_status_t(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_frame_frame_status_t *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_frame_frame_status_t_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-frame-frame-status-t (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_status_t_NATIVE
int Encode_NATIVE_Base_samples_frame_frame_status_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_status_t *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_frame_frame_status_t) );
    return sizeof(asn1SccBase_samples_frame_frame_status_t);
}
#endif

#ifdef __NEED_Base_samples_frame_frame_status_t_UPER
int Decode_UPER_Base_samples_frame_frame_status_t(asn1SccBase_samples_frame_frame_status_t *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_frame_frame_status_t_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-frame-frame-status-t (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_status_t_ACN
int Decode_ACN_Base_samples_frame_frame_status_t(asn1SccBase_samples_frame_frame_status_t *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_frame_frame_status_t_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-frame-frame-status-t (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_status_t_NATIVE
int Decode_NATIVE_Base_samples_frame_frame_status_t(asn1SccBase_samples_frame_frame_status_t *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_frame_frame_status_t *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Wrappers_geometry_SplineType_UPER
int Encode_UPER_Wrappers_geometry_SplineType(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_geometry_SplineType *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_geometry_SplineType_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-geometry-SplineType (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_geometry_SplineType_ACN
int Encode_ACN_Wrappers_geometry_SplineType(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_geometry_SplineType *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_geometry_SplineType_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-geometry-SplineType (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_geometry_SplineType_NATIVE
int Encode_NATIVE_Wrappers_geometry_SplineType(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_geometry_SplineType *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccWrappers_geometry_SplineType) );
    return sizeof(asn1SccWrappers_geometry_SplineType);
}
#endif

#ifdef __NEED_Wrappers_geometry_SplineType_UPER
int Decode_UPER_Wrappers_geometry_SplineType(asn1SccWrappers_geometry_SplineType *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_geometry_SplineType_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-geometry-SplineType (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_geometry_SplineType_ACN
int Decode_ACN_Wrappers_geometry_SplineType(asn1SccWrappers_geometry_SplineType *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_geometry_SplineType_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-geometry-SplineType (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_geometry_SplineType_NATIVE
int Decode_NATIVE_Wrappers_geometry_SplineType(asn1SccWrappers_geometry_SplineType *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccWrappers_geometry_SplineType *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_JointTrajectory_UPER
int Encode_UPER_Base_JointTrajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTrajectory *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointTrajectory_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointTrajectory (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointTrajectory_ACN
int Encode_ACN_Base_JointTrajectory(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointTrajectory *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointTrajectory_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointTrajectory (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointTrajectory_NATIVE
int Encode_NATIVE_Base_JointTrajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTrajectory *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_JointTrajectory) );
    return sizeof(asn1SccBase_JointTrajectory);
}
#endif

#ifdef __NEED_Base_JointTrajectory_UPER
int Decode_UPER_Base_JointTrajectory(asn1SccBase_JointTrajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointTrajectory_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointTrajectory (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointTrajectory_ACN
int Decode_ACN_Base_JointTrajectory(asn1SccBase_JointTrajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointTrajectory_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointTrajectory (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointTrajectory_NATIVE
int Decode_NATIVE_Base_JointTrajectory(asn1SccBase_JointTrajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_JointTrajectory *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_JointTransform_UPER
int Encode_UPER_Std_orogen_typekits_mtype_std_vector_base_JointTransform(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Std-orogen-typekits-mtype-std-vector-base-JointTransform (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_JointTransform_ACN
int Encode_ACN_Std_orogen_typekits_mtype_std_vector_base_JointTransform(void *pBuffer, size_t iMaxBufferSize, asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Std-orogen-typekits-mtype-std-vector-base-JointTransform (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_JointTransform_NATIVE
int Encode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_JointTransform(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform) );
    return sizeof(asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform);
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_JointTransform_UPER
int Decode_UPER_Std_orogen_typekits_mtype_std_vector_base_JointTransform(asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Std-orogen-typekits-mtype-std-vector-base-JointTransform (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_JointTransform_ACN
int Decode_ACN_Std_orogen_typekits_mtype_std_vector_base_JointTransform(asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Std-orogen-typekits-mtype-std-vector-base-JointTransform (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_JointTransform_NATIVE
int Decode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_JointTransform(asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Waypoint_UPER
int Encode_UPER_Std_orogen_typekits_mtype_std_vector_base_Waypoint(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Std-orogen-typekits-mtype-std-vector-base-Waypoint (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Waypoint_ACN
int Encode_ACN_Std_orogen_typekits_mtype_std_vector_base_Waypoint(void *pBuffer, size_t iMaxBufferSize, asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Std-orogen-typekits-mtype-std-vector-base-Waypoint (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Waypoint_NATIVE
int Encode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_Waypoint(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint) );
    return sizeof(asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint);
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Waypoint_UPER
int Decode_UPER_Std_orogen_typekits_mtype_std_vector_base_Waypoint(asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Std-orogen-typekits-mtype-std-vector-base-Waypoint (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Waypoint_ACN
int Decode_ACN_Std_orogen_typekits_mtype_std_vector_base_Waypoint(asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Std-orogen-typekits-mtype-std-vector-base-Waypoint (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Waypoint_NATIVE
int Decode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_Waypoint(asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Wrench_UPER
int Encode_UPER_Std_orogen_typekits_mtype_std_vector_base_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Std-orogen-typekits-mtype-std-vector-base-Wrench (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Wrench_ACN
int Encode_ACN_Std_orogen_typekits_mtype_std_vector_base_Wrench(void *pBuffer, size_t iMaxBufferSize, asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Std-orogen-typekits-mtype-std-vector-base-Wrench (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Wrench_NATIVE
int Encode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench) );
    return sizeof(asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench);
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Wrench_UPER
int Decode_UPER_Std_orogen_typekits_mtype_std_vector_base_Wrench(asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Std-orogen-typekits-mtype-std-vector-base-Wrench (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Wrench_ACN
int Decode_ACN_Std_orogen_typekits_mtype_std_vector_base_Wrench(asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Std-orogen-typekits-mtype-std-vector-base-Wrench (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Wrench_NATIVE
int Decode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_Wrench(asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Std_vector_Wrappers_Vector4d_UPER
int Encode_UPER_Std_vector_Wrappers_Vector4d(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_vector_Wrappers_Vector4d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccStd_vector_Wrappers_Vector4d_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Std-vector-Wrappers-Vector4d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Std_vector_Wrappers_Vector4d_ACN
int Encode_ACN_Std_vector_Wrappers_Vector4d(void *pBuffer, size_t iMaxBufferSize, asn1SccStd_vector_Wrappers_Vector4d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccStd_vector_Wrappers_Vector4d_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Std-vector-Wrappers-Vector4d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Std_vector_Wrappers_Vector4d_NATIVE
int Encode_NATIVE_Std_vector_Wrappers_Vector4d(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_vector_Wrappers_Vector4d *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccStd_vector_Wrappers_Vector4d) );
    return sizeof(asn1SccStd_vector_Wrappers_Vector4d);
}
#endif

#ifdef __NEED_Std_vector_Wrappers_Vector4d_UPER
int Decode_UPER_Std_vector_Wrappers_Vector4d(asn1SccStd_vector_Wrappers_Vector4d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccStd_vector_Wrappers_Vector4d_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Std-vector-Wrappers-Vector4d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Std_vector_Wrappers_Vector4d_ACN
int Decode_ACN_Std_vector_Wrappers_Vector4d(asn1SccStd_vector_Wrappers_Vector4d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccStd_vector_Wrappers_Vector4d_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Std-vector-Wrappers-Vector4d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Std_vector_Wrappers_Vector4d_NATIVE
int Decode_NATIVE_Std_vector_Wrappers_Vector4d(asn1SccStd_vector_Wrappers_Vector4d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccStd_vector_Wrappers_Vector4d *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Trajectory_UPER
int Encode_UPER_Std_orogen_typekits_mtype_std_vector_base_Trajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Std-orogen-typekits-mtype-std-vector-base-Trajectory (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Trajectory_ACN
int Encode_ACN_Std_orogen_typekits_mtype_std_vector_base_Trajectory(void *pBuffer, size_t iMaxBufferSize, asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Std-orogen-typekits-mtype-std-vector-base-Trajectory (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Trajectory_NATIVE
int Encode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_Trajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory) );
    return sizeof(asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory);
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Trajectory_UPER
int Decode_UPER_Std_orogen_typekits_mtype_std_vector_base_Trajectory(asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Std-orogen-typekits-mtype-std-vector-base-Trajectory (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Trajectory_ACN
int Decode_ACN_Std_orogen_typekits_mtype_std_vector_base_Trajectory(asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Std-orogen-typekits-mtype-std-vector-base-Trajectory (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Trajectory_NATIVE
int Decode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_Trajectory(asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Pose_UPER
int Encode_UPER_Base_Pose(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Pose_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Pose (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Pose_ACN
int Encode_ACN_Base_Pose(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Pose *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Pose_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Pose (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Pose_NATIVE
int Encode_NATIVE_Base_Pose(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Pose) );
    return sizeof(asn1SccBase_Pose);
}
#endif

#ifdef __NEED_Base_Pose_UPER
int Decode_UPER_Base_Pose(asn1SccBase_Pose *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Pose_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Pose (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Pose_ACN
int Decode_ACN_Base_Pose(asn1SccBase_Pose *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Pose_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Pose (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Pose_NATIVE
int Decode_NATIVE_Base_Pose(asn1SccBase_Pose *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Pose *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_TransformWithCovariance_UPER
int Encode_UPER_Base_TransformWithCovariance(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TransformWithCovariance *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_TransformWithCovariance_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-TransformWithCovariance (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_TransformWithCovariance_ACN
int Encode_ACN_Base_TransformWithCovariance(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_TransformWithCovariance *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_TransformWithCovariance_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-TransformWithCovariance (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_TransformWithCovariance_NATIVE
int Encode_NATIVE_Base_TransformWithCovariance(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TransformWithCovariance *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_TransformWithCovariance) );
    return sizeof(asn1SccBase_TransformWithCovariance);
}
#endif

#ifdef __NEED_Base_TransformWithCovariance_UPER
int Decode_UPER_Base_TransformWithCovariance(asn1SccBase_TransformWithCovariance *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_TransformWithCovariance_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-TransformWithCovariance (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_TransformWithCovariance_ACN
int Decode_ACN_Base_TransformWithCovariance(asn1SccBase_TransformWithCovariance *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_TransformWithCovariance_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-TransformWithCovariance (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_TransformWithCovariance_NATIVE
int Decode_NATIVE_Base_TransformWithCovariance(asn1SccBase_TransformWithCovariance *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_TransformWithCovariance *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_TwistWithCovariance_UPER
int Encode_UPER_Base_TwistWithCovariance(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TwistWithCovariance *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_TwistWithCovariance_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-TwistWithCovariance (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_TwistWithCovariance_ACN
int Encode_ACN_Base_TwistWithCovariance(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_TwistWithCovariance *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_TwistWithCovariance_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-TwistWithCovariance (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_TwistWithCovariance_NATIVE
int Encode_NATIVE_Base_TwistWithCovariance(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TwistWithCovariance *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_TwistWithCovariance) );
    return sizeof(asn1SccBase_TwistWithCovariance);
}
#endif

#ifdef __NEED_Base_TwistWithCovariance_UPER
int Decode_UPER_Base_TwistWithCovariance(asn1SccBase_TwistWithCovariance *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_TwistWithCovariance_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-TwistWithCovariance (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_TwistWithCovariance_ACN
int Decode_ACN_Base_TwistWithCovariance(asn1SccBase_TwistWithCovariance *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_TwistWithCovariance_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-TwistWithCovariance (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_TwistWithCovariance_NATIVE
int Decode_NATIVE_Base_TwistWithCovariance(asn1SccBase_TwistWithCovariance *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_TwistWithCovariance *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Wrench_UPER
int Encode_UPER_Base_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Wrench *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Wrench_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Wrench (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Wrench_ACN
int Encode_ACN_Base_Wrench(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Wrench *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Wrench_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Wrench (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Wrench_NATIVE
int Encode_NATIVE_Base_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Wrench *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Wrench) );
    return sizeof(asn1SccBase_Wrench);
}
#endif

#ifdef __NEED_Base_Wrench_UPER
int Decode_UPER_Base_Wrench(asn1SccBase_Wrench *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Wrench_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Wrench (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Wrench_ACN
int Decode_ACN_Base_Wrench(asn1SccBase_Wrench *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Wrench_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Wrench (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Wrench_NATIVE
int Decode_NATIVE_Base_Wrench(asn1SccBase_Wrench *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Wrench *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Angle_UPER
int Encode_UPER_Base_Angle(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Angle *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Angle_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Angle (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Angle_ACN
int Encode_ACN_Base_Angle(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Angle *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Angle_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Angle (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Angle_NATIVE
int Encode_NATIVE_Base_Angle(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Angle *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Angle) );
    return sizeof(asn1SccBase_Angle);
}
#endif

#ifdef __NEED_Base_Angle_UPER
int Decode_UPER_Base_Angle(asn1SccBase_Angle *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Angle_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Angle (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Angle_ACN
int Decode_ACN_Base_Angle(asn1SccBase_Angle *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Angle_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Angle (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Angle_NATIVE
int Decode_NATIVE_Base_Angle(asn1SccBase_Angle *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Angle *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_JointState_UPER
int Encode_UPER_Base_JointState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointState *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointState_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointState (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointState_ACN
int Encode_ACN_Base_JointState(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointState *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointState_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointState (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointState_NATIVE
int Encode_NATIVE_Base_JointState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointState *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_JointState) );
    return sizeof(asn1SccBase_JointState);
}
#endif

#ifdef __NEED_Base_JointState_UPER
int Decode_UPER_Base_JointState(asn1SccBase_JointState *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointState_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointState (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointState_ACN
int Decode_ACN_Base_JointState(asn1SccBase_JointState *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointState_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointState (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointState_NATIVE
int Decode_NATIVE_Base_JointState(asn1SccBase_JointState *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_JointState *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Pose2D_UPER
int Encode_UPER_Base_Pose2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose2D *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Pose2D_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Pose2D (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Pose2D_ACN
int Encode_ACN_Base_Pose2D(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Pose2D *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Pose2D_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Pose2D (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Pose2D_NATIVE
int Encode_NATIVE_Base_Pose2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose2D *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Pose2D) );
    return sizeof(asn1SccBase_Pose2D);
}
#endif

#ifdef __NEED_Base_Pose2D_UPER
int Decode_UPER_Base_Pose2D(asn1SccBase_Pose2D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Pose2D_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Pose2D (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Pose2D_ACN
int Decode_ACN_Base_Pose2D(asn1SccBase_Pose2D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Pose2D_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Pose2D (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Pose2D_NATIVE
int Decode_NATIVE_Base_Pose2D(asn1SccBase_Pose2D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Pose2D *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_PoseUpdateThreshold_UPER
int Encode_UPER_Base_PoseUpdateThreshold(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_PoseUpdateThreshold *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_PoseUpdateThreshold_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-PoseUpdateThreshold (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_PoseUpdateThreshold_ACN
int Encode_ACN_Base_PoseUpdateThreshold(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_PoseUpdateThreshold *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_PoseUpdateThreshold_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-PoseUpdateThreshold (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_PoseUpdateThreshold_NATIVE
int Encode_NATIVE_Base_PoseUpdateThreshold(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_PoseUpdateThreshold *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_PoseUpdateThreshold) );
    return sizeof(asn1SccBase_PoseUpdateThreshold);
}
#endif

#ifdef __NEED_Base_PoseUpdateThreshold_UPER
int Decode_UPER_Base_PoseUpdateThreshold(asn1SccBase_PoseUpdateThreshold *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_PoseUpdateThreshold_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-PoseUpdateThreshold (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_PoseUpdateThreshold_ACN
int Decode_ACN_Base_PoseUpdateThreshold(asn1SccBase_PoseUpdateThreshold *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_PoseUpdateThreshold_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-PoseUpdateThreshold (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_PoseUpdateThreshold_NATIVE
int Decode_NATIVE_Base_PoseUpdateThreshold(asn1SccBase_PoseUpdateThreshold *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_PoseUpdateThreshold *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Pressure_UPER
int Encode_UPER_Base_Pressure(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pressure *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Pressure_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Pressure (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Pressure_ACN
int Encode_ACN_Base_Pressure(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Pressure *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Pressure_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Pressure (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Pressure_NATIVE
int Encode_NATIVE_Base_Pressure(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pressure *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Pressure) );
    return sizeof(asn1SccBase_Pressure);
}
#endif

#ifdef __NEED_Base_Pressure_UPER
int Decode_UPER_Base_Pressure(asn1SccBase_Pressure *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Pressure_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Pressure (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Pressure_ACN
int Decode_ACN_Base_Pressure(asn1SccBase_Pressure *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Pressure_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Pressure (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Pressure_NATIVE
int Decode_NATIVE_Base_Pressure(asn1SccBase_Pressure *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Pressure *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Temperature_UPER
int Encode_UPER_Base_Temperature(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Temperature *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Temperature_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Temperature (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Temperature_ACN
int Encode_ACN_Base_Temperature(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Temperature *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Temperature_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Temperature (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Temperature_NATIVE
int Encode_NATIVE_Base_Temperature(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Temperature *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Temperature) );
    return sizeof(asn1SccBase_Temperature);
}
#endif

#ifdef __NEED_Base_Temperature_UPER
int Decode_UPER_Base_Temperature(asn1SccBase_Temperature *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Temperature_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Temperature (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Temperature_ACN
int Decode_ACN_Base_Temperature(asn1SccBase_Temperature *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Temperature_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Temperature (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Temperature_NATIVE
int Decode_NATIVE_Base_Temperature(asn1SccBase_Temperature *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Temperature *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Time_UPER
int Encode_UPER_Base_Time(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Time *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Time_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Time (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Time_ACN
int Encode_ACN_Base_Time(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Time *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Time_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Time (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Time_NATIVE
int Encode_NATIVE_Base_Time(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Time *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Time) );
    return sizeof(asn1SccBase_Time);
}
#endif

#ifdef __NEED_Base_Time_UPER
int Decode_UPER_Base_Time(asn1SccBase_Time *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Time_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Time (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Time_ACN
int Decode_ACN_Base_Time(asn1SccBase_Time *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Time_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Time (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Time_NATIVE
int Decode_NATIVE_Base_Time(asn1SccBase_Time *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Time *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Trajectory_UPER
int Encode_UPER_Base_Trajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Trajectory *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Trajectory_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Trajectory (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Trajectory_ACN
int Encode_ACN_Base_Trajectory(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Trajectory *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Trajectory_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Trajectory (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Trajectory_NATIVE
int Encode_NATIVE_Base_Trajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Trajectory *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Trajectory) );
    return sizeof(asn1SccBase_Trajectory);
}
#endif

#ifdef __NEED_Base_Trajectory_UPER
int Decode_UPER_Base_Trajectory(asn1SccBase_Trajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Trajectory_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Trajectory (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Trajectory_ACN
int Decode_ACN_Base_Trajectory(asn1SccBase_Trajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Trajectory_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Trajectory (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Trajectory_NATIVE
int Decode_NATIVE_Base_Trajectory(asn1SccBase_Trajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Trajectory *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Waypoint_UPER
int Encode_UPER_Base_Waypoint(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Waypoint *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Waypoint_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Waypoint (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Waypoint_ACN
int Encode_ACN_Base_Waypoint(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Waypoint *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Waypoint_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Waypoint (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Waypoint_NATIVE
int Encode_NATIVE_Base_Waypoint(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Waypoint *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Waypoint) );
    return sizeof(asn1SccBase_Waypoint);
}
#endif

#ifdef __NEED_Base_Waypoint_UPER
int Decode_UPER_Base_Waypoint(asn1SccBase_Waypoint *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Waypoint_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Waypoint (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Waypoint_ACN
int Decode_ACN_Base_Waypoint(asn1SccBase_Waypoint *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Waypoint_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Waypoint (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Waypoint_NATIVE
int Decode_NATIVE_Base_Waypoint(asn1SccBase_Waypoint *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Waypoint *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_JointLimitRange_UPER
int Encode_UPER_Base_JointLimitRange(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointLimitRange *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointLimitRange_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointLimitRange (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointLimitRange_ACN
int Encode_ACN_Base_JointLimitRange(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointLimitRange *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointLimitRange_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointLimitRange (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointLimitRange_NATIVE
int Encode_NATIVE_Base_JointLimitRange(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointLimitRange *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_JointLimitRange) );
    return sizeof(asn1SccBase_JointLimitRange);
}
#endif

#ifdef __NEED_Base_JointLimitRange_UPER
int Decode_UPER_Base_JointLimitRange(asn1SccBase_JointLimitRange *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointLimitRange_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointLimitRange (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointLimitRange_ACN
int Decode_ACN_Base_JointLimitRange(asn1SccBase_JointLimitRange *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointLimitRange_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointLimitRange (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointLimitRange_NATIVE
int Decode_NATIVE_Base_JointLimitRange(asn1SccBase_JointLimitRange *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_JointLimitRange *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_TimeStamped_Base_commands_Motion2D_UPER
int Encode_UPER_Base_TimeStamped_Base_commands_Motion2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TimeStamped_Base_commands_Motion2D *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_TimeStamped_Base_commands_Motion2D_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-TimeStamped-Base-commands-Motion2D (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_TimeStamped_Base_commands_Motion2D_ACN
int Encode_ACN_Base_TimeStamped_Base_commands_Motion2D(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_TimeStamped_Base_commands_Motion2D *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_TimeStamped_Base_commands_Motion2D_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-TimeStamped-Base-commands-Motion2D (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_TimeStamped_Base_commands_Motion2D_NATIVE
int Encode_NATIVE_Base_TimeStamped_Base_commands_Motion2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TimeStamped_Base_commands_Motion2D *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_TimeStamped_Base_commands_Motion2D) );
    return sizeof(asn1SccBase_TimeStamped_Base_commands_Motion2D);
}
#endif

#ifdef __NEED_Base_TimeStamped_Base_commands_Motion2D_UPER
int Decode_UPER_Base_TimeStamped_Base_commands_Motion2D(asn1SccBase_TimeStamped_Base_commands_Motion2D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_TimeStamped_Base_commands_Motion2D_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-TimeStamped-Base-commands-Motion2D (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_TimeStamped_Base_commands_Motion2D_ACN
int Decode_ACN_Base_TimeStamped_Base_commands_Motion2D(asn1SccBase_TimeStamped_Base_commands_Motion2D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_TimeStamped_Base_commands_Motion2D_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-TimeStamped-Base-commands-Motion2D (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_TimeStamped_Base_commands_Motion2D_NATIVE
int Decode_NATIVE_Base_TimeStamped_Base_commands_Motion2D(asn1SccBase_TimeStamped_Base_commands_Motion2D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_TimeStamped_Base_commands_Motion2D *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_LinearAngular6DCommand_UPER
int Encode_UPER_Base_LinearAngular6DCommand(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_LinearAngular6DCommand *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_LinearAngular6DCommand_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-LinearAngular6DCommand (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_LinearAngular6DCommand_ACN
int Encode_ACN_Base_LinearAngular6DCommand(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_LinearAngular6DCommand *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_LinearAngular6DCommand_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-LinearAngular6DCommand (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_LinearAngular6DCommand_NATIVE
int Encode_NATIVE_Base_LinearAngular6DCommand(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_LinearAngular6DCommand *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_LinearAngular6DCommand) );
    return sizeof(asn1SccBase_LinearAngular6DCommand);
}
#endif

#ifdef __NEED_Base_LinearAngular6DCommand_UPER
int Decode_UPER_Base_LinearAngular6DCommand(asn1SccBase_LinearAngular6DCommand *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_LinearAngular6DCommand_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-LinearAngular6DCommand (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_LinearAngular6DCommand_ACN
int Decode_ACN_Base_LinearAngular6DCommand(asn1SccBase_LinearAngular6DCommand *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_LinearAngular6DCommand_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-LinearAngular6DCommand (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_LinearAngular6DCommand_NATIVE
int Decode_NATIVE_Base_LinearAngular6DCommand(asn1SccBase_LinearAngular6DCommand *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_LinearAngular6DCommand *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_commands_Motion2D_UPER
int Encode_UPER_Base_commands_Motion2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_Motion2D *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_commands_Motion2D_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-commands-Motion2D (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_commands_Motion2D_ACN
int Encode_ACN_Base_commands_Motion2D(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_commands_Motion2D *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_commands_Motion2D_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-commands-Motion2D (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_commands_Motion2D_NATIVE
int Encode_NATIVE_Base_commands_Motion2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_Motion2D *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_commands_Motion2D) );
    return sizeof(asn1SccBase_commands_Motion2D);
}
#endif

#ifdef __NEED_Base_commands_Motion2D_UPER
int Decode_UPER_Base_commands_Motion2D(asn1SccBase_commands_Motion2D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_commands_Motion2D_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-commands-Motion2D (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_commands_Motion2D_ACN
int Decode_ACN_Base_commands_Motion2D(asn1SccBase_commands_Motion2D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_commands_Motion2D_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-commands-Motion2D (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_commands_Motion2D_NATIVE
int Decode_NATIVE_Base_commands_Motion2D(asn1SccBase_commands_Motion2D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_commands_Motion2D *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_commands_Speed6D_UPER
int Encode_UPER_Base_commands_Speed6D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_Speed6D *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_commands_Speed6D_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-commands-Speed6D (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_commands_Speed6D_ACN
int Encode_ACN_Base_commands_Speed6D(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_commands_Speed6D *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_commands_Speed6D_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-commands-Speed6D (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_commands_Speed6D_NATIVE
int Encode_NATIVE_Base_commands_Speed6D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_Speed6D *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_commands_Speed6D) );
    return sizeof(asn1SccBase_commands_Speed6D);
}
#endif

#ifdef __NEED_Base_commands_Speed6D_UPER
int Decode_UPER_Base_commands_Speed6D(asn1SccBase_commands_Speed6D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_commands_Speed6D_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-commands-Speed6D (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_commands_Speed6D_ACN
int Decode_ACN_Base_commands_Speed6D(asn1SccBase_commands_Speed6D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_commands_Speed6D_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-commands-Speed6D (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_commands_Speed6D_NATIVE
int Decode_NATIVE_Base_commands_Speed6D(asn1SccBase_commands_Speed6D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_commands_Speed6D *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_BodyState_UPER
int Encode_UPER_Base_samples_BodyState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_BodyState *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_BodyState_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-BodyState (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_BodyState_ACN
int Encode_ACN_Base_samples_BodyState(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_BodyState *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_BodyState_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-BodyState (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_BodyState_NATIVE
int Encode_NATIVE_Base_samples_BodyState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_BodyState *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_BodyState) );
    return sizeof(asn1SccBase_samples_BodyState);
}
#endif

#ifdef __NEED_Base_samples_BodyState_UPER
int Decode_UPER_Base_samples_BodyState(asn1SccBase_samples_BodyState *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_BodyState_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-BodyState (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_BodyState_ACN
int Decode_ACN_Base_samples_BodyState(asn1SccBase_samples_BodyState *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_BodyState_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-BodyState (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_BodyState_NATIVE
int Decode_NATIVE_Base_samples_BodyState(asn1SccBase_samples_BodyState *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_BodyState *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_IMUSensors_UPER
int Encode_UPER_Base_samples_IMUSensors(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_IMUSensors *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_IMUSensors_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-IMUSensors (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_IMUSensors_ACN
int Encode_ACN_Base_samples_IMUSensors(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_IMUSensors *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_IMUSensors_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-IMUSensors (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_IMUSensors_NATIVE
int Encode_NATIVE_Base_samples_IMUSensors(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_IMUSensors *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_IMUSensors) );
    return sizeof(asn1SccBase_samples_IMUSensors);
}
#endif

#ifdef __NEED_Base_samples_IMUSensors_UPER
int Decode_UPER_Base_samples_IMUSensors(asn1SccBase_samples_IMUSensors *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_IMUSensors_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-IMUSensors (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_IMUSensors_ACN
int Decode_ACN_Base_samples_IMUSensors(asn1SccBase_samples_IMUSensors *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_IMUSensors_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-IMUSensors (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_IMUSensors_NATIVE
int Decode_NATIVE_Base_samples_IMUSensors(asn1SccBase_samples_IMUSensors *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_IMUSensors *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_Motion2D_UPER
int Encode_UPER_Base_samples_Motion2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Motion2D *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Motion2D_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Motion2D (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Motion2D_ACN
int Encode_ACN_Base_samples_Motion2D(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Motion2D *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Motion2D_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Motion2D (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Motion2D_NATIVE
int Encode_NATIVE_Base_samples_Motion2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Motion2D *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_Motion2D) );
    return sizeof(asn1SccBase_samples_Motion2D);
}
#endif

#ifdef __NEED_Base_samples_Motion2D_UPER
int Decode_UPER_Base_samples_Motion2D(asn1SccBase_samples_Motion2D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Motion2D_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Motion2D (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Motion2D_ACN
int Decode_ACN_Base_samples_Motion2D(asn1SccBase_samples_Motion2D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Motion2D_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Motion2D (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Motion2D_NATIVE
int Decode_NATIVE_Base_samples_Motion2D(asn1SccBase_samples_Motion2D *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_Motion2D *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_Pressure_UPER
int Encode_UPER_Base_samples_Pressure(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Pressure *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Pressure_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Pressure (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Pressure_ACN
int Encode_ACN_Base_samples_Pressure(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Pressure *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Pressure_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Pressure (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Pressure_NATIVE
int Encode_NATIVE_Base_samples_Pressure(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Pressure *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_Pressure) );
    return sizeof(asn1SccBase_samples_Pressure);
}
#endif

#ifdef __NEED_Base_samples_Pressure_UPER
int Decode_UPER_Base_samples_Pressure(asn1SccBase_samples_Pressure *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Pressure_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Pressure (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Pressure_ACN
int Decode_ACN_Base_samples_Pressure(asn1SccBase_samples_Pressure *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Pressure_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Pressure (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Pressure_NATIVE
int Decode_NATIVE_Base_samples_Pressure(asn1SccBase_samples_Pressure *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_Pressure *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_UPER
int Encode_UPER_Base_samples_RigidBodyAcceleration(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyAcceleration *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_RigidBodyAcceleration_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-RigidBodyAcceleration (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_ACN
int Encode_ACN_Base_samples_RigidBodyAcceleration(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_RigidBodyAcceleration *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_RigidBodyAcceleration_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-RigidBodyAcceleration (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_NATIVE
int Encode_NATIVE_Base_samples_RigidBodyAcceleration(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyAcceleration *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_RigidBodyAcceleration) );
    return sizeof(asn1SccBase_samples_RigidBodyAcceleration);
}
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_UPER
int Decode_UPER_Base_samples_RigidBodyAcceleration(asn1SccBase_samples_RigidBodyAcceleration *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_RigidBodyAcceleration_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-RigidBodyAcceleration (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_ACN
int Decode_ACN_Base_samples_RigidBodyAcceleration(asn1SccBase_samples_RigidBodyAcceleration *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_RigidBodyAcceleration_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-RigidBodyAcceleration (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_NATIVE
int Decode_NATIVE_Base_samples_RigidBodyAcceleration(asn1SccBase_samples_RigidBodyAcceleration *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_RigidBodyAcceleration *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_Wrench_UPER
int Encode_UPER_Base_samples_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrench *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Wrench_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Wrench (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Wrench_ACN
int Encode_ACN_Base_samples_Wrench(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Wrench *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Wrench_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Wrench (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Wrench_NATIVE
int Encode_NATIVE_Base_samples_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrench *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_Wrench) );
    return sizeof(asn1SccBase_samples_Wrench);
}
#endif

#ifdef __NEED_Base_samples_Wrench_UPER
int Decode_UPER_Base_samples_Wrench(asn1SccBase_samples_Wrench *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Wrench_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Wrench (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Wrench_ACN
int Decode_ACN_Base_samples_Wrench(asn1SccBase_samples_Wrench *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Wrench_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Wrench (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Wrench_NATIVE
int Decode_NATIVE_Base_samples_Wrench(asn1SccBase_samples_Wrench *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_Wrench *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_size_t_UPER
int Encode_UPER_Base_samples_frame_frame_size_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_size_t *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_frame_frame_size_t_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-frame-frame-size-t (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_size_t_ACN
int Encode_ACN_Base_samples_frame_frame_size_t(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_frame_frame_size_t *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_frame_frame_size_t_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-frame-frame-size-t (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_size_t_NATIVE
int Encode_NATIVE_Base_samples_frame_frame_size_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_size_t *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_frame_frame_size_t) );
    return sizeof(asn1SccBase_samples_frame_frame_size_t);
}
#endif

#ifdef __NEED_Base_samples_frame_frame_size_t_UPER
int Decode_UPER_Base_samples_frame_frame_size_t(asn1SccBase_samples_frame_frame_size_t *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_frame_frame_size_t_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-frame-frame-size-t (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_size_t_ACN
int Decode_ACN_Base_samples_frame_frame_size_t(asn1SccBase_samples_frame_frame_size_t *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_frame_frame_size_t_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-frame-frame-size-t (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_size_t_NATIVE
int Decode_NATIVE_Base_samples_frame_frame_size_t(asn1SccBase_samples_frame_frame_size_t *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_frame_frame_size_t *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_JointLimits_UPER
int Encode_UPER_Base_JointLimits(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointLimits *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointLimits_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointLimits (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointLimits_ACN
int Encode_ACN_Base_JointLimits(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointLimits *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointLimits_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointLimits (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointLimits_NATIVE
int Encode_NATIVE_Base_JointLimits(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointLimits *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_JointLimits) );
    return sizeof(asn1SccBase_JointLimits);
}
#endif

#ifdef __NEED_Base_JointLimits_UPER
int Decode_UPER_Base_JointLimits(asn1SccBase_JointLimits *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointLimits_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointLimits (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointLimits_ACN
int Decode_ACN_Base_JointLimits(asn1SccBase_JointLimits *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointLimits_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointLimits (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointLimits_NATIVE
int Decode_NATIVE_Base_JointLimits(asn1SccBase_JointLimits *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_JointLimits *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_JointTransform_UPER
int Encode_UPER_Base_JointTransform(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransform *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointTransform_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointTransform (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointTransform_ACN
int Encode_ACN_Base_JointTransform(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointTransform *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointTransform_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointTransform (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointTransform_NATIVE
int Encode_NATIVE_Base_JointTransform(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransform *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_JointTransform) );
    return sizeof(asn1SccBase_JointTransform);
}
#endif

#ifdef __NEED_Base_JointTransform_UPER
int Decode_UPER_Base_JointTransform(asn1SccBase_JointTransform *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointTransform_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointTransform (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointTransform_ACN
int Decode_ACN_Base_JointTransform(asn1SccBase_JointTransform *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointTransform_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointTransform (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointTransform_NATIVE
int Decode_NATIVE_Base_JointTransform(asn1SccBase_JointTransform *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_JointTransform *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_JointsTrajectory_UPER
int Encode_UPER_Base_JointsTrajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointsTrajectory *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointsTrajectory_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointsTrajectory (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointsTrajectory_ACN
int Encode_ACN_Base_JointsTrajectory(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointsTrajectory *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointsTrajectory_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointsTrajectory (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointsTrajectory_NATIVE
int Encode_NATIVE_Base_JointsTrajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointsTrajectory *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_JointsTrajectory) );
    return sizeof(asn1SccBase_JointsTrajectory);
}
#endif

#ifdef __NEED_Base_JointsTrajectory_UPER
int Decode_UPER_Base_JointsTrajectory(asn1SccBase_JointsTrajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointsTrajectory_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointsTrajectory (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointsTrajectory_ACN
int Decode_ACN_Base_JointsTrajectory(asn1SccBase_JointsTrajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointsTrajectory_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointsTrajectory (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointsTrajectory_NATIVE
int Decode_NATIVE_Base_JointsTrajectory(asn1SccBase_JointsTrajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_JointsTrajectory *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointLimitRange_UPER
int Encode_UPER_Base_NamedVector_Base_JointLimitRange(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointLimitRange *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_NamedVector_Base_JointLimitRange_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-NamedVector-Base-JointLimitRange (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointLimitRange_ACN
int Encode_ACN_Base_NamedVector_Base_JointLimitRange(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_NamedVector_Base_JointLimitRange *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_NamedVector_Base_JointLimitRange_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-NamedVector-Base-JointLimitRange (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointLimitRange_NATIVE
int Encode_NATIVE_Base_NamedVector_Base_JointLimitRange(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointLimitRange *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_NamedVector_Base_JointLimitRange) );
    return sizeof(asn1SccBase_NamedVector_Base_JointLimitRange);
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointLimitRange_UPER
int Decode_UPER_Base_NamedVector_Base_JointLimitRange(asn1SccBase_NamedVector_Base_JointLimitRange *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_NamedVector_Base_JointLimitRange_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-NamedVector-Base-JointLimitRange (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointLimitRange_ACN
int Decode_ACN_Base_NamedVector_Base_JointLimitRange(asn1SccBase_NamedVector_Base_JointLimitRange *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_NamedVector_Base_JointLimitRange_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-NamedVector-Base-JointLimitRange (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointLimitRange_NATIVE
int Decode_NATIVE_Base_NamedVector_Base_JointLimitRange(asn1SccBase_NamedVector_Base_JointLimitRange *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_NamedVector_Base_JointLimitRange *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointState_UPER
int Encode_UPER_Base_NamedVector_Base_JointState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointState *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_NamedVector_Base_JointState_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-NamedVector-Base-JointState (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointState_ACN
int Encode_ACN_Base_NamedVector_Base_JointState(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_NamedVector_Base_JointState *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_NamedVector_Base_JointState_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-NamedVector-Base-JointState (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointState_NATIVE
int Encode_NATIVE_Base_NamedVector_Base_JointState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointState *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_NamedVector_Base_JointState) );
    return sizeof(asn1SccBase_NamedVector_Base_JointState);
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointState_UPER
int Decode_UPER_Base_NamedVector_Base_JointState(asn1SccBase_NamedVector_Base_JointState *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_NamedVector_Base_JointState_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-NamedVector-Base-JointState (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointState_ACN
int Decode_ACN_Base_NamedVector_Base_JointState(asn1SccBase_NamedVector_Base_JointState *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_NamedVector_Base_JointState_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-NamedVector-Base-JointState (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointState_NATIVE
int Decode_NATIVE_Base_NamedVector_Base_JointState(asn1SccBase_NamedVector_Base_JointState *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_NamedVector_Base_JointState *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_Wrench_UPER
int Encode_UPER_Base_NamedVector_Base_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_Wrench *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_NamedVector_Base_Wrench_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-NamedVector-Base-Wrench (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_Wrench_ACN
int Encode_ACN_Base_NamedVector_Base_Wrench(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_NamedVector_Base_Wrench *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_NamedVector_Base_Wrench_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-NamedVector-Base-Wrench (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_Wrench_NATIVE
int Encode_NATIVE_Base_NamedVector_Base_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_Wrench *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_NamedVector_Base_Wrench) );
    return sizeof(asn1SccBase_NamedVector_Base_Wrench);
}
#endif

#ifdef __NEED_Base_NamedVector_Base_Wrench_UPER
int Decode_UPER_Base_NamedVector_Base_Wrench(asn1SccBase_NamedVector_Base_Wrench *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_NamedVector_Base_Wrench_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-NamedVector-Base-Wrench (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_Wrench_ACN
int Decode_ACN_Base_NamedVector_Base_Wrench(asn1SccBase_NamedVector_Base_Wrench *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_NamedVector_Base_Wrench_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-NamedVector-Base-Wrench (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_Wrench_NATIVE
int Decode_NATIVE_Base_NamedVector_Base_Wrench(asn1SccBase_NamedVector_Base_Wrench *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_NamedVector_Base_Wrench *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTrajectory_UPER
int Encode_UPER_Base_NamedVector_Base_JointTrajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointTrajectory *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_NamedVector_Base_JointTrajectory_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-NamedVector-Base-JointTrajectory (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTrajectory_ACN
int Encode_ACN_Base_NamedVector_Base_JointTrajectory(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_NamedVector_Base_JointTrajectory *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_NamedVector_Base_JointTrajectory_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-NamedVector-Base-JointTrajectory (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTrajectory_NATIVE
int Encode_NATIVE_Base_NamedVector_Base_JointTrajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointTrajectory *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_NamedVector_Base_JointTrajectory) );
    return sizeof(asn1SccBase_NamedVector_Base_JointTrajectory);
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTrajectory_UPER
int Decode_UPER_Base_NamedVector_Base_JointTrajectory(asn1SccBase_NamedVector_Base_JointTrajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_NamedVector_Base_JointTrajectory_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-NamedVector-Base-JointTrajectory (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTrajectory_ACN
int Decode_ACN_Base_NamedVector_Base_JointTrajectory(asn1SccBase_NamedVector_Base_JointTrajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_NamedVector_Base_JointTrajectory_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-NamedVector-Base-JointTrajectory (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTrajectory_NATIVE
int Decode_NATIVE_Base_NamedVector_Base_JointTrajectory(asn1SccBase_NamedVector_Base_JointTrajectory *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_NamedVector_Base_JointTrajectory *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_UPER
int Encode_UPER_Base_samples_DepthMap(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_DepthMap_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-DepthMap (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_ACN
int Encode_ACN_Base_samples_DepthMap(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_DepthMap *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_DepthMap_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-DepthMap (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_NATIVE
int Encode_NATIVE_Base_samples_DepthMap(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_DepthMap) );
    return sizeof(asn1SccBase_samples_DepthMap);
}
#endif

#ifdef __NEED_Base_samples_DepthMap_UPER
int Decode_UPER_Base_samples_DepthMap(asn1SccBase_samples_DepthMap *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_DepthMap_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-DepthMap (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_ACN
int Decode_ACN_Base_samples_DepthMap(asn1SccBase_samples_DepthMap *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_DepthMap_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-DepthMap (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_DepthMap_NATIVE
int Decode_NATIVE_Base_samples_DepthMap(asn1SccBase_samples_DepthMap *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_DepthMap *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_DistanceImage_UPER
int Encode_UPER_Base_samples_DistanceImage(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DistanceImage *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_DistanceImage_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-DistanceImage (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_DistanceImage_ACN
int Encode_ACN_Base_samples_DistanceImage(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_DistanceImage *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_DistanceImage_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-DistanceImage (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_DistanceImage_NATIVE
int Encode_NATIVE_Base_samples_DistanceImage(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DistanceImage *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_DistanceImage) );
    return sizeof(asn1SccBase_samples_DistanceImage);
}
#endif

#ifdef __NEED_Base_samples_DistanceImage_UPER
int Decode_UPER_Base_samples_DistanceImage(asn1SccBase_samples_DistanceImage *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_DistanceImage_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-DistanceImage (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_DistanceImage_ACN
int Decode_ACN_Base_samples_DistanceImage(asn1SccBase_samples_DistanceImage *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_DistanceImage_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-DistanceImage (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_DistanceImage_NATIVE
int Decode_NATIVE_Base_samples_DistanceImage(asn1SccBase_samples_DistanceImage *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_DistanceImage *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_commands_Joints_UPER
int Encode_UPER_Base_commands_Joints(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_Joints *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_commands_Joints_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-commands-Joints (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_commands_Joints_ACN
int Encode_ACN_Base_commands_Joints(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_commands_Joints *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_commands_Joints_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-commands-Joints (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_commands_Joints_NATIVE
int Encode_NATIVE_Base_commands_Joints(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_Joints *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_commands_Joints) );
    return sizeof(asn1SccBase_commands_Joints);
}
#endif

#ifdef __NEED_Base_commands_Joints_UPER
int Decode_UPER_Base_commands_Joints(asn1SccBase_commands_Joints *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_commands_Joints_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-commands-Joints (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_commands_Joints_ACN
int Decode_ACN_Base_commands_Joints(asn1SccBase_commands_Joints *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_commands_Joints_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-commands-Joints (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_commands_Joints_NATIVE
int Decode_NATIVE_Base_commands_Joints(asn1SccBase_commands_Joints *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_commands_Joints *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_LaserScan_UPER
int Encode_UPER_Base_samples_LaserScan(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_LaserScan *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_LaserScan_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-LaserScan (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_LaserScan_ACN
int Encode_ACN_Base_samples_LaserScan(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_LaserScan *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_LaserScan_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-LaserScan (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_LaserScan_NATIVE
int Encode_NATIVE_Base_samples_LaserScan(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_LaserScan *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_LaserScan) );
    return sizeof(asn1SccBase_samples_LaserScan);
}
#endif

#ifdef __NEED_Base_samples_LaserScan_UPER
int Decode_UPER_Base_samples_LaserScan(asn1SccBase_samples_LaserScan *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_LaserScan_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-LaserScan (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_LaserScan_ACN
int Decode_ACN_Base_samples_LaserScan(asn1SccBase_samples_LaserScan *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_LaserScan_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-LaserScan (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_LaserScan_NATIVE
int Decode_NATIVE_Base_samples_LaserScan(asn1SccBase_samples_LaserScan *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_LaserScan *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_Pointcloud_UPER
int Encode_UPER_Base_samples_Pointcloud(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Pointcloud *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Pointcloud_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Pointcloud (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Pointcloud_ACN
int Encode_ACN_Base_samples_Pointcloud(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Pointcloud *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Pointcloud_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Pointcloud (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Pointcloud_NATIVE
int Encode_NATIVE_Base_samples_Pointcloud(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Pointcloud *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_Pointcloud) );
    return sizeof(asn1SccBase_samples_Pointcloud);
}
#endif

#ifdef __NEED_Base_samples_Pointcloud_UPER
int Decode_UPER_Base_samples_Pointcloud(asn1SccBase_samples_Pointcloud *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Pointcloud_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Pointcloud (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Pointcloud_ACN
int Decode_ACN_Base_samples_Pointcloud(asn1SccBase_samples_Pointcloud *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Pointcloud_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Pointcloud (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Pointcloud_NATIVE
int Decode_NATIVE_Base_samples_Pointcloud(asn1SccBase_samples_Pointcloud *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_Pointcloud *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyState_UPER
int Encode_UPER_Base_samples_RigidBodyState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyState *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_RigidBodyState_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-RigidBodyState (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyState_ACN
int Encode_ACN_Base_samples_RigidBodyState(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_RigidBodyState *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_RigidBodyState_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-RigidBodyState (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyState_NATIVE
int Encode_NATIVE_Base_samples_RigidBodyState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyState *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_RigidBodyState) );
    return sizeof(asn1SccBase_samples_RigidBodyState);
}
#endif

#ifdef __NEED_Base_samples_RigidBodyState_UPER
int Decode_UPER_Base_samples_RigidBodyState(asn1SccBase_samples_RigidBodyState *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_RigidBodyState_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-RigidBodyState (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyState_ACN
int Decode_ACN_Base_samples_RigidBodyState(asn1SccBase_samples_RigidBodyState *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_RigidBodyState_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-RigidBodyState (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyState_NATIVE
int Decode_NATIVE_Base_samples_RigidBodyState(asn1SccBase_samples_RigidBodyState *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_RigidBodyState *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_Sonar_UPER
int Encode_UPER_Base_samples_Sonar(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Sonar *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Sonar_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Sonar (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Sonar_ACN
int Encode_ACN_Base_samples_Sonar(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Sonar *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Sonar_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Sonar (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Sonar_NATIVE
int Encode_NATIVE_Base_samples_Sonar(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Sonar *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_Sonar) );
    return sizeof(asn1SccBase_samples_Sonar);
}
#endif

#ifdef __NEED_Base_samples_Sonar_UPER
int Decode_UPER_Base_samples_Sonar(asn1SccBase_samples_Sonar *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Sonar_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Sonar (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Sonar_ACN
int Decode_ACN_Base_samples_Sonar(asn1SccBase_samples_Sonar *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Sonar_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Sonar (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Sonar_NATIVE
int Decode_NATIVE_Base_samples_Sonar(asn1SccBase_samples_Sonar *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_Sonar *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_SonarBeam_UPER
int Encode_UPER_Base_samples_SonarBeam(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_SonarBeam *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_SonarBeam_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-SonarBeam (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_SonarBeam_ACN
int Encode_ACN_Base_samples_SonarBeam(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_SonarBeam *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_SonarBeam_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-SonarBeam (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_SonarBeam_NATIVE
int Encode_NATIVE_Base_samples_SonarBeam(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_SonarBeam *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_SonarBeam) );
    return sizeof(asn1SccBase_samples_SonarBeam);
}
#endif

#ifdef __NEED_Base_samples_SonarBeam_UPER
int Decode_UPER_Base_samples_SonarBeam(asn1SccBase_samples_SonarBeam *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_SonarBeam_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-SonarBeam (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_SonarBeam_ACN
int Decode_ACN_Base_samples_SonarBeam(asn1SccBase_samples_SonarBeam *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_SonarBeam_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-SonarBeam (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_SonarBeam_NATIVE
int Decode_NATIVE_Base_samples_SonarBeam(asn1SccBase_samples_SonarBeam *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_SonarBeam *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_SonarScan_UPER
int Encode_UPER_Base_samples_SonarScan(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_SonarScan *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_SonarScan_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-SonarScan (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_SonarScan_ACN
int Encode_ACN_Base_samples_SonarScan(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_SonarScan *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_SonarScan_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-SonarScan (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_SonarScan_NATIVE
int Encode_NATIVE_Base_samples_SonarScan(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_SonarScan *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_SonarScan) );
    return sizeof(asn1SccBase_samples_SonarScan);
}
#endif

#ifdef __NEED_Base_samples_SonarScan_UPER
int Decode_UPER_Base_samples_SonarScan(asn1SccBase_samples_SonarScan *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_SonarScan_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-SonarScan (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_SonarScan_ACN
int Decode_ACN_Base_samples_SonarScan(asn1SccBase_samples_SonarScan *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_SonarScan_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-SonarScan (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_SonarScan_NATIVE
int Decode_NATIVE_Base_samples_SonarScan(asn1SccBase_samples_SonarScan *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_SonarScan *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_Wrenches_UPER
int Encode_UPER_Base_samples_Wrenches(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrenches *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Wrenches_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Wrenches (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Wrenches_ACN
int Encode_ACN_Base_samples_Wrenches(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Wrenches *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Wrenches_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Wrenches (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Wrenches_NATIVE
int Encode_NATIVE_Base_samples_Wrenches(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrenches *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_Wrenches) );
    return sizeof(asn1SccBase_samples_Wrenches);
}
#endif

#ifdef __NEED_Base_samples_Wrenches_UPER
int Decode_UPER_Base_samples_Wrenches(asn1SccBase_samples_Wrenches *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Wrenches_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Wrenches (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Wrenches_ACN
int Decode_ACN_Base_samples_Wrenches(asn1SccBase_samples_Wrenches *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Wrenches_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Wrenches (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Wrenches_NATIVE
int Decode_NATIVE_Base_samples_Wrenches(asn1SccBase_samples_Wrenches *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_Wrenches *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_attrib_t_UPER
int Encode_UPER_Base_samples_frame_frame_attrib_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_attrib_t *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_frame_frame_attrib_t_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-frame-frame-attrib-t (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_attrib_t_ACN
int Encode_ACN_Base_samples_frame_frame_attrib_t(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_frame_frame_attrib_t *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_frame_frame_attrib_t_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-frame-frame-attrib-t (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_attrib_t_NATIVE
int Encode_NATIVE_Base_samples_frame_frame_attrib_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_attrib_t *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_frame_frame_attrib_t) );
    return sizeof(asn1SccBase_samples_frame_frame_attrib_t);
}
#endif

#ifdef __NEED_Base_samples_frame_frame_attrib_t_UPER
int Decode_UPER_Base_samples_frame_frame_attrib_t(asn1SccBase_samples_frame_frame_attrib_t *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_frame_frame_attrib_t_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-frame-frame-attrib-t (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_attrib_t_ACN
int Decode_ACN_Base_samples_frame_frame_attrib_t(asn1SccBase_samples_frame_frame_attrib_t *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_frame_frame_attrib_t_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-frame-frame-attrib-t (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_frame_attrib_t_NATIVE
int Decode_NATIVE_Base_samples_frame_frame_attrib_t(asn1SccBase_samples_frame_frame_attrib_t *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_frame_frame_attrib_t *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_JointTransformVector_UPER
int Encode_UPER_Base_JointTransformVector(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransformVector *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointTransformVector_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointTransformVector (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointTransformVector_ACN
int Encode_ACN_Base_JointTransformVector(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointTransformVector *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointTransformVector_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointTransformVector (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointTransformVector_NATIVE
int Encode_NATIVE_Base_JointTransformVector(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransformVector *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_JointTransformVector) );
    return sizeof(asn1SccBase_JointTransformVector);
}
#endif

#ifdef __NEED_Base_JointTransformVector_UPER
int Decode_UPER_Base_JointTransformVector(asn1SccBase_JointTransformVector *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointTransformVector_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointTransformVector (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointTransformVector_ACN
int Decode_ACN_Base_JointTransformVector(asn1SccBase_JointTransformVector *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointTransformVector_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointTransformVector (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointTransformVector_NATIVE
int Decode_NATIVE_Base_JointTransformVector(asn1SccBase_JointTransformVector *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_JointTransformVector *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTransform_UPER
int Encode_UPER_Base_NamedVector_Base_JointTransform(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointTransform *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_NamedVector_Base_JointTransform_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-NamedVector-Base-JointTransform (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTransform_ACN
int Encode_ACN_Base_NamedVector_Base_JointTransform(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_NamedVector_Base_JointTransform *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_NamedVector_Base_JointTransform_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-NamedVector-Base-JointTransform (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTransform_NATIVE
int Encode_NATIVE_Base_NamedVector_Base_JointTransform(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointTransform *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_NamedVector_Base_JointTransform) );
    return sizeof(asn1SccBase_NamedVector_Base_JointTransform);
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTransform_UPER
int Decode_UPER_Base_NamedVector_Base_JointTransform(asn1SccBase_NamedVector_Base_JointTransform *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_NamedVector_Base_JointTransform_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-NamedVector-Base-JointTransform (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTransform_ACN
int Decode_ACN_Base_NamedVector_Base_JointTransform(asn1SccBase_NamedVector_Base_JointTransform *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_NamedVector_Base_JointTransform_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-NamedVector-Base-JointTransform (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTransform_NATIVE
int Decode_NATIVE_Base_NamedVector_Base_JointTransform(asn1SccBase_NamedVector_Base_JointTransform *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_NamedVector_Base_JointTransform *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_Frame_UPER
int Encode_UPER_Base_samples_frame_Frame(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_Frame *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_frame_Frame_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-frame-Frame (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_frame_Frame_ACN
int Encode_ACN_Base_samples_frame_Frame(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_frame_Frame *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_frame_Frame_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-frame-Frame (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_frame_Frame_NATIVE
int Encode_NATIVE_Base_samples_frame_Frame(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_Frame *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_frame_Frame) );
    return sizeof(asn1SccBase_samples_frame_Frame);
}
#endif

#ifdef __NEED_Base_samples_frame_Frame_UPER
int Decode_UPER_Base_samples_frame_Frame(asn1SccBase_samples_frame_Frame *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_frame_Frame_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-frame-Frame (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_Frame_ACN
int Decode_ACN_Base_samples_frame_Frame(asn1SccBase_samples_frame_Frame *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_frame_Frame_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-frame-Frame (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_Frame_NATIVE
int Decode_NATIVE_Base_samples_frame_Frame(asn1SccBase_samples_frame_Frame *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_frame_Frame *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_FramePair_UPER
int Encode_UPER_Base_samples_frame_FramePair(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_FramePair *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_frame_FramePair_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-frame-FramePair (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_frame_FramePair_ACN
int Encode_ACN_Base_samples_frame_FramePair(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_frame_FramePair *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_frame_FramePair_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-frame-FramePair (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_frame_FramePair_NATIVE
int Encode_NATIVE_Base_samples_frame_FramePair(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_FramePair *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_frame_FramePair) );
    return sizeof(asn1SccBase_samples_frame_FramePair);
}
#endif

#ifdef __NEED_Base_samples_frame_FramePair_UPER
int Decode_UPER_Base_samples_frame_FramePair(asn1SccBase_samples_frame_FramePair *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_frame_FramePair_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-frame-FramePair (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_FramePair_ACN
int Decode_ACN_Base_samples_frame_FramePair(asn1SccBase_samples_frame_FramePair *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_frame_FramePair_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-frame-FramePair (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_frame_FramePair_NATIVE
int Decode_NATIVE_Base_samples_frame_FramePair(asn1SccBase_samples_frame_FramePair *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_frame_FramePair *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Wrappers_AngleAxisd_UPER
int Encode_UPER_Wrappers_AngleAxisd(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_AngleAxisd *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_AngleAxisd_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-AngleAxisd (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_AngleAxisd_ACN
int Encode_ACN_Wrappers_AngleAxisd(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_AngleAxisd *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_AngleAxisd_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-AngleAxisd (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_AngleAxisd_NATIVE
int Encode_NATIVE_Wrappers_AngleAxisd(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_AngleAxisd *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccWrappers_AngleAxisd) );
    return sizeof(asn1SccWrappers_AngleAxisd);
}
#endif

#ifdef __NEED_Wrappers_AngleAxisd_UPER
int Decode_UPER_Wrappers_AngleAxisd(asn1SccWrappers_AngleAxisd *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_AngleAxisd_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-AngleAxisd (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_AngleAxisd_ACN
int Decode_ACN_Wrappers_AngleAxisd(asn1SccWrappers_AngleAxisd *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_AngleAxisd_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-AngleAxisd (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_AngleAxisd_NATIVE
int Decode_NATIVE_Wrappers_AngleAxisd(asn1SccWrappers_AngleAxisd *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccWrappers_AngleAxisd *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Wrappers_Vector2d_UPER
int Encode_UPER_Wrappers_Vector2d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector2d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Vector2d_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Vector2d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Vector2d_ACN
int Encode_ACN_Wrappers_Vector2d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Vector2d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Vector2d_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Vector2d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Vector2d_NATIVE
int Encode_NATIVE_Wrappers_Vector2d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector2d *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccWrappers_Vector2d) );
    return sizeof(asn1SccWrappers_Vector2d);
}
#endif

#ifdef __NEED_Wrappers_Vector2d_UPER
int Decode_UPER_Wrappers_Vector2d(asn1SccWrappers_Vector2d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Vector2d_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Vector2d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Vector2d_ACN
int Decode_ACN_Wrappers_Vector2d(asn1SccWrappers_Vector2d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Vector2d_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Vector2d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Vector2d_NATIVE
int Decode_NATIVE_Wrappers_Vector2d(asn1SccWrappers_Vector2d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccWrappers_Vector2d *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix2d_UPER
int Encode_UPER_Wrappers_Matrix2d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix2d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Matrix2d_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Matrix2d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix2d_ACN
int Encode_ACN_Wrappers_Matrix2d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Matrix2d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Matrix2d_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Matrix2d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix2d_NATIVE
int Encode_NATIVE_Wrappers_Matrix2d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix2d *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccWrappers_Matrix2d) );
    return sizeof(asn1SccWrappers_Matrix2d);
}
#endif

#ifdef __NEED_Wrappers_Matrix2d_UPER
int Decode_UPER_Wrappers_Matrix2d(asn1SccWrappers_Matrix2d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Matrix2d_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Matrix2d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix2d_ACN
int Decode_ACN_Wrappers_Matrix2d(asn1SccWrappers_Matrix2d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Matrix2d_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Matrix2d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix2d_NATIVE
int Decode_NATIVE_Wrappers_Matrix2d(asn1SccWrappers_Matrix2d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccWrappers_Matrix2d *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Wrappers_Vector3d_UPER
int Encode_UPER_Wrappers_Vector3d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector3d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Vector3d_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Vector3d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Vector3d_ACN
int Encode_ACN_Wrappers_Vector3d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Vector3d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Vector3d_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Vector3d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Vector3d_NATIVE
int Encode_NATIVE_Wrappers_Vector3d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector3d *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccWrappers_Vector3d) );
    return sizeof(asn1SccWrappers_Vector3d);
}
#endif

#ifdef __NEED_Wrappers_Vector3d_UPER
int Decode_UPER_Wrappers_Vector3d(asn1SccWrappers_Vector3d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Vector3d_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Vector3d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Vector3d_ACN
int Decode_ACN_Wrappers_Vector3d(asn1SccWrappers_Vector3d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Vector3d_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Vector3d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Vector3d_NATIVE
int Decode_NATIVE_Wrappers_Vector3d(asn1SccWrappers_Vector3d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccWrappers_Vector3d *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix3d_UPER
int Encode_UPER_Wrappers_Matrix3d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix3d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Matrix3d_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Matrix3d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix3d_ACN
int Encode_ACN_Wrappers_Matrix3d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Matrix3d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Matrix3d_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Matrix3d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix3d_NATIVE
int Encode_NATIVE_Wrappers_Matrix3d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix3d *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccWrappers_Matrix3d) );
    return sizeof(asn1SccWrappers_Matrix3d);
}
#endif

#ifdef __NEED_Wrappers_Matrix3d_UPER
int Decode_UPER_Wrappers_Matrix3d(asn1SccWrappers_Matrix3d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Matrix3d_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Matrix3d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix3d_ACN
int Decode_ACN_Wrappers_Matrix3d(asn1SccWrappers_Matrix3d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Matrix3d_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Matrix3d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix3d_NATIVE
int Decode_NATIVE_Wrappers_Matrix3d(asn1SccWrappers_Matrix3d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccWrappers_Matrix3d *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Wrappers_Vector4d_UPER
int Encode_UPER_Wrappers_Vector4d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector4d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Vector4d_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Vector4d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Vector4d_ACN
int Encode_ACN_Wrappers_Vector4d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Vector4d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Vector4d_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Vector4d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Vector4d_NATIVE
int Encode_NATIVE_Wrappers_Vector4d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector4d *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccWrappers_Vector4d) );
    return sizeof(asn1SccWrappers_Vector4d);
}
#endif

#ifdef __NEED_Wrappers_Vector4d_UPER
int Decode_UPER_Wrappers_Vector4d(asn1SccWrappers_Vector4d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Vector4d_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Vector4d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Vector4d_ACN
int Decode_ACN_Wrappers_Vector4d(asn1SccWrappers_Vector4d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Vector4d_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Vector4d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Vector4d_NATIVE
int Decode_NATIVE_Wrappers_Vector4d(asn1SccWrappers_Vector4d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccWrappers_Vector4d *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix4d_UPER
int Encode_UPER_Wrappers_Matrix4d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix4d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Matrix4d_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Matrix4d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix4d_ACN
int Encode_ACN_Wrappers_Matrix4d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Matrix4d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Matrix4d_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Matrix4d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix4d_NATIVE
int Encode_NATIVE_Wrappers_Matrix4d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix4d *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccWrappers_Matrix4d) );
    return sizeof(asn1SccWrappers_Matrix4d);
}
#endif

#ifdef __NEED_Wrappers_Matrix4d_UPER
int Decode_UPER_Wrappers_Matrix4d(asn1SccWrappers_Matrix4d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Matrix4d_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Matrix4d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix4d_ACN
int Decode_ACN_Wrappers_Matrix4d(asn1SccWrappers_Matrix4d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Matrix4d_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Matrix4d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix4d_NATIVE
int Decode_NATIVE_Wrappers_Matrix4d(asn1SccWrappers_Matrix4d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccWrappers_Matrix4d *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Wrappers_Vector6d_UPER
int Encode_UPER_Wrappers_Vector6d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector6d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Vector6d_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Vector6d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Vector6d_ACN
int Encode_ACN_Wrappers_Vector6d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Vector6d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Vector6d_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Vector6d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Vector6d_NATIVE
int Encode_NATIVE_Wrappers_Vector6d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector6d *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccWrappers_Vector6d) );
    return sizeof(asn1SccWrappers_Vector6d);
}
#endif

#ifdef __NEED_Wrappers_Vector6d_UPER
int Decode_UPER_Wrappers_Vector6d(asn1SccWrappers_Vector6d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Vector6d_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Vector6d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Vector6d_ACN
int Decode_ACN_Wrappers_Vector6d(asn1SccWrappers_Vector6d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Vector6d_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Vector6d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Vector6d_NATIVE
int Decode_NATIVE_Wrappers_Vector6d(asn1SccWrappers_Vector6d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccWrappers_Vector6d *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix6d_UPER
int Encode_UPER_Wrappers_Matrix6d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix6d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Matrix6d_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Matrix6d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix6d_ACN
int Encode_ACN_Wrappers_Matrix6d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Matrix6d *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Matrix6d_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Matrix6d (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix6d_NATIVE
int Encode_NATIVE_Wrappers_Matrix6d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix6d *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccWrappers_Matrix6d) );
    return sizeof(asn1SccWrappers_Matrix6d);
}
#endif

#ifdef __NEED_Wrappers_Matrix6d_UPER
int Decode_UPER_Wrappers_Matrix6d(asn1SccWrappers_Matrix6d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Matrix6d_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Matrix6d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix6d_ACN
int Decode_ACN_Wrappers_Matrix6d(asn1SccWrappers_Matrix6d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Matrix6d_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Matrix6d (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Matrix6d_NATIVE
int Decode_NATIVE_Wrappers_Matrix6d(asn1SccWrappers_Matrix6d *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccWrappers_Matrix6d *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Wrappers_MatrixXd_UPER
int Encode_UPER_Wrappers_MatrixXd(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_MatrixXd *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_MatrixXd_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-MatrixXd (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_MatrixXd_ACN
int Encode_ACN_Wrappers_MatrixXd(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_MatrixXd *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_MatrixXd_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-MatrixXd (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_MatrixXd_NATIVE
int Encode_NATIVE_Wrappers_MatrixXd(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_MatrixXd *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccWrappers_MatrixXd) );
    return sizeof(asn1SccWrappers_MatrixXd);
}
#endif

#ifdef __NEED_Wrappers_MatrixXd_UPER
int Decode_UPER_Wrappers_MatrixXd(asn1SccWrappers_MatrixXd *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_MatrixXd_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-MatrixXd (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_MatrixXd_ACN
int Decode_ACN_Wrappers_MatrixXd(asn1SccWrappers_MatrixXd *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_MatrixXd_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-MatrixXd (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_MatrixXd_NATIVE
int Decode_NATIVE_Wrappers_MatrixXd(asn1SccWrappers_MatrixXd *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccWrappers_MatrixXd *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Wrappers_Quaterniond_UPER
int Encode_UPER_Wrappers_Quaterniond(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Quaterniond *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Quaterniond_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Quaterniond (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Quaterniond_ACN
int Encode_ACN_Wrappers_Quaterniond(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Quaterniond *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_Quaterniond_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-Quaterniond (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_Quaterniond_NATIVE
int Encode_NATIVE_Wrappers_Quaterniond(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Quaterniond *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccWrappers_Quaterniond) );
    return sizeof(asn1SccWrappers_Quaterniond);
}
#endif

#ifdef __NEED_Wrappers_Quaterniond_UPER
int Decode_UPER_Wrappers_Quaterniond(asn1SccWrappers_Quaterniond *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Quaterniond_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Quaterniond (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Quaterniond_ACN
int Decode_ACN_Wrappers_Quaterniond(asn1SccWrappers_Quaterniond *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_Quaterniond_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-Quaterniond (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_Quaterniond_NATIVE
int Decode_NATIVE_Wrappers_Quaterniond(asn1SccWrappers_Quaterniond *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccWrappers_Quaterniond *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Wrappers_VectorXd_UPER
int Encode_UPER_Wrappers_VectorXd(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_VectorXd *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_VectorXd_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-VectorXd (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_VectorXd_ACN
int Encode_ACN_Wrappers_VectorXd(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_VectorXd *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_VectorXd_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-VectorXd (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_VectorXd_NATIVE
int Encode_NATIVE_Wrappers_VectorXd(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_VectorXd *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccWrappers_VectorXd) );
    return sizeof(asn1SccWrappers_VectorXd);
}
#endif

#ifdef __NEED_Wrappers_VectorXd_UPER
int Decode_UPER_Wrappers_VectorXd(asn1SccWrappers_VectorXd *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_VectorXd_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-VectorXd (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_VectorXd_ACN
int Decode_ACN_Wrappers_VectorXd(asn1SccWrappers_VectorXd *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_VectorXd_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-VectorXd (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_VectorXd_NATIVE
int Decode_NATIVE_Wrappers_VectorXd(asn1SccWrappers_VectorXd *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccWrappers_VectorXd *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_JointTransform_m_UPER
int Encode_UPER_Base_JointTransform_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransform_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointTransform_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointTransform-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointTransform_m_ACN
int Encode_ACN_Base_JointTransform_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointTransform_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointTransform_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointTransform-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointTransform_m_NATIVE
int Encode_NATIVE_Base_JointTransform_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransform_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_JointTransform_m) );
    return sizeof(asn1SccBase_JointTransform_m);
}
#endif

#ifdef __NEED_Base_JointTransform_m_UPER
int Decode_UPER_Base_JointTransform_m(asn1SccBase_JointTransform_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointTransform_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointTransform-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointTransform_m_ACN
int Decode_ACN_Base_JointTransform_m(asn1SccBase_JointTransform_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointTransform_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointTransform-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointTransform_m_NATIVE
int Decode_NATIVE_Base_JointTransform_m(asn1SccBase_JointTransform_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_JointTransform_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Pose2D_m_UPER
int Encode_UPER_Base_Pose2D_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose2D_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Pose2D_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Pose2D-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Pose2D_m_ACN
int Encode_ACN_Base_Pose2D_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Pose2D_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Pose2D_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Pose2D-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Pose2D_m_NATIVE
int Encode_NATIVE_Base_Pose2D_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose2D_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Pose2D_m) );
    return sizeof(asn1SccBase_Pose2D_m);
}
#endif

#ifdef __NEED_Base_Pose2D_m_UPER
int Decode_UPER_Base_Pose2D_m(asn1SccBase_Pose2D_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Pose2D_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Pose2D-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Pose2D_m_ACN
int Decode_ACN_Base_Pose2D_m(asn1SccBase_Pose2D_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Pose2D_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Pose2D-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Pose2D_m_NATIVE
int Decode_NATIVE_Base_Pose2D_m(asn1SccBase_Pose2D_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Pose2D_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Pose_m_UPER
int Encode_UPER_Base_Pose_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Pose_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Pose-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Pose_m_ACN
int Encode_ACN_Base_Pose_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Pose_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Pose_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Pose-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Pose_m_NATIVE
int Encode_NATIVE_Base_Pose_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Pose_m) );
    return sizeof(asn1SccBase_Pose_m);
}
#endif

#ifdef __NEED_Base_Pose_m_UPER
int Decode_UPER_Base_Pose_m(asn1SccBase_Pose_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Pose_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Pose-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Pose_m_ACN
int Decode_ACN_Base_Pose_m(asn1SccBase_Pose_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Pose_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Pose-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Pose_m_NATIVE
int Decode_NATIVE_Base_Pose_m(asn1SccBase_Pose_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Pose_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_TransformWithCovariance_m_UPER
int Encode_UPER_Base_TransformWithCovariance_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TransformWithCovariance_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_TransformWithCovariance_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-TransformWithCovariance-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_TransformWithCovariance_m_ACN
int Encode_ACN_Base_TransformWithCovariance_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_TransformWithCovariance_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_TransformWithCovariance_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-TransformWithCovariance-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_TransformWithCovariance_m_NATIVE
int Encode_NATIVE_Base_TransformWithCovariance_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TransformWithCovariance_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_TransformWithCovariance_m) );
    return sizeof(asn1SccBase_TransformWithCovariance_m);
}
#endif

#ifdef __NEED_Base_TransformWithCovariance_m_UPER
int Decode_UPER_Base_TransformWithCovariance_m(asn1SccBase_TransformWithCovariance_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_TransformWithCovariance_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-TransformWithCovariance-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_TransformWithCovariance_m_ACN
int Decode_ACN_Base_TransformWithCovariance_m(asn1SccBase_TransformWithCovariance_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_TransformWithCovariance_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-TransformWithCovariance-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_TransformWithCovariance_m_NATIVE
int Decode_NATIVE_Base_TransformWithCovariance_m(asn1SccBase_TransformWithCovariance_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_TransformWithCovariance_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_TwistWithCovariance_m_UPER
int Encode_UPER_Base_TwistWithCovariance_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TwistWithCovariance_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_TwistWithCovariance_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-TwistWithCovariance-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_TwistWithCovariance_m_ACN
int Encode_ACN_Base_TwistWithCovariance_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_TwistWithCovariance_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_TwistWithCovariance_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-TwistWithCovariance-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_TwistWithCovariance_m_NATIVE
int Encode_NATIVE_Base_TwistWithCovariance_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TwistWithCovariance_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_TwistWithCovariance_m) );
    return sizeof(asn1SccBase_TwistWithCovariance_m);
}
#endif

#ifdef __NEED_Base_TwistWithCovariance_m_UPER
int Decode_UPER_Base_TwistWithCovariance_m(asn1SccBase_TwistWithCovariance_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_TwistWithCovariance_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-TwistWithCovariance-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_TwistWithCovariance_m_ACN
int Decode_ACN_Base_TwistWithCovariance_m(asn1SccBase_TwistWithCovariance_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_TwistWithCovariance_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-TwistWithCovariance-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_TwistWithCovariance_m_NATIVE
int Decode_NATIVE_Base_TwistWithCovariance_m(asn1SccBase_TwistWithCovariance_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_TwistWithCovariance_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Waypoint_m_UPER
int Encode_UPER_Base_Waypoint_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Waypoint_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Waypoint_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Waypoint-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Waypoint_m_ACN
int Encode_ACN_Base_Waypoint_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Waypoint_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Waypoint_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Waypoint-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Waypoint_m_NATIVE
int Encode_NATIVE_Base_Waypoint_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Waypoint_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Waypoint_m) );
    return sizeof(asn1SccBase_Waypoint_m);
}
#endif

#ifdef __NEED_Base_Waypoint_m_UPER
int Decode_UPER_Base_Waypoint_m(asn1SccBase_Waypoint_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Waypoint_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Waypoint-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Waypoint_m_ACN
int Decode_ACN_Base_Waypoint_m(asn1SccBase_Waypoint_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Waypoint_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Waypoint-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Waypoint_m_NATIVE
int Decode_NATIVE_Base_Waypoint_m(asn1SccBase_Waypoint_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Waypoint_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Wrench_m_UPER
int Encode_UPER_Base_Wrench_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Wrench_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Wrench_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Wrench-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Wrench_m_ACN
int Encode_ACN_Base_Wrench_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Wrench_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Wrench_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Wrench-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Wrench_m_NATIVE
int Encode_NATIVE_Base_Wrench_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Wrench_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Wrench_m) );
    return sizeof(asn1SccBase_Wrench_m);
}
#endif

#ifdef __NEED_Base_Wrench_m_UPER
int Decode_UPER_Base_Wrench_m(asn1SccBase_Wrench_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Wrench_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Wrench-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Wrench_m_ACN
int Decode_ACN_Base_Wrench_m(asn1SccBase_Wrench_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Wrench_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Wrench-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Wrench_m_NATIVE
int Decode_NATIVE_Base_Wrench_m(asn1SccBase_Wrench_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Wrench_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_commands_LinearAngular6DCommand_m_UPER
int Encode_UPER_Base_commands_LinearAngular6DCommand_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_LinearAngular6DCommand_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_commands_LinearAngular6DCommand_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-commands-LinearAngular6DCommand-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_commands_LinearAngular6DCommand_m_ACN
int Encode_ACN_Base_commands_LinearAngular6DCommand_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_commands_LinearAngular6DCommand_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_commands_LinearAngular6DCommand_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-commands-LinearAngular6DCommand-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_commands_LinearAngular6DCommand_m_NATIVE
int Encode_NATIVE_Base_commands_LinearAngular6DCommand_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_LinearAngular6DCommand_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_commands_LinearAngular6DCommand_m) );
    return sizeof(asn1SccBase_commands_LinearAngular6DCommand_m);
}
#endif

#ifdef __NEED_Base_commands_LinearAngular6DCommand_m_UPER
int Decode_UPER_Base_commands_LinearAngular6DCommand_m(asn1SccBase_commands_LinearAngular6DCommand_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_commands_LinearAngular6DCommand_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-commands-LinearAngular6DCommand-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_commands_LinearAngular6DCommand_m_ACN
int Decode_ACN_Base_commands_LinearAngular6DCommand_m(asn1SccBase_commands_LinearAngular6DCommand_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_commands_LinearAngular6DCommand_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-commands-LinearAngular6DCommand-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_commands_LinearAngular6DCommand_m_NATIVE
int Decode_NATIVE_Base_commands_LinearAngular6DCommand_m(asn1SccBase_commands_LinearAngular6DCommand_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_commands_LinearAngular6DCommand_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_BodyState_m_UPER
int Encode_UPER_Base_samples_BodyState_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_BodyState_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_BodyState_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-BodyState-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_BodyState_m_ACN
int Encode_ACN_Base_samples_BodyState_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_BodyState_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_BodyState_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-BodyState-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_BodyState_m_NATIVE
int Encode_NATIVE_Base_samples_BodyState_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_BodyState_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_BodyState_m) );
    return sizeof(asn1SccBase_samples_BodyState_m);
}
#endif

#ifdef __NEED_Base_samples_BodyState_m_UPER
int Decode_UPER_Base_samples_BodyState_m(asn1SccBase_samples_BodyState_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_BodyState_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-BodyState-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_BodyState_m_ACN
int Decode_ACN_Base_samples_BodyState_m(asn1SccBase_samples_BodyState_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_BodyState_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-BodyState-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_BodyState_m_NATIVE
int Decode_NATIVE_Base_samples_BodyState_m(asn1SccBase_samples_BodyState_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_BodyState_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_IMUSensors_m_UPER
int Encode_UPER_Base_samples_IMUSensors_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_IMUSensors_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_IMUSensors_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-IMUSensors-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_IMUSensors_m_ACN
int Encode_ACN_Base_samples_IMUSensors_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_IMUSensors_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_IMUSensors_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-IMUSensors-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_IMUSensors_m_NATIVE
int Encode_NATIVE_Base_samples_IMUSensors_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_IMUSensors_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_IMUSensors_m) );
    return sizeof(asn1SccBase_samples_IMUSensors_m);
}
#endif

#ifdef __NEED_Base_samples_IMUSensors_m_UPER
int Decode_UPER_Base_samples_IMUSensors_m(asn1SccBase_samples_IMUSensors_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_IMUSensors_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-IMUSensors-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_IMUSensors_m_ACN
int Decode_ACN_Base_samples_IMUSensors_m(asn1SccBase_samples_IMUSensors_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_IMUSensors_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-IMUSensors-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_IMUSensors_m_NATIVE
int Decode_NATIVE_Base_samples_IMUSensors_m(asn1SccBase_samples_IMUSensors_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_IMUSensors_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_m_UPER
int Encode_UPER_Base_samples_RigidBodyAcceleration_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyAcceleration_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_RigidBodyAcceleration_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-RigidBodyAcceleration-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_m_ACN
int Encode_ACN_Base_samples_RigidBodyAcceleration_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_RigidBodyAcceleration_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_RigidBodyAcceleration_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-RigidBodyAcceleration-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_m_NATIVE
int Encode_NATIVE_Base_samples_RigidBodyAcceleration_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyAcceleration_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_RigidBodyAcceleration_m) );
    return sizeof(asn1SccBase_samples_RigidBodyAcceleration_m);
}
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_m_UPER
int Decode_UPER_Base_samples_RigidBodyAcceleration_m(asn1SccBase_samples_RigidBodyAcceleration_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_RigidBodyAcceleration_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-RigidBodyAcceleration-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_m_ACN
int Decode_ACN_Base_samples_RigidBodyAcceleration_m(asn1SccBase_samples_RigidBodyAcceleration_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_RigidBodyAcceleration_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-RigidBodyAcceleration-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_m_NATIVE
int Decode_NATIVE_Base_samples_RigidBodyAcceleration_m(asn1SccBase_samples_RigidBodyAcceleration_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_RigidBodyAcceleration_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyState_m_UPER
int Encode_UPER_Base_samples_RigidBodyState_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyState_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_RigidBodyState_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-RigidBodyState-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyState_m_ACN
int Encode_ACN_Base_samples_RigidBodyState_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_RigidBodyState_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_RigidBodyState_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-RigidBodyState-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyState_m_NATIVE
int Encode_NATIVE_Base_samples_RigidBodyState_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyState_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_RigidBodyState_m) );
    return sizeof(asn1SccBase_samples_RigidBodyState_m);
}
#endif

#ifdef __NEED_Base_samples_RigidBodyState_m_UPER
int Decode_UPER_Base_samples_RigidBodyState_m(asn1SccBase_samples_RigidBodyState_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_RigidBodyState_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-RigidBodyState-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyState_m_ACN
int Decode_ACN_Base_samples_RigidBodyState_m(asn1SccBase_samples_RigidBodyState_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_RigidBodyState_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-RigidBodyState-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_RigidBodyState_m_NATIVE
int Decode_NATIVE_Base_samples_RigidBodyState_m(asn1SccBase_samples_RigidBodyState_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_RigidBodyState_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_Wrench_m_UPER
int Encode_UPER_Base_samples_Wrench_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrench_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Wrench_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Wrench-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Wrench_m_ACN
int Encode_ACN_Base_samples_Wrench_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Wrench_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Wrench_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Wrench-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Wrench_m_NATIVE
int Encode_NATIVE_Base_samples_Wrench_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrench_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_Wrench_m) );
    return sizeof(asn1SccBase_samples_Wrench_m);
}
#endif

#ifdef __NEED_Base_samples_Wrench_m_UPER
int Decode_UPER_Base_samples_Wrench_m(asn1SccBase_samples_Wrench_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Wrench_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Wrench-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Wrench_m_ACN
int Decode_ACN_Base_samples_Wrench_m(asn1SccBase_samples_Wrench_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Wrench_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Wrench-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Wrench_m_NATIVE
int Decode_NATIVE_Base_samples_Wrench_m(asn1SccBase_samples_Wrench_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_Wrench_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_JointTransformVector_m_UPER
int Encode_UPER_Base_JointTransformVector_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransformVector_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointTransformVector_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointTransformVector-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointTransformVector_m_ACN
int Encode_ACN_Base_JointTransformVector_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointTransformVector_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_JointTransformVector_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-JointTransformVector-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_JointTransformVector_m_NATIVE
int Encode_NATIVE_Base_JointTransformVector_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransformVector_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_JointTransformVector_m) );
    return sizeof(asn1SccBase_JointTransformVector_m);
}
#endif

#ifdef __NEED_Base_JointTransformVector_m_UPER
int Decode_UPER_Base_JointTransformVector_m(asn1SccBase_JointTransformVector_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointTransformVector_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointTransformVector-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointTransformVector_m_ACN
int Decode_ACN_Base_JointTransformVector_m(asn1SccBase_JointTransformVector_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_JointTransformVector_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-JointTransformVector-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_JointTransformVector_m_NATIVE
int Decode_NATIVE_Base_JointTransformVector_m(asn1SccBase_JointTransformVector_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_JointTransformVector_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_base_JointTransform_m_UPER
int Encode_UPER_Base_NamedVector_base_JointTransform_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_base_JointTransform_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_NamedVector_base_JointTransform_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-NamedVector-base-JointTransform-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_NamedVector_base_JointTransform_m_ACN
int Encode_ACN_Base_NamedVector_base_JointTransform_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_NamedVector_base_JointTransform_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_NamedVector_base_JointTransform_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-NamedVector-base-JointTransform-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_NamedVector_base_JointTransform_m_NATIVE
int Encode_NATIVE_Base_NamedVector_base_JointTransform_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_base_JointTransform_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_NamedVector_base_JointTransform_m) );
    return sizeof(asn1SccBase_NamedVector_base_JointTransform_m);
}
#endif

#ifdef __NEED_Base_NamedVector_base_JointTransform_m_UPER
int Decode_UPER_Base_NamedVector_base_JointTransform_m(asn1SccBase_NamedVector_base_JointTransform_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_NamedVector_base_JointTransform_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-NamedVector-base-JointTransform-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_base_JointTransform_m_ACN
int Decode_ACN_Base_NamedVector_base_JointTransform_m(asn1SccBase_NamedVector_base_JointTransform_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_NamedVector_base_JointTransform_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-NamedVector-base-JointTransform-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_base_JointTransform_m_NATIVE
int Decode_NATIVE_Base_NamedVector_base_JointTransform_m(asn1SccBase_NamedVector_base_JointTransform_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_NamedVector_base_JointTransform_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_base_Wrench_m_UPER
int Encode_UPER_Base_NamedVector_base_Wrench_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_base_Wrench_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_NamedVector_base_Wrench_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-NamedVector-base-Wrench-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_NamedVector_base_Wrench_m_ACN
int Encode_ACN_Base_NamedVector_base_Wrench_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_NamedVector_base_Wrench_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_NamedVector_base_Wrench_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-NamedVector-base-Wrench-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_NamedVector_base_Wrench_m_NATIVE
int Encode_NATIVE_Base_NamedVector_base_Wrench_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_base_Wrench_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_NamedVector_base_Wrench_m) );
    return sizeof(asn1SccBase_NamedVector_base_Wrench_m);
}
#endif

#ifdef __NEED_Base_NamedVector_base_Wrench_m_UPER
int Decode_UPER_Base_NamedVector_base_Wrench_m(asn1SccBase_NamedVector_base_Wrench_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_NamedVector_base_Wrench_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-NamedVector-base-Wrench-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_base_Wrench_m_ACN
int Decode_ACN_Base_NamedVector_base_Wrench_m(asn1SccBase_NamedVector_base_Wrench_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_NamedVector_base_Wrench_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-NamedVector-base-Wrench-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_NamedVector_base_Wrench_m_NATIVE
int Decode_NATIVE_Base_NamedVector_base_Wrench_m(asn1SccBase_NamedVector_base_Wrench_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_NamedVector_base_Wrench_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_Pointcloud_m_UPER
int Encode_UPER_Base_samples_Pointcloud_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Pointcloud_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Pointcloud_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Pointcloud-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Pointcloud_m_ACN
int Encode_ACN_Base_samples_Pointcloud_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Pointcloud_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Pointcloud_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Pointcloud-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Pointcloud_m_NATIVE
int Encode_NATIVE_Base_samples_Pointcloud_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Pointcloud_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_Pointcloud_m) );
    return sizeof(asn1SccBase_samples_Pointcloud_m);
}
#endif

#ifdef __NEED_Base_samples_Pointcloud_m_UPER
int Decode_UPER_Base_samples_Pointcloud_m(asn1SccBase_samples_Pointcloud_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Pointcloud_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Pointcloud-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Pointcloud_m_ACN
int Decode_ACN_Base_samples_Pointcloud_m(asn1SccBase_samples_Pointcloud_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Pointcloud_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Pointcloud-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Pointcloud_m_NATIVE
int Decode_NATIVE_Base_samples_Pointcloud_m(asn1SccBase_samples_Pointcloud_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_Pointcloud_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_samples_Wrenches_m_UPER
int Encode_UPER_Base_samples_Wrenches_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrenches_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Wrenches_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Wrenches-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Wrenches_m_ACN
int Encode_ACN_Base_samples_Wrenches_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Wrenches_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_samples_Wrenches_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-samples-Wrenches-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_samples_Wrenches_m_NATIVE
int Encode_NATIVE_Base_samples_Wrenches_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrenches_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_samples_Wrenches_m) );
    return sizeof(asn1SccBase_samples_Wrenches_m);
}
#endif

#ifdef __NEED_Base_samples_Wrenches_m_UPER
int Decode_UPER_Base_samples_Wrenches_m(asn1SccBase_samples_Wrenches_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Wrenches_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Wrenches-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Wrenches_m_ACN
int Decode_ACN_Base_samples_Wrenches_m(asn1SccBase_samples_Wrenches_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_samples_Wrenches_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-samples-Wrenches-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_samples_Wrenches_m_NATIVE
int Decode_NATIVE_Base_samples_Wrenches_m(asn1SccBase_samples_Wrenches_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_samples_Wrenches_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Wrappers_geometry_Spline_UPER
int Encode_UPER_Wrappers_geometry_Spline(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_geometry_Spline *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_geometry_Spline_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-geometry-Spline (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_geometry_Spline_ACN
int Encode_ACN_Wrappers_geometry_Spline(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_geometry_Spline *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccWrappers_geometry_Spline_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Wrappers-geometry-Spline (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Wrappers_geometry_Spline_NATIVE
int Encode_NATIVE_Wrappers_geometry_Spline(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_geometry_Spline *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccWrappers_geometry_Spline) );
    return sizeof(asn1SccWrappers_geometry_Spline);
}
#endif

#ifdef __NEED_Wrappers_geometry_Spline_UPER
int Decode_UPER_Wrappers_geometry_Spline(asn1SccWrappers_geometry_Spline *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_geometry_Spline_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-geometry-Spline (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_geometry_Spline_ACN
int Decode_ACN_Wrappers_geometry_Spline(asn1SccWrappers_geometry_Spline *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccWrappers_geometry_Spline_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Wrappers-geometry-Spline (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Wrappers_geometry_Spline_NATIVE
int Decode_NATIVE_Wrappers_geometry_Spline(asn1SccWrappers_geometry_Spline *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccWrappers_geometry_Spline *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_Base_Trajectory_m_UPER
int Encode_UPER_Base_Trajectory_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Trajectory_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Trajectory_m_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Trajectory-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Trajectory_m_ACN
int Encode_ACN_Base_Trajectory_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Trajectory_m *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccBase_Trajectory_m_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode Base-Trajectory-m (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_Base_Trajectory_m_NATIVE
int Encode_NATIVE_Base_Trajectory_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Trajectory_m *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccBase_Trajectory_m) );
    return sizeof(asn1SccBase_Trajectory_m);
}
#endif

#ifdef __NEED_Base_Trajectory_m_UPER
int Decode_UPER_Base_Trajectory_m(asn1SccBase_Trajectory_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Trajectory_m_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Trajectory-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Trajectory_m_ACN
int Decode_ACN_Base_Trajectory_m(asn1SccBase_Trajectory_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccBase_Trajectory_m_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode Base-Trajectory-m (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_Base_Trajectory_m_NATIVE
int Decode_NATIVE_Base_Trajectory_m(asn1SccBase_Trajectory_m *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccBase_Trajectory_m *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_Double_UPER
int Encode_UPER_T_Double(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Double *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Double_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Double (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Double_ACN
int Encode_ACN_T_Double(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Double *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Double_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Double (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Double_NATIVE
int Encode_NATIVE_T_Double(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Double *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_Double) );
    return sizeof(asn1SccT_Double);
}
#endif

#ifdef __NEED_T_Double_UPER
int Decode_UPER_T_Double(asn1SccT_Double *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Double_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Double (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Double_ACN
int Decode_ACN_T_Double(asn1SccT_Double *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Double_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Double (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Double_NATIVE
int Decode_NATIVE_T_Double(asn1SccT_Double *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccT_Double *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_Float_UPER
int Encode_UPER_T_Float(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Float *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Float_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Float (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Float_ACN
int Encode_ACN_T_Float(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Float *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Float_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Float (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Float_NATIVE
int Encode_NATIVE_T_Float(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Float *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_Float) );
    return sizeof(asn1SccT_Float);
}
#endif

#ifdef __NEED_T_Float_UPER
int Decode_UPER_T_Float(asn1SccT_Float *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Float_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Float (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Float_ACN
int Decode_ACN_T_Float(asn1SccT_Float *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Float_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Float (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Float_NATIVE
int Decode_NATIVE_T_Float(asn1SccT_Float *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccT_Float *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_Int16_UPER
int Encode_UPER_T_Int16(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int16 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Int16_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Int16 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Int16_ACN
int Encode_ACN_T_Int16(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int16 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Int16_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Int16 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Int16_NATIVE
int Encode_NATIVE_T_Int16(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int16 *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_Int16) );
    return sizeof(asn1SccT_Int16);
}
#endif

#ifdef __NEED_T_Int16_UPER
int Decode_UPER_T_Int16(asn1SccT_Int16 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Int16_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Int16 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Int16_ACN
int Decode_ACN_T_Int16(asn1SccT_Int16 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Int16_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Int16 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Int16_NATIVE
int Decode_NATIVE_T_Int16(asn1SccT_Int16 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccT_Int16 *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_UInt16_UPER
int Encode_UPER_T_UInt16(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt16 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_UInt16_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-UInt16 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_UInt16_ACN
int Encode_ACN_T_UInt16(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt16 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_UInt16_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-UInt16 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_UInt16_NATIVE
int Encode_NATIVE_T_UInt16(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt16 *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_UInt16) );
    return sizeof(asn1SccT_UInt16);
}
#endif

#ifdef __NEED_T_UInt16_UPER
int Decode_UPER_T_UInt16(asn1SccT_UInt16 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_UInt16_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-UInt16 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_UInt16_ACN
int Decode_ACN_T_UInt16(asn1SccT_UInt16 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_UInt16_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-UInt16 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_UInt16_NATIVE
int Decode_NATIVE_T_UInt16(asn1SccT_UInt16 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccT_UInt16 *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_UInt64_UPER
int Encode_UPER_T_UInt64(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt64 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_UInt64_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-UInt64 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_UInt64_ACN
int Encode_ACN_T_UInt64(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt64 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_UInt64_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-UInt64 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_UInt64_NATIVE
int Encode_NATIVE_T_UInt64(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt64 *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_UInt64) );
    return sizeof(asn1SccT_UInt64);
}
#endif

#ifdef __NEED_T_UInt64_UPER
int Decode_UPER_T_UInt64(asn1SccT_UInt64 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_UInt64_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-UInt64 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_UInt64_ACN
int Decode_ACN_T_UInt64(asn1SccT_UInt64 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_UInt64_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-UInt64 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_UInt64_NATIVE
int Decode_NATIVE_T_UInt64(asn1SccT_UInt64 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccT_UInt64 *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_Int64_UPER
int Encode_UPER_T_Int64(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int64 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Int64_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Int64 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Int64_ACN
int Encode_ACN_T_Int64(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int64 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Int64_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Int64 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Int64_NATIVE
int Encode_NATIVE_T_Int64(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int64 *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_Int64) );
    return sizeof(asn1SccT_Int64);
}
#endif

#ifdef __NEED_T_Int64_UPER
int Decode_UPER_T_Int64(asn1SccT_Int64 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Int64_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Int64 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Int64_ACN
int Decode_ACN_T_Int64(asn1SccT_Int64 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Int64_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Int64 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Int64_NATIVE
int Decode_NATIVE_T_Int64(asn1SccT_Int64 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccT_Int64 *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_String_UPER
int Encode_UPER_T_String(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_String *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_String_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-String (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_String_ACN
int Encode_ACN_T_String(void *pBuffer, size_t iMaxBufferSize, asn1SccT_String *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_String_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-String (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_String_NATIVE
int Encode_NATIVE_T_String(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_String *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_String) );
    return sizeof(asn1SccT_String);
}
#endif

#ifdef __NEED_T_String_UPER
int Decode_UPER_T_String(asn1SccT_String *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_String_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-String (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_String_ACN
int Decode_ACN_T_String(asn1SccT_String *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_String_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-String (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_String_NATIVE
int Decode_NATIVE_T_String(asn1SccT_String *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccT_String *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_Time_UPER
int Encode_UPER_T_Time(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Time *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Time_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Time (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Time_ACN
int Encode_ACN_T_Time(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Time *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Time_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Time (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Time_NATIVE
int Encode_NATIVE_T_Time(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Time *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_Time) );
    return sizeof(asn1SccT_Time);
}
#endif

#ifdef __NEED_T_Time_UPER
int Decode_UPER_T_Time(asn1SccT_Time *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Time_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Time (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Time_ACN
int Decode_ACN_T_Time(asn1SccT_Time *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Time_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Time (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Time_NATIVE
int Decode_NATIVE_T_Time(asn1SccT_Time *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccT_Time *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_DummyBase_T_UPER
int Encode_UPER_DummyBase_T(void *pBuffer, size_t iMaxBufferSize, const asn1SccDummyBase_T *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccDummyBase_T_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode DummyBase-T (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_DummyBase_T_ACN
int Encode_ACN_DummyBase_T(void *pBuffer, size_t iMaxBufferSize, asn1SccDummyBase_T *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccDummyBase_T_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode DummyBase-T (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_DummyBase_T_NATIVE
int Encode_NATIVE_DummyBase_T(void *pBuffer, size_t iMaxBufferSize, const asn1SccDummyBase_T *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccDummyBase_T) );
    return sizeof(asn1SccDummyBase_T);
}
#endif

#ifdef __NEED_DummyBase_T_UPER
int Decode_UPER_DummyBase_T(asn1SccDummyBase_T *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccDummyBase_T_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode DummyBase-T (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_DummyBase_T_ACN
int Decode_ACN_DummyBase_T(asn1SccDummyBase_T *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccDummyBase_T_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode DummyBase-T (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_DummyBase_T_NATIVE
int Decode_NATIVE_DummyBase_T(asn1SccDummyBase_T *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccDummyBase_T *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_Int32_UPER
int Encode_UPER_T_Int32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int32 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Int32_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Int32 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Int32_ACN
int Encode_ACN_T_Int32(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int32 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Int32_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Int32 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Int32_NATIVE
int Encode_NATIVE_T_Int32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int32 *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_Int32) );
    return sizeof(asn1SccT_Int32);
}
#endif

#ifdef __NEED_T_Int32_UPER
int Decode_UPER_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Int32_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Int32 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Int32_ACN
int Decode_ACN_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Int32_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Int32 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Int32_NATIVE
int Decode_NATIVE_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccT_Int32 *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_UInt32_UPER
int Encode_UPER_T_UInt32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt32 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_UInt32_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-UInt32 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_UInt32_ACN
int Encode_ACN_T_UInt32(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt32 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_UInt32_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-UInt32 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_UInt32_NATIVE
int Encode_NATIVE_T_UInt32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt32 *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_UInt32) );
    return sizeof(asn1SccT_UInt32);
}
#endif

#ifdef __NEED_T_UInt32_UPER
int Decode_UPER_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_UInt32_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-UInt32 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_UInt32_ACN
int Decode_ACN_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_UInt32_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-UInt32 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_UInt32_NATIVE
int Decode_NATIVE_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccT_UInt32 *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_Int8_UPER
int Encode_UPER_T_Int8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int8 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Int8_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Int8 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Int8_ACN
int Encode_ACN_T_Int8(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int8 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Int8_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Int8 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Int8_NATIVE
int Encode_NATIVE_T_Int8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int8 *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_Int8) );
    return sizeof(asn1SccT_Int8);
}
#endif

#ifdef __NEED_T_Int8_UPER
int Decode_UPER_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Int8_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Int8 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Int8_ACN
int Decode_ACN_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Int8_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Int8 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Int8_NATIVE
int Decode_NATIVE_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccT_Int8 *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_UInt8_UPER
int Encode_UPER_T_UInt8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt8 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_UInt8_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-UInt8 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_UInt8_ACN
int Encode_ACN_T_UInt8(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt8 *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_UInt8_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-UInt8 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_UInt8_NATIVE
int Encode_NATIVE_T_UInt8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt8 *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_UInt8) );
    return sizeof(asn1SccT_UInt8);
}
#endif

#ifdef __NEED_T_UInt8_UPER
int Decode_UPER_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_UInt8_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-UInt8 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_UInt8_ACN
int Decode_ACN_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_UInt8_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-UInt8 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_UInt8_NATIVE
int Decode_NATIVE_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccT_UInt8 *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_Boolean_UPER
int Encode_UPER_T_Boolean(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Boolean *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Boolean_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Boolean (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Boolean_ACN
int Encode_ACN_T_Boolean(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Boolean *pSrc)
{
    (void)iMaxBufferSize;
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Boolean_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
#ifdef __unix__
	fprintf(stderr, "Could not encode T-Boolean (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Boolean_NATIVE
int Encode_NATIVE_T_Boolean(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Boolean *pSrc)
{
    (void)iMaxBufferSize;
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_Boolean) );
    return sizeof(asn1SccT_Boolean);
}
#endif

#ifdef __NEED_T_Boolean_UPER
int Decode_UPER_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Boolean_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Boolean (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Boolean_ACN
int Decode_ACN_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Boolean_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
#ifdef __unix__
	fprintf(stderr, "Could not decode T-Boolean (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
#endif
        return -1;
    }
}
#endif

#ifdef __NEED_T_Boolean_NATIVE
int Decode_NATIVE_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize)
{
    (void)iBufferSize;
    *pDst = *(asn1SccT_Boolean *) pBuffer;
    {
        return 0;
    }
}
#endif

