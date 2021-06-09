#ifndef __C_DATAVIEW_UNIQ_H__
#define __C_DATAVIEW_UNIQ_H__

#ifdef __unix__
#include <stdlib.h> /* for size_t */
#else
typedef unsigned size_t;
#endif

#ifndef STATIC
#define STATIC
#endif


#include "dataview-uniq.h" // Space certified compiler generated

#include "../../system_config.h" // Choose ASN.1 Types to use

#ifdef __NEED_Dummy2Base_T_UPER
int Encode_UPER_Dummy2Base_T(void *pBuffer, size_t iMaxBufferSize, const asn1SccDummy2Base_T *pSrc);
#endif

#ifdef __NEED_Dummy2Base_T_ACN
int Encode_ACN_Dummy2Base_T(void *pBuffer, size_t iMaxBufferSize, asn1SccDummy2Base_T *pSrc);
#endif

#ifdef __NEED_Dummy2Base_T_NATIVE
int Encode_NATIVE_Dummy2Base_T(void *pBuffer, size_t iMaxBufferSize, const asn1SccDummy2Base_T *pSrc);
#endif

#ifdef __NEED_Dummy2Base_T_UPER
int Decode_UPER_Dummy2Base_T(asn1SccDummy2Base_T *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Dummy2Base_T_ACN
int Decode_ACN_Dummy2Base_T(asn1SccDummy2Base_T *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Dummy2Base_T_NATIVE
int Decode_NATIVE_Dummy2Base_T(asn1SccDummy2Base_T *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointState_MODE_UPER
int Encode_UPER_Base_JointState_MODE(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointState_MODE *pSrc);
#endif

#ifdef __NEED_Base_JointState_MODE_ACN
int Encode_ACN_Base_JointState_MODE(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointState_MODE *pSrc);
#endif

#ifdef __NEED_Base_JointState_MODE_NATIVE
int Encode_NATIVE_Base_JointState_MODE(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointState_MODE *pSrc);
#endif

#ifdef __NEED_Base_JointState_MODE_UPER
int Decode_UPER_Base_JointState_MODE(asn1SccBase_JointState_MODE *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointState_MODE_ACN
int Decode_ACN_Base_JointState_MODE(asn1SccBase_JointState_MODE *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointState_MODE_NATIVE
int Decode_NATIVE_Base_JointState_MODE(asn1SccBase_JointState_MODE *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Time_Resolution_UPER
int Encode_UPER_Base_Time_Resolution(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Time_Resolution *pSrc);
#endif

#ifdef __NEED_Base_Time_Resolution_ACN
int Encode_ACN_Base_Time_Resolution(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Time_Resolution *pSrc);
#endif

#ifdef __NEED_Base_Time_Resolution_NATIVE
int Encode_NATIVE_Base_Time_Resolution(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Time_Resolution *pSrc);
#endif

#ifdef __NEED_Base_Time_Resolution_UPER
int Decode_UPER_Base_Time_Resolution(asn1SccBase_Time_Resolution *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Time_Resolution_ACN
int Decode_ACN_Base_Time_Resolution(asn1SccBase_Time_Resolution *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Time_Resolution_NATIVE
int Decode_NATIVE_Base_Time_Resolution(asn1SccBase_Time_Resolution *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_geometry_SplineBase_CoordinateType_UPER
int Encode_UPER_Base_geometry_SplineBase_CoordinateType(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_geometry_SplineBase_CoordinateType *pSrc);
#endif

#ifdef __NEED_Base_geometry_SplineBase_CoordinateType_ACN
int Encode_ACN_Base_geometry_SplineBase_CoordinateType(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_geometry_SplineBase_CoordinateType *pSrc);
#endif

#ifdef __NEED_Base_geometry_SplineBase_CoordinateType_NATIVE
int Encode_NATIVE_Base_geometry_SplineBase_CoordinateType(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_geometry_SplineBase_CoordinateType *pSrc);
#endif

#ifdef __NEED_Base_geometry_SplineBase_CoordinateType_UPER
int Decode_UPER_Base_geometry_SplineBase_CoordinateType(asn1SccBase_geometry_SplineBase_CoordinateType *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_geometry_SplineBase_CoordinateType_ACN
int Decode_ACN_Base_geometry_SplineBase_CoordinateType(asn1SccBase_geometry_SplineBase_CoordinateType *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_geometry_SplineBase_CoordinateType_NATIVE
int Decode_NATIVE_Base_geometry_SplineBase_CoordinateType(asn1SccBase_geometry_SplineBase_CoordinateType *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE_UPER
int Encode_UPER_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *pSrc);
#endif

#ifdef __NEED_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE_ACN
int Encode_ACN_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *pSrc);
#endif

#ifdef __NEED_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE_NATIVE
int Encode_NATIVE_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *pSrc);
#endif

#ifdef __NEED_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE_UPER
int Decode_UPER_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE(asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE_ACN
int Decode_ACN_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE(asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE_NATIVE
int Decode_NATIVE_Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE(asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DepthMap_PROJECTION_TYPE_UPER
int Encode_UPER_Base_samples_DepthMap_PROJECTION_TYPE(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap_PROJECTION_TYPE *pSrc);
#endif

#ifdef __NEED_Base_samples_DepthMap_PROJECTION_TYPE_ACN
int Encode_ACN_Base_samples_DepthMap_PROJECTION_TYPE(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_DepthMap_PROJECTION_TYPE *pSrc);
#endif

#ifdef __NEED_Base_samples_DepthMap_PROJECTION_TYPE_NATIVE
int Encode_NATIVE_Base_samples_DepthMap_PROJECTION_TYPE(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap_PROJECTION_TYPE *pSrc);
#endif

#ifdef __NEED_Base_samples_DepthMap_PROJECTION_TYPE_UPER
int Decode_UPER_Base_samples_DepthMap_PROJECTION_TYPE(asn1SccBase_samples_DepthMap_PROJECTION_TYPE *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DepthMap_PROJECTION_TYPE_ACN
int Decode_ACN_Base_samples_DepthMap_PROJECTION_TYPE(asn1SccBase_samples_DepthMap_PROJECTION_TYPE *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DepthMap_PROJECTION_TYPE_NATIVE
int Decode_NATIVE_Base_samples_DepthMap_PROJECTION_TYPE(asn1SccBase_samples_DepthMap_PROJECTION_TYPE *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DepthMap_UNIT_AXIS_UPER
int Encode_UPER_Base_samples_DepthMap_UNIT_AXIS(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap_UNIT_AXIS *pSrc);
#endif

#ifdef __NEED_Base_samples_DepthMap_UNIT_AXIS_ACN
int Encode_ACN_Base_samples_DepthMap_UNIT_AXIS(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_DepthMap_UNIT_AXIS *pSrc);
#endif

#ifdef __NEED_Base_samples_DepthMap_UNIT_AXIS_NATIVE
int Encode_NATIVE_Base_samples_DepthMap_UNIT_AXIS(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap_UNIT_AXIS *pSrc);
#endif

#ifdef __NEED_Base_samples_DepthMap_UNIT_AXIS_UPER
int Decode_UPER_Base_samples_DepthMap_UNIT_AXIS(asn1SccBase_samples_DepthMap_UNIT_AXIS *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DepthMap_UNIT_AXIS_ACN
int Decode_ACN_Base_samples_DepthMap_UNIT_AXIS(asn1SccBase_samples_DepthMap_UNIT_AXIS *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DepthMap_UNIT_AXIS_NATIVE
int Decode_NATIVE_Base_samples_DepthMap_UNIT_AXIS(asn1SccBase_samples_DepthMap_UNIT_AXIS *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_LASER_RANGE_ERRORS_UPER
int Encode_UPER_Base_samples_LASER_RANGE_ERRORS(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_LASER_RANGE_ERRORS *pSrc);
#endif

#ifdef __NEED_Base_samples_LASER_RANGE_ERRORS_ACN
int Encode_ACN_Base_samples_LASER_RANGE_ERRORS(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_LASER_RANGE_ERRORS *pSrc);
#endif

#ifdef __NEED_Base_samples_LASER_RANGE_ERRORS_NATIVE
int Encode_NATIVE_Base_samples_LASER_RANGE_ERRORS(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_LASER_RANGE_ERRORS *pSrc);
#endif

#ifdef __NEED_Base_samples_LASER_RANGE_ERRORS_UPER
int Decode_UPER_Base_samples_LASER_RANGE_ERRORS(asn1SccBase_samples_LASER_RANGE_ERRORS *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_LASER_RANGE_ERRORS_ACN
int Decode_ACN_Base_samples_LASER_RANGE_ERRORS(asn1SccBase_samples_LASER_RANGE_ERRORS *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_LASER_RANGE_ERRORS_NATIVE
int Decode_NATIVE_Base_samples_LASER_RANGE_ERRORS(asn1SccBase_samples_LASER_RANGE_ERRORS *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_frame_mode_t_UPER
int Encode_UPER_Base_samples_frame_frame_mode_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_mode_t *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_frame_mode_t_ACN
int Encode_ACN_Base_samples_frame_frame_mode_t(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_frame_frame_mode_t *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_frame_mode_t_NATIVE
int Encode_NATIVE_Base_samples_frame_frame_mode_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_mode_t *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_frame_mode_t_UPER
int Decode_UPER_Base_samples_frame_frame_mode_t(asn1SccBase_samples_frame_frame_mode_t *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_frame_mode_t_ACN
int Decode_ACN_Base_samples_frame_frame_mode_t(asn1SccBase_samples_frame_frame_mode_t *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_frame_mode_t_NATIVE
int Decode_NATIVE_Base_samples_frame_frame_mode_t(asn1SccBase_samples_frame_frame_mode_t *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_frame_status_t_UPER
int Encode_UPER_Base_samples_frame_frame_status_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_status_t *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_frame_status_t_ACN
int Encode_ACN_Base_samples_frame_frame_status_t(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_frame_frame_status_t *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_frame_status_t_NATIVE
int Encode_NATIVE_Base_samples_frame_frame_status_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_status_t *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_frame_status_t_UPER
int Decode_UPER_Base_samples_frame_frame_status_t(asn1SccBase_samples_frame_frame_status_t *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_frame_status_t_ACN
int Decode_ACN_Base_samples_frame_frame_status_t(asn1SccBase_samples_frame_frame_status_t *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_frame_status_t_NATIVE
int Decode_NATIVE_Base_samples_frame_frame_status_t(asn1SccBase_samples_frame_frame_status_t *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_geometry_SplineType_UPER
int Encode_UPER_Wrappers_geometry_SplineType(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_geometry_SplineType *pSrc);
#endif

#ifdef __NEED_Wrappers_geometry_SplineType_ACN
int Encode_ACN_Wrappers_geometry_SplineType(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_geometry_SplineType *pSrc);
#endif

#ifdef __NEED_Wrappers_geometry_SplineType_NATIVE
int Encode_NATIVE_Wrappers_geometry_SplineType(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_geometry_SplineType *pSrc);
#endif

#ifdef __NEED_Wrappers_geometry_SplineType_UPER
int Decode_UPER_Wrappers_geometry_SplineType(asn1SccWrappers_geometry_SplineType *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_geometry_SplineType_ACN
int Decode_ACN_Wrappers_geometry_SplineType(asn1SccWrappers_geometry_SplineType *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_geometry_SplineType_NATIVE
int Decode_NATIVE_Wrappers_geometry_SplineType(asn1SccWrappers_geometry_SplineType *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTrajectory_UPER
int Encode_UPER_Base_JointTrajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTrajectory *pSrc);
#endif

#ifdef __NEED_Base_JointTrajectory_ACN
int Encode_ACN_Base_JointTrajectory(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointTrajectory *pSrc);
#endif

#ifdef __NEED_Base_JointTrajectory_NATIVE
int Encode_NATIVE_Base_JointTrajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTrajectory *pSrc);
#endif

#ifdef __NEED_Base_JointTrajectory_UPER
int Decode_UPER_Base_JointTrajectory(asn1SccBase_JointTrajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTrajectory_ACN
int Decode_ACN_Base_JointTrajectory(asn1SccBase_JointTrajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTrajectory_NATIVE
int Decode_NATIVE_Base_JointTrajectory(asn1SccBase_JointTrajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_JointTransform_UPER
int Encode_UPER_Std_orogen_typekits_mtype_std_vector_base_JointTransform(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *pSrc);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_JointTransform_ACN
int Encode_ACN_Std_orogen_typekits_mtype_std_vector_base_JointTransform(void *pBuffer, size_t iMaxBufferSize, asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *pSrc);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_JointTransform_NATIVE
int Encode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_JointTransform(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *pSrc);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_JointTransform_UPER
int Decode_UPER_Std_orogen_typekits_mtype_std_vector_base_JointTransform(asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_JointTransform_ACN
int Decode_ACN_Std_orogen_typekits_mtype_std_vector_base_JointTransform(asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_JointTransform_NATIVE
int Decode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_JointTransform(asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Waypoint_UPER
int Encode_UPER_Std_orogen_typekits_mtype_std_vector_base_Waypoint(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *pSrc);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Waypoint_ACN
int Encode_ACN_Std_orogen_typekits_mtype_std_vector_base_Waypoint(void *pBuffer, size_t iMaxBufferSize, asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *pSrc);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Waypoint_NATIVE
int Encode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_Waypoint(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *pSrc);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Waypoint_UPER
int Decode_UPER_Std_orogen_typekits_mtype_std_vector_base_Waypoint(asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Waypoint_ACN
int Decode_ACN_Std_orogen_typekits_mtype_std_vector_base_Waypoint(asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Waypoint_NATIVE
int Decode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_Waypoint(asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Wrench_UPER
int Encode_UPER_Std_orogen_typekits_mtype_std_vector_base_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *pSrc);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Wrench_ACN
int Encode_ACN_Std_orogen_typekits_mtype_std_vector_base_Wrench(void *pBuffer, size_t iMaxBufferSize, asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *pSrc);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Wrench_NATIVE
int Encode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *pSrc);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Wrench_UPER
int Decode_UPER_Std_orogen_typekits_mtype_std_vector_base_Wrench(asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Wrench_ACN
int Decode_ACN_Std_orogen_typekits_mtype_std_vector_base_Wrench(asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Wrench_NATIVE
int Decode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_Wrench(asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_vector_Wrappers_Vector4d_UPER
int Encode_UPER_Std_vector_Wrappers_Vector4d(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_vector_Wrappers_Vector4d *pSrc);
#endif

#ifdef __NEED_Std_vector_Wrappers_Vector4d_ACN
int Encode_ACN_Std_vector_Wrappers_Vector4d(void *pBuffer, size_t iMaxBufferSize, asn1SccStd_vector_Wrappers_Vector4d *pSrc);
#endif

#ifdef __NEED_Std_vector_Wrappers_Vector4d_NATIVE
int Encode_NATIVE_Std_vector_Wrappers_Vector4d(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_vector_Wrappers_Vector4d *pSrc);
#endif

#ifdef __NEED_Std_vector_Wrappers_Vector4d_UPER
int Decode_UPER_Std_vector_Wrappers_Vector4d(asn1SccStd_vector_Wrappers_Vector4d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_vector_Wrappers_Vector4d_ACN
int Decode_ACN_Std_vector_Wrappers_Vector4d(asn1SccStd_vector_Wrappers_Vector4d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_vector_Wrappers_Vector4d_NATIVE
int Decode_NATIVE_Std_vector_Wrappers_Vector4d(asn1SccStd_vector_Wrappers_Vector4d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Trajectory_UPER
int Encode_UPER_Std_orogen_typekits_mtype_std_vector_base_Trajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *pSrc);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Trajectory_ACN
int Encode_ACN_Std_orogen_typekits_mtype_std_vector_base_Trajectory(void *pBuffer, size_t iMaxBufferSize, asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *pSrc);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Trajectory_NATIVE
int Encode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_Trajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *pSrc);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Trajectory_UPER
int Decode_UPER_Std_orogen_typekits_mtype_std_vector_base_Trajectory(asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Trajectory_ACN
int Decode_ACN_Std_orogen_typekits_mtype_std_vector_base_Trajectory(asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Std_orogen_typekits_mtype_std_vector_base_Trajectory_NATIVE
int Decode_NATIVE_Std_orogen_typekits_mtype_std_vector_base_Trajectory(asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pose_UPER
int Encode_UPER_Base_Pose(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose *pSrc);
#endif

#ifdef __NEED_Base_Pose_ACN
int Encode_ACN_Base_Pose(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Pose *pSrc);
#endif

#ifdef __NEED_Base_Pose_NATIVE
int Encode_NATIVE_Base_Pose(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose *pSrc);
#endif

#ifdef __NEED_Base_Pose_UPER
int Decode_UPER_Base_Pose(asn1SccBase_Pose *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pose_ACN
int Decode_ACN_Base_Pose(asn1SccBase_Pose *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pose_NATIVE
int Decode_NATIVE_Base_Pose(asn1SccBase_Pose *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TransformWithCovariance_UPER
int Encode_UPER_Base_TransformWithCovariance(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TransformWithCovariance *pSrc);
#endif

#ifdef __NEED_Base_TransformWithCovariance_ACN
int Encode_ACN_Base_TransformWithCovariance(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_TransformWithCovariance *pSrc);
#endif

#ifdef __NEED_Base_TransformWithCovariance_NATIVE
int Encode_NATIVE_Base_TransformWithCovariance(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TransformWithCovariance *pSrc);
#endif

#ifdef __NEED_Base_TransformWithCovariance_UPER
int Decode_UPER_Base_TransformWithCovariance(asn1SccBase_TransformWithCovariance *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TransformWithCovariance_ACN
int Decode_ACN_Base_TransformWithCovariance(asn1SccBase_TransformWithCovariance *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TransformWithCovariance_NATIVE
int Decode_NATIVE_Base_TransformWithCovariance(asn1SccBase_TransformWithCovariance *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TwistWithCovariance_UPER
int Encode_UPER_Base_TwistWithCovariance(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TwistWithCovariance *pSrc);
#endif

#ifdef __NEED_Base_TwistWithCovariance_ACN
int Encode_ACN_Base_TwistWithCovariance(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_TwistWithCovariance *pSrc);
#endif

#ifdef __NEED_Base_TwistWithCovariance_NATIVE
int Encode_NATIVE_Base_TwistWithCovariance(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TwistWithCovariance *pSrc);
#endif

#ifdef __NEED_Base_TwistWithCovariance_UPER
int Decode_UPER_Base_TwistWithCovariance(asn1SccBase_TwistWithCovariance *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TwistWithCovariance_ACN
int Decode_ACN_Base_TwistWithCovariance(asn1SccBase_TwistWithCovariance *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TwistWithCovariance_NATIVE
int Decode_NATIVE_Base_TwistWithCovariance(asn1SccBase_TwistWithCovariance *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Wrench_UPER
int Encode_UPER_Base_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Wrench *pSrc);
#endif

#ifdef __NEED_Base_Wrench_ACN
int Encode_ACN_Base_Wrench(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Wrench *pSrc);
#endif

#ifdef __NEED_Base_Wrench_NATIVE
int Encode_NATIVE_Base_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Wrench *pSrc);
#endif

#ifdef __NEED_Base_Wrench_UPER
int Decode_UPER_Base_Wrench(asn1SccBase_Wrench *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Wrench_ACN
int Decode_ACN_Base_Wrench(asn1SccBase_Wrench *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Wrench_NATIVE
int Decode_NATIVE_Base_Wrench(asn1SccBase_Wrench *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Angle_UPER
int Encode_UPER_Base_Angle(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Angle *pSrc);
#endif

#ifdef __NEED_Base_Angle_ACN
int Encode_ACN_Base_Angle(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Angle *pSrc);
#endif

#ifdef __NEED_Base_Angle_NATIVE
int Encode_NATIVE_Base_Angle(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Angle *pSrc);
#endif

#ifdef __NEED_Base_Angle_UPER
int Decode_UPER_Base_Angle(asn1SccBase_Angle *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Angle_ACN
int Decode_ACN_Base_Angle(asn1SccBase_Angle *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Angle_NATIVE
int Decode_NATIVE_Base_Angle(asn1SccBase_Angle *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointState_UPER
int Encode_UPER_Base_JointState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointState *pSrc);
#endif

#ifdef __NEED_Base_JointState_ACN
int Encode_ACN_Base_JointState(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointState *pSrc);
#endif

#ifdef __NEED_Base_JointState_NATIVE
int Encode_NATIVE_Base_JointState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointState *pSrc);
#endif

#ifdef __NEED_Base_JointState_UPER
int Decode_UPER_Base_JointState(asn1SccBase_JointState *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointState_ACN
int Decode_ACN_Base_JointState(asn1SccBase_JointState *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointState_NATIVE
int Decode_NATIVE_Base_JointState(asn1SccBase_JointState *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pose2D_UPER
int Encode_UPER_Base_Pose2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose2D *pSrc);
#endif

#ifdef __NEED_Base_Pose2D_ACN
int Encode_ACN_Base_Pose2D(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Pose2D *pSrc);
#endif

#ifdef __NEED_Base_Pose2D_NATIVE
int Encode_NATIVE_Base_Pose2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose2D *pSrc);
#endif

#ifdef __NEED_Base_Pose2D_UPER
int Decode_UPER_Base_Pose2D(asn1SccBase_Pose2D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pose2D_ACN
int Decode_ACN_Base_Pose2D(asn1SccBase_Pose2D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pose2D_NATIVE
int Decode_NATIVE_Base_Pose2D(asn1SccBase_Pose2D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_PoseUpdateThreshold_UPER
int Encode_UPER_Base_PoseUpdateThreshold(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_PoseUpdateThreshold *pSrc);
#endif

#ifdef __NEED_Base_PoseUpdateThreshold_ACN
int Encode_ACN_Base_PoseUpdateThreshold(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_PoseUpdateThreshold *pSrc);
#endif

#ifdef __NEED_Base_PoseUpdateThreshold_NATIVE
int Encode_NATIVE_Base_PoseUpdateThreshold(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_PoseUpdateThreshold *pSrc);
#endif

#ifdef __NEED_Base_PoseUpdateThreshold_UPER
int Decode_UPER_Base_PoseUpdateThreshold(asn1SccBase_PoseUpdateThreshold *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_PoseUpdateThreshold_ACN
int Decode_ACN_Base_PoseUpdateThreshold(asn1SccBase_PoseUpdateThreshold *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_PoseUpdateThreshold_NATIVE
int Decode_NATIVE_Base_PoseUpdateThreshold(asn1SccBase_PoseUpdateThreshold *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pressure_UPER
int Encode_UPER_Base_Pressure(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pressure *pSrc);
#endif

#ifdef __NEED_Base_Pressure_ACN
int Encode_ACN_Base_Pressure(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Pressure *pSrc);
#endif

#ifdef __NEED_Base_Pressure_NATIVE
int Encode_NATIVE_Base_Pressure(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pressure *pSrc);
#endif

#ifdef __NEED_Base_Pressure_UPER
int Decode_UPER_Base_Pressure(asn1SccBase_Pressure *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pressure_ACN
int Decode_ACN_Base_Pressure(asn1SccBase_Pressure *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pressure_NATIVE
int Decode_NATIVE_Base_Pressure(asn1SccBase_Pressure *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Temperature_UPER
int Encode_UPER_Base_Temperature(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Temperature *pSrc);
#endif

#ifdef __NEED_Base_Temperature_ACN
int Encode_ACN_Base_Temperature(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Temperature *pSrc);
#endif

#ifdef __NEED_Base_Temperature_NATIVE
int Encode_NATIVE_Base_Temperature(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Temperature *pSrc);
#endif

#ifdef __NEED_Base_Temperature_UPER
int Decode_UPER_Base_Temperature(asn1SccBase_Temperature *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Temperature_ACN
int Decode_ACN_Base_Temperature(asn1SccBase_Temperature *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Temperature_NATIVE
int Decode_NATIVE_Base_Temperature(asn1SccBase_Temperature *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Time_UPER
int Encode_UPER_Base_Time(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Time *pSrc);
#endif

#ifdef __NEED_Base_Time_ACN
int Encode_ACN_Base_Time(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Time *pSrc);
#endif

#ifdef __NEED_Base_Time_NATIVE
int Encode_NATIVE_Base_Time(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Time *pSrc);
#endif

#ifdef __NEED_Base_Time_UPER
int Decode_UPER_Base_Time(asn1SccBase_Time *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Time_ACN
int Decode_ACN_Base_Time(asn1SccBase_Time *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Time_NATIVE
int Decode_NATIVE_Base_Time(asn1SccBase_Time *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Trajectory_UPER
int Encode_UPER_Base_Trajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Trajectory *pSrc);
#endif

#ifdef __NEED_Base_Trajectory_ACN
int Encode_ACN_Base_Trajectory(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Trajectory *pSrc);
#endif

#ifdef __NEED_Base_Trajectory_NATIVE
int Encode_NATIVE_Base_Trajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Trajectory *pSrc);
#endif

#ifdef __NEED_Base_Trajectory_UPER
int Decode_UPER_Base_Trajectory(asn1SccBase_Trajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Trajectory_ACN
int Decode_ACN_Base_Trajectory(asn1SccBase_Trajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Trajectory_NATIVE
int Decode_NATIVE_Base_Trajectory(asn1SccBase_Trajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Waypoint_UPER
int Encode_UPER_Base_Waypoint(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Waypoint *pSrc);
#endif

#ifdef __NEED_Base_Waypoint_ACN
int Encode_ACN_Base_Waypoint(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Waypoint *pSrc);
#endif

#ifdef __NEED_Base_Waypoint_NATIVE
int Encode_NATIVE_Base_Waypoint(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Waypoint *pSrc);
#endif

#ifdef __NEED_Base_Waypoint_UPER
int Decode_UPER_Base_Waypoint(asn1SccBase_Waypoint *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Waypoint_ACN
int Decode_ACN_Base_Waypoint(asn1SccBase_Waypoint *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Waypoint_NATIVE
int Decode_NATIVE_Base_Waypoint(asn1SccBase_Waypoint *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointLimitRange_UPER
int Encode_UPER_Base_JointLimitRange(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointLimitRange *pSrc);
#endif

#ifdef __NEED_Base_JointLimitRange_ACN
int Encode_ACN_Base_JointLimitRange(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointLimitRange *pSrc);
#endif

#ifdef __NEED_Base_JointLimitRange_NATIVE
int Encode_NATIVE_Base_JointLimitRange(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointLimitRange *pSrc);
#endif

#ifdef __NEED_Base_JointLimitRange_UPER
int Decode_UPER_Base_JointLimitRange(asn1SccBase_JointLimitRange *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointLimitRange_ACN
int Decode_ACN_Base_JointLimitRange(asn1SccBase_JointLimitRange *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointLimitRange_NATIVE
int Decode_NATIVE_Base_JointLimitRange(asn1SccBase_JointLimitRange *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TimeStamped_Base_commands_Motion2D_UPER
int Encode_UPER_Base_TimeStamped_Base_commands_Motion2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TimeStamped_Base_commands_Motion2D *pSrc);
#endif

#ifdef __NEED_Base_TimeStamped_Base_commands_Motion2D_ACN
int Encode_ACN_Base_TimeStamped_Base_commands_Motion2D(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_TimeStamped_Base_commands_Motion2D *pSrc);
#endif

#ifdef __NEED_Base_TimeStamped_Base_commands_Motion2D_NATIVE
int Encode_NATIVE_Base_TimeStamped_Base_commands_Motion2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TimeStamped_Base_commands_Motion2D *pSrc);
#endif

#ifdef __NEED_Base_TimeStamped_Base_commands_Motion2D_UPER
int Decode_UPER_Base_TimeStamped_Base_commands_Motion2D(asn1SccBase_TimeStamped_Base_commands_Motion2D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TimeStamped_Base_commands_Motion2D_ACN
int Decode_ACN_Base_TimeStamped_Base_commands_Motion2D(asn1SccBase_TimeStamped_Base_commands_Motion2D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TimeStamped_Base_commands_Motion2D_NATIVE
int Decode_NATIVE_Base_TimeStamped_Base_commands_Motion2D(asn1SccBase_TimeStamped_Base_commands_Motion2D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_LinearAngular6DCommand_UPER
int Encode_UPER_Base_LinearAngular6DCommand(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_LinearAngular6DCommand *pSrc);
#endif

#ifdef __NEED_Base_LinearAngular6DCommand_ACN
int Encode_ACN_Base_LinearAngular6DCommand(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_LinearAngular6DCommand *pSrc);
#endif

#ifdef __NEED_Base_LinearAngular6DCommand_NATIVE
int Encode_NATIVE_Base_LinearAngular6DCommand(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_LinearAngular6DCommand *pSrc);
#endif

#ifdef __NEED_Base_LinearAngular6DCommand_UPER
int Decode_UPER_Base_LinearAngular6DCommand(asn1SccBase_LinearAngular6DCommand *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_LinearAngular6DCommand_ACN
int Decode_ACN_Base_LinearAngular6DCommand(asn1SccBase_LinearAngular6DCommand *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_LinearAngular6DCommand_NATIVE
int Decode_NATIVE_Base_LinearAngular6DCommand(asn1SccBase_LinearAngular6DCommand *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_commands_Motion2D_UPER
int Encode_UPER_Base_commands_Motion2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_Motion2D *pSrc);
#endif

#ifdef __NEED_Base_commands_Motion2D_ACN
int Encode_ACN_Base_commands_Motion2D(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_commands_Motion2D *pSrc);
#endif

#ifdef __NEED_Base_commands_Motion2D_NATIVE
int Encode_NATIVE_Base_commands_Motion2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_Motion2D *pSrc);
#endif

#ifdef __NEED_Base_commands_Motion2D_UPER
int Decode_UPER_Base_commands_Motion2D(asn1SccBase_commands_Motion2D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_commands_Motion2D_ACN
int Decode_ACN_Base_commands_Motion2D(asn1SccBase_commands_Motion2D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_commands_Motion2D_NATIVE
int Decode_NATIVE_Base_commands_Motion2D(asn1SccBase_commands_Motion2D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_commands_Speed6D_UPER
int Encode_UPER_Base_commands_Speed6D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_Speed6D *pSrc);
#endif

#ifdef __NEED_Base_commands_Speed6D_ACN
int Encode_ACN_Base_commands_Speed6D(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_commands_Speed6D *pSrc);
#endif

#ifdef __NEED_Base_commands_Speed6D_NATIVE
int Encode_NATIVE_Base_commands_Speed6D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_Speed6D *pSrc);
#endif

#ifdef __NEED_Base_commands_Speed6D_UPER
int Decode_UPER_Base_commands_Speed6D(asn1SccBase_commands_Speed6D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_commands_Speed6D_ACN
int Decode_ACN_Base_commands_Speed6D(asn1SccBase_commands_Speed6D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_commands_Speed6D_NATIVE
int Decode_NATIVE_Base_commands_Speed6D(asn1SccBase_commands_Speed6D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_BodyState_UPER
int Encode_UPER_Base_samples_BodyState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_BodyState *pSrc);
#endif

#ifdef __NEED_Base_samples_BodyState_ACN
int Encode_ACN_Base_samples_BodyState(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_BodyState *pSrc);
#endif

#ifdef __NEED_Base_samples_BodyState_NATIVE
int Encode_NATIVE_Base_samples_BodyState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_BodyState *pSrc);
#endif

#ifdef __NEED_Base_samples_BodyState_UPER
int Decode_UPER_Base_samples_BodyState(asn1SccBase_samples_BodyState *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_BodyState_ACN
int Decode_ACN_Base_samples_BodyState(asn1SccBase_samples_BodyState *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_BodyState_NATIVE
int Decode_NATIVE_Base_samples_BodyState(asn1SccBase_samples_BodyState *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_IMUSensors_UPER
int Encode_UPER_Base_samples_IMUSensors(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_IMUSensors *pSrc);
#endif

#ifdef __NEED_Base_samples_IMUSensors_ACN
int Encode_ACN_Base_samples_IMUSensors(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_IMUSensors *pSrc);
#endif

#ifdef __NEED_Base_samples_IMUSensors_NATIVE
int Encode_NATIVE_Base_samples_IMUSensors(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_IMUSensors *pSrc);
#endif

#ifdef __NEED_Base_samples_IMUSensors_UPER
int Decode_UPER_Base_samples_IMUSensors(asn1SccBase_samples_IMUSensors *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_IMUSensors_ACN
int Decode_ACN_Base_samples_IMUSensors(asn1SccBase_samples_IMUSensors *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_IMUSensors_NATIVE
int Decode_NATIVE_Base_samples_IMUSensors(asn1SccBase_samples_IMUSensors *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Motion2D_UPER
int Encode_UPER_Base_samples_Motion2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Motion2D *pSrc);
#endif

#ifdef __NEED_Base_samples_Motion2D_ACN
int Encode_ACN_Base_samples_Motion2D(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Motion2D *pSrc);
#endif

#ifdef __NEED_Base_samples_Motion2D_NATIVE
int Encode_NATIVE_Base_samples_Motion2D(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Motion2D *pSrc);
#endif

#ifdef __NEED_Base_samples_Motion2D_UPER
int Decode_UPER_Base_samples_Motion2D(asn1SccBase_samples_Motion2D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Motion2D_ACN
int Decode_ACN_Base_samples_Motion2D(asn1SccBase_samples_Motion2D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Motion2D_NATIVE
int Decode_NATIVE_Base_samples_Motion2D(asn1SccBase_samples_Motion2D *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Pressure_UPER
int Encode_UPER_Base_samples_Pressure(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Pressure *pSrc);
#endif

#ifdef __NEED_Base_samples_Pressure_ACN
int Encode_ACN_Base_samples_Pressure(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Pressure *pSrc);
#endif

#ifdef __NEED_Base_samples_Pressure_NATIVE
int Encode_NATIVE_Base_samples_Pressure(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Pressure *pSrc);
#endif

#ifdef __NEED_Base_samples_Pressure_UPER
int Decode_UPER_Base_samples_Pressure(asn1SccBase_samples_Pressure *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Pressure_ACN
int Decode_ACN_Base_samples_Pressure(asn1SccBase_samples_Pressure *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Pressure_NATIVE
int Decode_NATIVE_Base_samples_Pressure(asn1SccBase_samples_Pressure *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_UPER
int Encode_UPER_Base_samples_RigidBodyAcceleration(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyAcceleration *pSrc);
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_ACN
int Encode_ACN_Base_samples_RigidBodyAcceleration(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_RigidBodyAcceleration *pSrc);
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_NATIVE
int Encode_NATIVE_Base_samples_RigidBodyAcceleration(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyAcceleration *pSrc);
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_UPER
int Decode_UPER_Base_samples_RigidBodyAcceleration(asn1SccBase_samples_RigidBodyAcceleration *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_ACN
int Decode_ACN_Base_samples_RigidBodyAcceleration(asn1SccBase_samples_RigidBodyAcceleration *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_NATIVE
int Decode_NATIVE_Base_samples_RigidBodyAcceleration(asn1SccBase_samples_RigidBodyAcceleration *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Wrench_UPER
int Encode_UPER_Base_samples_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrench *pSrc);
#endif

#ifdef __NEED_Base_samples_Wrench_ACN
int Encode_ACN_Base_samples_Wrench(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Wrench *pSrc);
#endif

#ifdef __NEED_Base_samples_Wrench_NATIVE
int Encode_NATIVE_Base_samples_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrench *pSrc);
#endif

#ifdef __NEED_Base_samples_Wrench_UPER
int Decode_UPER_Base_samples_Wrench(asn1SccBase_samples_Wrench *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Wrench_ACN
int Decode_ACN_Base_samples_Wrench(asn1SccBase_samples_Wrench *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Wrench_NATIVE
int Decode_NATIVE_Base_samples_Wrench(asn1SccBase_samples_Wrench *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_frame_size_t_UPER
int Encode_UPER_Base_samples_frame_frame_size_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_size_t *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_frame_size_t_ACN
int Encode_ACN_Base_samples_frame_frame_size_t(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_frame_frame_size_t *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_frame_size_t_NATIVE
int Encode_NATIVE_Base_samples_frame_frame_size_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_size_t *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_frame_size_t_UPER
int Decode_UPER_Base_samples_frame_frame_size_t(asn1SccBase_samples_frame_frame_size_t *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_frame_size_t_ACN
int Decode_ACN_Base_samples_frame_frame_size_t(asn1SccBase_samples_frame_frame_size_t *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_frame_size_t_NATIVE
int Decode_NATIVE_Base_samples_frame_frame_size_t(asn1SccBase_samples_frame_frame_size_t *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointLimits_UPER
int Encode_UPER_Base_JointLimits(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointLimits *pSrc);
#endif

#ifdef __NEED_Base_JointLimits_ACN
int Encode_ACN_Base_JointLimits(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointLimits *pSrc);
#endif

#ifdef __NEED_Base_JointLimits_NATIVE
int Encode_NATIVE_Base_JointLimits(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointLimits *pSrc);
#endif

#ifdef __NEED_Base_JointLimits_UPER
int Decode_UPER_Base_JointLimits(asn1SccBase_JointLimits *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointLimits_ACN
int Decode_ACN_Base_JointLimits(asn1SccBase_JointLimits *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointLimits_NATIVE
int Decode_NATIVE_Base_JointLimits(asn1SccBase_JointLimits *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTransform_UPER
int Encode_UPER_Base_JointTransform(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransform *pSrc);
#endif

#ifdef __NEED_Base_JointTransform_ACN
int Encode_ACN_Base_JointTransform(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointTransform *pSrc);
#endif

#ifdef __NEED_Base_JointTransform_NATIVE
int Encode_NATIVE_Base_JointTransform(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransform *pSrc);
#endif

#ifdef __NEED_Base_JointTransform_UPER
int Decode_UPER_Base_JointTransform(asn1SccBase_JointTransform *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTransform_ACN
int Decode_ACN_Base_JointTransform(asn1SccBase_JointTransform *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTransform_NATIVE
int Decode_NATIVE_Base_JointTransform(asn1SccBase_JointTransform *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointsTrajectory_UPER
int Encode_UPER_Base_JointsTrajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointsTrajectory *pSrc);
#endif

#ifdef __NEED_Base_JointsTrajectory_ACN
int Encode_ACN_Base_JointsTrajectory(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointsTrajectory *pSrc);
#endif

#ifdef __NEED_Base_JointsTrajectory_NATIVE
int Encode_NATIVE_Base_JointsTrajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointsTrajectory *pSrc);
#endif

#ifdef __NEED_Base_JointsTrajectory_UPER
int Decode_UPER_Base_JointsTrajectory(asn1SccBase_JointsTrajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointsTrajectory_ACN
int Decode_ACN_Base_JointsTrajectory(asn1SccBase_JointsTrajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointsTrajectory_NATIVE
int Decode_NATIVE_Base_JointsTrajectory(asn1SccBase_JointsTrajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointLimitRange_UPER
int Encode_UPER_Base_NamedVector_Base_JointLimitRange(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointLimitRange *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointLimitRange_ACN
int Encode_ACN_Base_NamedVector_Base_JointLimitRange(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_NamedVector_Base_JointLimitRange *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointLimitRange_NATIVE
int Encode_NATIVE_Base_NamedVector_Base_JointLimitRange(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointLimitRange *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointLimitRange_UPER
int Decode_UPER_Base_NamedVector_Base_JointLimitRange(asn1SccBase_NamedVector_Base_JointLimitRange *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointLimitRange_ACN
int Decode_ACN_Base_NamedVector_Base_JointLimitRange(asn1SccBase_NamedVector_Base_JointLimitRange *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointLimitRange_NATIVE
int Decode_NATIVE_Base_NamedVector_Base_JointLimitRange(asn1SccBase_NamedVector_Base_JointLimitRange *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointState_UPER
int Encode_UPER_Base_NamedVector_Base_JointState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointState *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointState_ACN
int Encode_ACN_Base_NamedVector_Base_JointState(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_NamedVector_Base_JointState *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointState_NATIVE
int Encode_NATIVE_Base_NamedVector_Base_JointState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointState *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointState_UPER
int Decode_UPER_Base_NamedVector_Base_JointState(asn1SccBase_NamedVector_Base_JointState *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointState_ACN
int Decode_ACN_Base_NamedVector_Base_JointState(asn1SccBase_NamedVector_Base_JointState *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointState_NATIVE
int Decode_NATIVE_Base_NamedVector_Base_JointState(asn1SccBase_NamedVector_Base_JointState *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_Wrench_UPER
int Encode_UPER_Base_NamedVector_Base_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_Wrench *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_Wrench_ACN
int Encode_ACN_Base_NamedVector_Base_Wrench(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_NamedVector_Base_Wrench *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_Wrench_NATIVE
int Encode_NATIVE_Base_NamedVector_Base_Wrench(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_Wrench *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_Wrench_UPER
int Decode_UPER_Base_NamedVector_Base_Wrench(asn1SccBase_NamedVector_Base_Wrench *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_Wrench_ACN
int Decode_ACN_Base_NamedVector_Base_Wrench(asn1SccBase_NamedVector_Base_Wrench *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_Wrench_NATIVE
int Decode_NATIVE_Base_NamedVector_Base_Wrench(asn1SccBase_NamedVector_Base_Wrench *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTrajectory_UPER
int Encode_UPER_Base_NamedVector_Base_JointTrajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointTrajectory *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTrajectory_ACN
int Encode_ACN_Base_NamedVector_Base_JointTrajectory(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_NamedVector_Base_JointTrajectory *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTrajectory_NATIVE
int Encode_NATIVE_Base_NamedVector_Base_JointTrajectory(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointTrajectory *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTrajectory_UPER
int Decode_UPER_Base_NamedVector_Base_JointTrajectory(asn1SccBase_NamedVector_Base_JointTrajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTrajectory_ACN
int Decode_ACN_Base_NamedVector_Base_JointTrajectory(asn1SccBase_NamedVector_Base_JointTrajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTrajectory_NATIVE
int Decode_NATIVE_Base_NamedVector_Base_JointTrajectory(asn1SccBase_NamedVector_Base_JointTrajectory *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DepthMap_UPER
int Encode_UPER_Base_samples_DepthMap(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap *pSrc);
#endif

#ifdef __NEED_Base_samples_DepthMap_ACN
int Encode_ACN_Base_samples_DepthMap(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_DepthMap *pSrc);
#endif

#ifdef __NEED_Base_samples_DepthMap_NATIVE
int Encode_NATIVE_Base_samples_DepthMap(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DepthMap *pSrc);
#endif

#ifdef __NEED_Base_samples_DepthMap_UPER
int Decode_UPER_Base_samples_DepthMap(asn1SccBase_samples_DepthMap *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DepthMap_ACN
int Decode_ACN_Base_samples_DepthMap(asn1SccBase_samples_DepthMap *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DepthMap_NATIVE
int Decode_NATIVE_Base_samples_DepthMap(asn1SccBase_samples_DepthMap *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DistanceImage_UPER
int Encode_UPER_Base_samples_DistanceImage(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DistanceImage *pSrc);
#endif

#ifdef __NEED_Base_samples_DistanceImage_ACN
int Encode_ACN_Base_samples_DistanceImage(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_DistanceImage *pSrc);
#endif

#ifdef __NEED_Base_samples_DistanceImage_NATIVE
int Encode_NATIVE_Base_samples_DistanceImage(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_DistanceImage *pSrc);
#endif

#ifdef __NEED_Base_samples_DistanceImage_UPER
int Decode_UPER_Base_samples_DistanceImage(asn1SccBase_samples_DistanceImage *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DistanceImage_ACN
int Decode_ACN_Base_samples_DistanceImage(asn1SccBase_samples_DistanceImage *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_DistanceImage_NATIVE
int Decode_NATIVE_Base_samples_DistanceImage(asn1SccBase_samples_DistanceImage *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_commands_Joints_UPER
int Encode_UPER_Base_commands_Joints(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_Joints *pSrc);
#endif

#ifdef __NEED_Base_commands_Joints_ACN
int Encode_ACN_Base_commands_Joints(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_commands_Joints *pSrc);
#endif

#ifdef __NEED_Base_commands_Joints_NATIVE
int Encode_NATIVE_Base_commands_Joints(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_Joints *pSrc);
#endif

#ifdef __NEED_Base_commands_Joints_UPER
int Decode_UPER_Base_commands_Joints(asn1SccBase_commands_Joints *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_commands_Joints_ACN
int Decode_ACN_Base_commands_Joints(asn1SccBase_commands_Joints *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_commands_Joints_NATIVE
int Decode_NATIVE_Base_commands_Joints(asn1SccBase_commands_Joints *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_LaserScan_UPER
int Encode_UPER_Base_samples_LaserScan(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_LaserScan *pSrc);
#endif

#ifdef __NEED_Base_samples_LaserScan_ACN
int Encode_ACN_Base_samples_LaserScan(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_LaserScan *pSrc);
#endif

#ifdef __NEED_Base_samples_LaserScan_NATIVE
int Encode_NATIVE_Base_samples_LaserScan(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_LaserScan *pSrc);
#endif

#ifdef __NEED_Base_samples_LaserScan_UPER
int Decode_UPER_Base_samples_LaserScan(asn1SccBase_samples_LaserScan *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_LaserScan_ACN
int Decode_ACN_Base_samples_LaserScan(asn1SccBase_samples_LaserScan *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_LaserScan_NATIVE
int Decode_NATIVE_Base_samples_LaserScan(asn1SccBase_samples_LaserScan *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Pointcloud_UPER
int Encode_UPER_Base_samples_Pointcloud(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Pointcloud *pSrc);
#endif

#ifdef __NEED_Base_samples_Pointcloud_ACN
int Encode_ACN_Base_samples_Pointcloud(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Pointcloud *pSrc);
#endif

#ifdef __NEED_Base_samples_Pointcloud_NATIVE
int Encode_NATIVE_Base_samples_Pointcloud(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Pointcloud *pSrc);
#endif

#ifdef __NEED_Base_samples_Pointcloud_UPER
int Decode_UPER_Base_samples_Pointcloud(asn1SccBase_samples_Pointcloud *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Pointcloud_ACN
int Decode_ACN_Base_samples_Pointcloud(asn1SccBase_samples_Pointcloud *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Pointcloud_NATIVE
int Decode_NATIVE_Base_samples_Pointcloud(asn1SccBase_samples_Pointcloud *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_RigidBodyState_UPER
int Encode_UPER_Base_samples_RigidBodyState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyState *pSrc);
#endif

#ifdef __NEED_Base_samples_RigidBodyState_ACN
int Encode_ACN_Base_samples_RigidBodyState(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_RigidBodyState *pSrc);
#endif

#ifdef __NEED_Base_samples_RigidBodyState_NATIVE
int Encode_NATIVE_Base_samples_RigidBodyState(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyState *pSrc);
#endif

#ifdef __NEED_Base_samples_RigidBodyState_UPER
int Decode_UPER_Base_samples_RigidBodyState(asn1SccBase_samples_RigidBodyState *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_RigidBodyState_ACN
int Decode_ACN_Base_samples_RigidBodyState(asn1SccBase_samples_RigidBodyState *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_RigidBodyState_NATIVE
int Decode_NATIVE_Base_samples_RigidBodyState(asn1SccBase_samples_RigidBodyState *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Sonar_UPER
int Encode_UPER_Base_samples_Sonar(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Sonar *pSrc);
#endif

#ifdef __NEED_Base_samples_Sonar_ACN
int Encode_ACN_Base_samples_Sonar(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Sonar *pSrc);
#endif

#ifdef __NEED_Base_samples_Sonar_NATIVE
int Encode_NATIVE_Base_samples_Sonar(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Sonar *pSrc);
#endif

#ifdef __NEED_Base_samples_Sonar_UPER
int Decode_UPER_Base_samples_Sonar(asn1SccBase_samples_Sonar *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Sonar_ACN
int Decode_ACN_Base_samples_Sonar(asn1SccBase_samples_Sonar *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Sonar_NATIVE
int Decode_NATIVE_Base_samples_Sonar(asn1SccBase_samples_Sonar *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_SonarBeam_UPER
int Encode_UPER_Base_samples_SonarBeam(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_SonarBeam *pSrc);
#endif

#ifdef __NEED_Base_samples_SonarBeam_ACN
int Encode_ACN_Base_samples_SonarBeam(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_SonarBeam *pSrc);
#endif

#ifdef __NEED_Base_samples_SonarBeam_NATIVE
int Encode_NATIVE_Base_samples_SonarBeam(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_SonarBeam *pSrc);
#endif

#ifdef __NEED_Base_samples_SonarBeam_UPER
int Decode_UPER_Base_samples_SonarBeam(asn1SccBase_samples_SonarBeam *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_SonarBeam_ACN
int Decode_ACN_Base_samples_SonarBeam(asn1SccBase_samples_SonarBeam *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_SonarBeam_NATIVE
int Decode_NATIVE_Base_samples_SonarBeam(asn1SccBase_samples_SonarBeam *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_SonarScan_UPER
int Encode_UPER_Base_samples_SonarScan(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_SonarScan *pSrc);
#endif

#ifdef __NEED_Base_samples_SonarScan_ACN
int Encode_ACN_Base_samples_SonarScan(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_SonarScan *pSrc);
#endif

#ifdef __NEED_Base_samples_SonarScan_NATIVE
int Encode_NATIVE_Base_samples_SonarScan(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_SonarScan *pSrc);
#endif

#ifdef __NEED_Base_samples_SonarScan_UPER
int Decode_UPER_Base_samples_SonarScan(asn1SccBase_samples_SonarScan *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_SonarScan_ACN
int Decode_ACN_Base_samples_SonarScan(asn1SccBase_samples_SonarScan *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_SonarScan_NATIVE
int Decode_NATIVE_Base_samples_SonarScan(asn1SccBase_samples_SonarScan *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Wrenches_UPER
int Encode_UPER_Base_samples_Wrenches(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrenches *pSrc);
#endif

#ifdef __NEED_Base_samples_Wrenches_ACN
int Encode_ACN_Base_samples_Wrenches(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Wrenches *pSrc);
#endif

#ifdef __NEED_Base_samples_Wrenches_NATIVE
int Encode_NATIVE_Base_samples_Wrenches(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrenches *pSrc);
#endif

#ifdef __NEED_Base_samples_Wrenches_UPER
int Decode_UPER_Base_samples_Wrenches(asn1SccBase_samples_Wrenches *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Wrenches_ACN
int Decode_ACN_Base_samples_Wrenches(asn1SccBase_samples_Wrenches *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Wrenches_NATIVE
int Decode_NATIVE_Base_samples_Wrenches(asn1SccBase_samples_Wrenches *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_frame_attrib_t_UPER
int Encode_UPER_Base_samples_frame_frame_attrib_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_attrib_t *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_frame_attrib_t_ACN
int Encode_ACN_Base_samples_frame_frame_attrib_t(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_frame_frame_attrib_t *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_frame_attrib_t_NATIVE
int Encode_NATIVE_Base_samples_frame_frame_attrib_t(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_frame_attrib_t *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_frame_attrib_t_UPER
int Decode_UPER_Base_samples_frame_frame_attrib_t(asn1SccBase_samples_frame_frame_attrib_t *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_frame_attrib_t_ACN
int Decode_ACN_Base_samples_frame_frame_attrib_t(asn1SccBase_samples_frame_frame_attrib_t *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_frame_attrib_t_NATIVE
int Decode_NATIVE_Base_samples_frame_frame_attrib_t(asn1SccBase_samples_frame_frame_attrib_t *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTransformVector_UPER
int Encode_UPER_Base_JointTransformVector(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransformVector *pSrc);
#endif

#ifdef __NEED_Base_JointTransformVector_ACN
int Encode_ACN_Base_JointTransformVector(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointTransformVector *pSrc);
#endif

#ifdef __NEED_Base_JointTransformVector_NATIVE
int Encode_NATIVE_Base_JointTransformVector(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransformVector *pSrc);
#endif

#ifdef __NEED_Base_JointTransformVector_UPER
int Decode_UPER_Base_JointTransformVector(asn1SccBase_JointTransformVector *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTransformVector_ACN
int Decode_ACN_Base_JointTransformVector(asn1SccBase_JointTransformVector *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTransformVector_NATIVE
int Decode_NATIVE_Base_JointTransformVector(asn1SccBase_JointTransformVector *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTransform_UPER
int Encode_UPER_Base_NamedVector_Base_JointTransform(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointTransform *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTransform_ACN
int Encode_ACN_Base_NamedVector_Base_JointTransform(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_NamedVector_Base_JointTransform *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTransform_NATIVE
int Encode_NATIVE_Base_NamedVector_Base_JointTransform(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_Base_JointTransform *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTransform_UPER
int Decode_UPER_Base_NamedVector_Base_JointTransform(asn1SccBase_NamedVector_Base_JointTransform *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTransform_ACN
int Decode_ACN_Base_NamedVector_Base_JointTransform(asn1SccBase_NamedVector_Base_JointTransform *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_Base_JointTransform_NATIVE
int Decode_NATIVE_Base_NamedVector_Base_JointTransform(asn1SccBase_NamedVector_Base_JointTransform *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_Frame_UPER
int Encode_UPER_Base_samples_frame_Frame(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_Frame *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_Frame_ACN
int Encode_ACN_Base_samples_frame_Frame(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_frame_Frame *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_Frame_NATIVE
int Encode_NATIVE_Base_samples_frame_Frame(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_Frame *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_Frame_UPER
int Decode_UPER_Base_samples_frame_Frame(asn1SccBase_samples_frame_Frame *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_Frame_ACN
int Decode_ACN_Base_samples_frame_Frame(asn1SccBase_samples_frame_Frame *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_Frame_NATIVE
int Decode_NATIVE_Base_samples_frame_Frame(asn1SccBase_samples_frame_Frame *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_FramePair_UPER
int Encode_UPER_Base_samples_frame_FramePair(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_FramePair *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_FramePair_ACN
int Encode_ACN_Base_samples_frame_FramePair(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_frame_FramePair *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_FramePair_NATIVE
int Encode_NATIVE_Base_samples_frame_FramePair(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_frame_FramePair *pSrc);
#endif

#ifdef __NEED_Base_samples_frame_FramePair_UPER
int Decode_UPER_Base_samples_frame_FramePair(asn1SccBase_samples_frame_FramePair *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_FramePair_ACN
int Decode_ACN_Base_samples_frame_FramePair(asn1SccBase_samples_frame_FramePair *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_frame_FramePair_NATIVE
int Decode_NATIVE_Base_samples_frame_FramePair(asn1SccBase_samples_frame_FramePair *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_AngleAxisd_UPER
int Encode_UPER_Wrappers_AngleAxisd(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_AngleAxisd *pSrc);
#endif

#ifdef __NEED_Wrappers_AngleAxisd_ACN
int Encode_ACN_Wrappers_AngleAxisd(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_AngleAxisd *pSrc);
#endif

#ifdef __NEED_Wrappers_AngleAxisd_NATIVE
int Encode_NATIVE_Wrappers_AngleAxisd(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_AngleAxisd *pSrc);
#endif

#ifdef __NEED_Wrappers_AngleAxisd_UPER
int Decode_UPER_Wrappers_AngleAxisd(asn1SccWrappers_AngleAxisd *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_AngleAxisd_ACN
int Decode_ACN_Wrappers_AngleAxisd(asn1SccWrappers_AngleAxisd *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_AngleAxisd_NATIVE
int Decode_NATIVE_Wrappers_AngleAxisd(asn1SccWrappers_AngleAxisd *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Vector2d_UPER
int Encode_UPER_Wrappers_Vector2d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector2d *pSrc);
#endif

#ifdef __NEED_Wrappers_Vector2d_ACN
int Encode_ACN_Wrappers_Vector2d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Vector2d *pSrc);
#endif

#ifdef __NEED_Wrappers_Vector2d_NATIVE
int Encode_NATIVE_Wrappers_Vector2d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector2d *pSrc);
#endif

#ifdef __NEED_Wrappers_Vector2d_UPER
int Decode_UPER_Wrappers_Vector2d(asn1SccWrappers_Vector2d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Vector2d_ACN
int Decode_ACN_Wrappers_Vector2d(asn1SccWrappers_Vector2d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Vector2d_NATIVE
int Decode_NATIVE_Wrappers_Vector2d(asn1SccWrappers_Vector2d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Matrix2d_UPER
int Encode_UPER_Wrappers_Matrix2d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix2d *pSrc);
#endif

#ifdef __NEED_Wrappers_Matrix2d_ACN
int Encode_ACN_Wrappers_Matrix2d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Matrix2d *pSrc);
#endif

#ifdef __NEED_Wrappers_Matrix2d_NATIVE
int Encode_NATIVE_Wrappers_Matrix2d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix2d *pSrc);
#endif

#ifdef __NEED_Wrappers_Matrix2d_UPER
int Decode_UPER_Wrappers_Matrix2d(asn1SccWrappers_Matrix2d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Matrix2d_ACN
int Decode_ACN_Wrappers_Matrix2d(asn1SccWrappers_Matrix2d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Matrix2d_NATIVE
int Decode_NATIVE_Wrappers_Matrix2d(asn1SccWrappers_Matrix2d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Vector3d_UPER
int Encode_UPER_Wrappers_Vector3d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector3d *pSrc);
#endif

#ifdef __NEED_Wrappers_Vector3d_ACN
int Encode_ACN_Wrappers_Vector3d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Vector3d *pSrc);
#endif

#ifdef __NEED_Wrappers_Vector3d_NATIVE
int Encode_NATIVE_Wrappers_Vector3d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector3d *pSrc);
#endif

#ifdef __NEED_Wrappers_Vector3d_UPER
int Decode_UPER_Wrappers_Vector3d(asn1SccWrappers_Vector3d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Vector3d_ACN
int Decode_ACN_Wrappers_Vector3d(asn1SccWrappers_Vector3d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Vector3d_NATIVE
int Decode_NATIVE_Wrappers_Vector3d(asn1SccWrappers_Vector3d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Matrix3d_UPER
int Encode_UPER_Wrappers_Matrix3d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix3d *pSrc);
#endif

#ifdef __NEED_Wrappers_Matrix3d_ACN
int Encode_ACN_Wrappers_Matrix3d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Matrix3d *pSrc);
#endif

#ifdef __NEED_Wrappers_Matrix3d_NATIVE
int Encode_NATIVE_Wrappers_Matrix3d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix3d *pSrc);
#endif

#ifdef __NEED_Wrappers_Matrix3d_UPER
int Decode_UPER_Wrappers_Matrix3d(asn1SccWrappers_Matrix3d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Matrix3d_ACN
int Decode_ACN_Wrappers_Matrix3d(asn1SccWrappers_Matrix3d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Matrix3d_NATIVE
int Decode_NATIVE_Wrappers_Matrix3d(asn1SccWrappers_Matrix3d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Vector4d_UPER
int Encode_UPER_Wrappers_Vector4d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector4d *pSrc);
#endif

#ifdef __NEED_Wrappers_Vector4d_ACN
int Encode_ACN_Wrappers_Vector4d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Vector4d *pSrc);
#endif

#ifdef __NEED_Wrappers_Vector4d_NATIVE
int Encode_NATIVE_Wrappers_Vector4d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector4d *pSrc);
#endif

#ifdef __NEED_Wrappers_Vector4d_UPER
int Decode_UPER_Wrappers_Vector4d(asn1SccWrappers_Vector4d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Vector4d_ACN
int Decode_ACN_Wrappers_Vector4d(asn1SccWrappers_Vector4d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Vector4d_NATIVE
int Decode_NATIVE_Wrappers_Vector4d(asn1SccWrappers_Vector4d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Matrix4d_UPER
int Encode_UPER_Wrappers_Matrix4d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix4d *pSrc);
#endif

#ifdef __NEED_Wrappers_Matrix4d_ACN
int Encode_ACN_Wrappers_Matrix4d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Matrix4d *pSrc);
#endif

#ifdef __NEED_Wrappers_Matrix4d_NATIVE
int Encode_NATIVE_Wrappers_Matrix4d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix4d *pSrc);
#endif

#ifdef __NEED_Wrappers_Matrix4d_UPER
int Decode_UPER_Wrappers_Matrix4d(asn1SccWrappers_Matrix4d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Matrix4d_ACN
int Decode_ACN_Wrappers_Matrix4d(asn1SccWrappers_Matrix4d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Matrix4d_NATIVE
int Decode_NATIVE_Wrappers_Matrix4d(asn1SccWrappers_Matrix4d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Vector6d_UPER
int Encode_UPER_Wrappers_Vector6d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector6d *pSrc);
#endif

#ifdef __NEED_Wrappers_Vector6d_ACN
int Encode_ACN_Wrappers_Vector6d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Vector6d *pSrc);
#endif

#ifdef __NEED_Wrappers_Vector6d_NATIVE
int Encode_NATIVE_Wrappers_Vector6d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Vector6d *pSrc);
#endif

#ifdef __NEED_Wrappers_Vector6d_UPER
int Decode_UPER_Wrappers_Vector6d(asn1SccWrappers_Vector6d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Vector6d_ACN
int Decode_ACN_Wrappers_Vector6d(asn1SccWrappers_Vector6d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Vector6d_NATIVE
int Decode_NATIVE_Wrappers_Vector6d(asn1SccWrappers_Vector6d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Matrix6d_UPER
int Encode_UPER_Wrappers_Matrix6d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix6d *pSrc);
#endif

#ifdef __NEED_Wrappers_Matrix6d_ACN
int Encode_ACN_Wrappers_Matrix6d(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Matrix6d *pSrc);
#endif

#ifdef __NEED_Wrappers_Matrix6d_NATIVE
int Encode_NATIVE_Wrappers_Matrix6d(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Matrix6d *pSrc);
#endif

#ifdef __NEED_Wrappers_Matrix6d_UPER
int Decode_UPER_Wrappers_Matrix6d(asn1SccWrappers_Matrix6d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Matrix6d_ACN
int Decode_ACN_Wrappers_Matrix6d(asn1SccWrappers_Matrix6d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Matrix6d_NATIVE
int Decode_NATIVE_Wrappers_Matrix6d(asn1SccWrappers_Matrix6d *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_MatrixXd_UPER
int Encode_UPER_Wrappers_MatrixXd(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_MatrixXd *pSrc);
#endif

#ifdef __NEED_Wrappers_MatrixXd_ACN
int Encode_ACN_Wrappers_MatrixXd(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_MatrixXd *pSrc);
#endif

#ifdef __NEED_Wrappers_MatrixXd_NATIVE
int Encode_NATIVE_Wrappers_MatrixXd(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_MatrixXd *pSrc);
#endif

#ifdef __NEED_Wrappers_MatrixXd_UPER
int Decode_UPER_Wrappers_MatrixXd(asn1SccWrappers_MatrixXd *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_MatrixXd_ACN
int Decode_ACN_Wrappers_MatrixXd(asn1SccWrappers_MatrixXd *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_MatrixXd_NATIVE
int Decode_NATIVE_Wrappers_MatrixXd(asn1SccWrappers_MatrixXd *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Quaterniond_UPER
int Encode_UPER_Wrappers_Quaterniond(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Quaterniond *pSrc);
#endif

#ifdef __NEED_Wrappers_Quaterniond_ACN
int Encode_ACN_Wrappers_Quaterniond(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_Quaterniond *pSrc);
#endif

#ifdef __NEED_Wrappers_Quaterniond_NATIVE
int Encode_NATIVE_Wrappers_Quaterniond(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_Quaterniond *pSrc);
#endif

#ifdef __NEED_Wrappers_Quaterniond_UPER
int Decode_UPER_Wrappers_Quaterniond(asn1SccWrappers_Quaterniond *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Quaterniond_ACN
int Decode_ACN_Wrappers_Quaterniond(asn1SccWrappers_Quaterniond *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_Quaterniond_NATIVE
int Decode_NATIVE_Wrappers_Quaterniond(asn1SccWrappers_Quaterniond *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_VectorXd_UPER
int Encode_UPER_Wrappers_VectorXd(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_VectorXd *pSrc);
#endif

#ifdef __NEED_Wrappers_VectorXd_ACN
int Encode_ACN_Wrappers_VectorXd(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_VectorXd *pSrc);
#endif

#ifdef __NEED_Wrappers_VectorXd_NATIVE
int Encode_NATIVE_Wrappers_VectorXd(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_VectorXd *pSrc);
#endif

#ifdef __NEED_Wrappers_VectorXd_UPER
int Decode_UPER_Wrappers_VectorXd(asn1SccWrappers_VectorXd *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_VectorXd_ACN
int Decode_ACN_Wrappers_VectorXd(asn1SccWrappers_VectorXd *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_VectorXd_NATIVE
int Decode_NATIVE_Wrappers_VectorXd(asn1SccWrappers_VectorXd *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTransform_m_UPER
int Encode_UPER_Base_JointTransform_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransform_m *pSrc);
#endif

#ifdef __NEED_Base_JointTransform_m_ACN
int Encode_ACN_Base_JointTransform_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointTransform_m *pSrc);
#endif

#ifdef __NEED_Base_JointTransform_m_NATIVE
int Encode_NATIVE_Base_JointTransform_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransform_m *pSrc);
#endif

#ifdef __NEED_Base_JointTransform_m_UPER
int Decode_UPER_Base_JointTransform_m(asn1SccBase_JointTransform_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTransform_m_ACN
int Decode_ACN_Base_JointTransform_m(asn1SccBase_JointTransform_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTransform_m_NATIVE
int Decode_NATIVE_Base_JointTransform_m(asn1SccBase_JointTransform_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pose2D_m_UPER
int Encode_UPER_Base_Pose2D_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose2D_m *pSrc);
#endif

#ifdef __NEED_Base_Pose2D_m_ACN
int Encode_ACN_Base_Pose2D_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Pose2D_m *pSrc);
#endif

#ifdef __NEED_Base_Pose2D_m_NATIVE
int Encode_NATIVE_Base_Pose2D_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose2D_m *pSrc);
#endif

#ifdef __NEED_Base_Pose2D_m_UPER
int Decode_UPER_Base_Pose2D_m(asn1SccBase_Pose2D_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pose2D_m_ACN
int Decode_ACN_Base_Pose2D_m(asn1SccBase_Pose2D_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pose2D_m_NATIVE
int Decode_NATIVE_Base_Pose2D_m(asn1SccBase_Pose2D_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pose_m_UPER
int Encode_UPER_Base_Pose_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose_m *pSrc);
#endif

#ifdef __NEED_Base_Pose_m_ACN
int Encode_ACN_Base_Pose_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Pose_m *pSrc);
#endif

#ifdef __NEED_Base_Pose_m_NATIVE
int Encode_NATIVE_Base_Pose_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Pose_m *pSrc);
#endif

#ifdef __NEED_Base_Pose_m_UPER
int Decode_UPER_Base_Pose_m(asn1SccBase_Pose_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pose_m_ACN
int Decode_ACN_Base_Pose_m(asn1SccBase_Pose_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Pose_m_NATIVE
int Decode_NATIVE_Base_Pose_m(asn1SccBase_Pose_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TransformWithCovariance_m_UPER
int Encode_UPER_Base_TransformWithCovariance_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TransformWithCovariance_m *pSrc);
#endif

#ifdef __NEED_Base_TransformWithCovariance_m_ACN
int Encode_ACN_Base_TransformWithCovariance_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_TransformWithCovariance_m *pSrc);
#endif

#ifdef __NEED_Base_TransformWithCovariance_m_NATIVE
int Encode_NATIVE_Base_TransformWithCovariance_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TransformWithCovariance_m *pSrc);
#endif

#ifdef __NEED_Base_TransformWithCovariance_m_UPER
int Decode_UPER_Base_TransformWithCovariance_m(asn1SccBase_TransformWithCovariance_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TransformWithCovariance_m_ACN
int Decode_ACN_Base_TransformWithCovariance_m(asn1SccBase_TransformWithCovariance_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TransformWithCovariance_m_NATIVE
int Decode_NATIVE_Base_TransformWithCovariance_m(asn1SccBase_TransformWithCovariance_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TwistWithCovariance_m_UPER
int Encode_UPER_Base_TwistWithCovariance_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TwistWithCovariance_m *pSrc);
#endif

#ifdef __NEED_Base_TwistWithCovariance_m_ACN
int Encode_ACN_Base_TwistWithCovariance_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_TwistWithCovariance_m *pSrc);
#endif

#ifdef __NEED_Base_TwistWithCovariance_m_NATIVE
int Encode_NATIVE_Base_TwistWithCovariance_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_TwistWithCovariance_m *pSrc);
#endif

#ifdef __NEED_Base_TwistWithCovariance_m_UPER
int Decode_UPER_Base_TwistWithCovariance_m(asn1SccBase_TwistWithCovariance_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TwistWithCovariance_m_ACN
int Decode_ACN_Base_TwistWithCovariance_m(asn1SccBase_TwistWithCovariance_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_TwistWithCovariance_m_NATIVE
int Decode_NATIVE_Base_TwistWithCovariance_m(asn1SccBase_TwistWithCovariance_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Waypoint_m_UPER
int Encode_UPER_Base_Waypoint_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Waypoint_m *pSrc);
#endif

#ifdef __NEED_Base_Waypoint_m_ACN
int Encode_ACN_Base_Waypoint_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Waypoint_m *pSrc);
#endif

#ifdef __NEED_Base_Waypoint_m_NATIVE
int Encode_NATIVE_Base_Waypoint_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Waypoint_m *pSrc);
#endif

#ifdef __NEED_Base_Waypoint_m_UPER
int Decode_UPER_Base_Waypoint_m(asn1SccBase_Waypoint_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Waypoint_m_ACN
int Decode_ACN_Base_Waypoint_m(asn1SccBase_Waypoint_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Waypoint_m_NATIVE
int Decode_NATIVE_Base_Waypoint_m(asn1SccBase_Waypoint_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Wrench_m_UPER
int Encode_UPER_Base_Wrench_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Wrench_m *pSrc);
#endif

#ifdef __NEED_Base_Wrench_m_ACN
int Encode_ACN_Base_Wrench_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Wrench_m *pSrc);
#endif

#ifdef __NEED_Base_Wrench_m_NATIVE
int Encode_NATIVE_Base_Wrench_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Wrench_m *pSrc);
#endif

#ifdef __NEED_Base_Wrench_m_UPER
int Decode_UPER_Base_Wrench_m(asn1SccBase_Wrench_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Wrench_m_ACN
int Decode_ACN_Base_Wrench_m(asn1SccBase_Wrench_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Wrench_m_NATIVE
int Decode_NATIVE_Base_Wrench_m(asn1SccBase_Wrench_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_commands_LinearAngular6DCommand_m_UPER
int Encode_UPER_Base_commands_LinearAngular6DCommand_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_LinearAngular6DCommand_m *pSrc);
#endif

#ifdef __NEED_Base_commands_LinearAngular6DCommand_m_ACN
int Encode_ACN_Base_commands_LinearAngular6DCommand_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_commands_LinearAngular6DCommand_m *pSrc);
#endif

#ifdef __NEED_Base_commands_LinearAngular6DCommand_m_NATIVE
int Encode_NATIVE_Base_commands_LinearAngular6DCommand_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_commands_LinearAngular6DCommand_m *pSrc);
#endif

#ifdef __NEED_Base_commands_LinearAngular6DCommand_m_UPER
int Decode_UPER_Base_commands_LinearAngular6DCommand_m(asn1SccBase_commands_LinearAngular6DCommand_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_commands_LinearAngular6DCommand_m_ACN
int Decode_ACN_Base_commands_LinearAngular6DCommand_m(asn1SccBase_commands_LinearAngular6DCommand_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_commands_LinearAngular6DCommand_m_NATIVE
int Decode_NATIVE_Base_commands_LinearAngular6DCommand_m(asn1SccBase_commands_LinearAngular6DCommand_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_BodyState_m_UPER
int Encode_UPER_Base_samples_BodyState_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_BodyState_m *pSrc);
#endif

#ifdef __NEED_Base_samples_BodyState_m_ACN
int Encode_ACN_Base_samples_BodyState_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_BodyState_m *pSrc);
#endif

#ifdef __NEED_Base_samples_BodyState_m_NATIVE
int Encode_NATIVE_Base_samples_BodyState_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_BodyState_m *pSrc);
#endif

#ifdef __NEED_Base_samples_BodyState_m_UPER
int Decode_UPER_Base_samples_BodyState_m(asn1SccBase_samples_BodyState_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_BodyState_m_ACN
int Decode_ACN_Base_samples_BodyState_m(asn1SccBase_samples_BodyState_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_BodyState_m_NATIVE
int Decode_NATIVE_Base_samples_BodyState_m(asn1SccBase_samples_BodyState_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_IMUSensors_m_UPER
int Encode_UPER_Base_samples_IMUSensors_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_IMUSensors_m *pSrc);
#endif

#ifdef __NEED_Base_samples_IMUSensors_m_ACN
int Encode_ACN_Base_samples_IMUSensors_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_IMUSensors_m *pSrc);
#endif

#ifdef __NEED_Base_samples_IMUSensors_m_NATIVE
int Encode_NATIVE_Base_samples_IMUSensors_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_IMUSensors_m *pSrc);
#endif

#ifdef __NEED_Base_samples_IMUSensors_m_UPER
int Decode_UPER_Base_samples_IMUSensors_m(asn1SccBase_samples_IMUSensors_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_IMUSensors_m_ACN
int Decode_ACN_Base_samples_IMUSensors_m(asn1SccBase_samples_IMUSensors_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_IMUSensors_m_NATIVE
int Decode_NATIVE_Base_samples_IMUSensors_m(asn1SccBase_samples_IMUSensors_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_m_UPER
int Encode_UPER_Base_samples_RigidBodyAcceleration_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyAcceleration_m *pSrc);
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_m_ACN
int Encode_ACN_Base_samples_RigidBodyAcceleration_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_RigidBodyAcceleration_m *pSrc);
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_m_NATIVE
int Encode_NATIVE_Base_samples_RigidBodyAcceleration_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyAcceleration_m *pSrc);
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_m_UPER
int Decode_UPER_Base_samples_RigidBodyAcceleration_m(asn1SccBase_samples_RigidBodyAcceleration_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_m_ACN
int Decode_ACN_Base_samples_RigidBodyAcceleration_m(asn1SccBase_samples_RigidBodyAcceleration_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_RigidBodyAcceleration_m_NATIVE
int Decode_NATIVE_Base_samples_RigidBodyAcceleration_m(asn1SccBase_samples_RigidBodyAcceleration_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_RigidBodyState_m_UPER
int Encode_UPER_Base_samples_RigidBodyState_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyState_m *pSrc);
#endif

#ifdef __NEED_Base_samples_RigidBodyState_m_ACN
int Encode_ACN_Base_samples_RigidBodyState_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_RigidBodyState_m *pSrc);
#endif

#ifdef __NEED_Base_samples_RigidBodyState_m_NATIVE
int Encode_NATIVE_Base_samples_RigidBodyState_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_RigidBodyState_m *pSrc);
#endif

#ifdef __NEED_Base_samples_RigidBodyState_m_UPER
int Decode_UPER_Base_samples_RigidBodyState_m(asn1SccBase_samples_RigidBodyState_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_RigidBodyState_m_ACN
int Decode_ACN_Base_samples_RigidBodyState_m(asn1SccBase_samples_RigidBodyState_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_RigidBodyState_m_NATIVE
int Decode_NATIVE_Base_samples_RigidBodyState_m(asn1SccBase_samples_RigidBodyState_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Wrench_m_UPER
int Encode_UPER_Base_samples_Wrench_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrench_m *pSrc);
#endif

#ifdef __NEED_Base_samples_Wrench_m_ACN
int Encode_ACN_Base_samples_Wrench_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Wrench_m *pSrc);
#endif

#ifdef __NEED_Base_samples_Wrench_m_NATIVE
int Encode_NATIVE_Base_samples_Wrench_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrench_m *pSrc);
#endif

#ifdef __NEED_Base_samples_Wrench_m_UPER
int Decode_UPER_Base_samples_Wrench_m(asn1SccBase_samples_Wrench_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Wrench_m_ACN
int Decode_ACN_Base_samples_Wrench_m(asn1SccBase_samples_Wrench_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Wrench_m_NATIVE
int Decode_NATIVE_Base_samples_Wrench_m(asn1SccBase_samples_Wrench_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTransformVector_m_UPER
int Encode_UPER_Base_JointTransformVector_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransformVector_m *pSrc);
#endif

#ifdef __NEED_Base_JointTransformVector_m_ACN
int Encode_ACN_Base_JointTransformVector_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_JointTransformVector_m *pSrc);
#endif

#ifdef __NEED_Base_JointTransformVector_m_NATIVE
int Encode_NATIVE_Base_JointTransformVector_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_JointTransformVector_m *pSrc);
#endif

#ifdef __NEED_Base_JointTransformVector_m_UPER
int Decode_UPER_Base_JointTransformVector_m(asn1SccBase_JointTransformVector_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTransformVector_m_ACN
int Decode_ACN_Base_JointTransformVector_m(asn1SccBase_JointTransformVector_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_JointTransformVector_m_NATIVE
int Decode_NATIVE_Base_JointTransformVector_m(asn1SccBase_JointTransformVector_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_base_JointTransform_m_UPER
int Encode_UPER_Base_NamedVector_base_JointTransform_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_base_JointTransform_m *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_base_JointTransform_m_ACN
int Encode_ACN_Base_NamedVector_base_JointTransform_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_NamedVector_base_JointTransform_m *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_base_JointTransform_m_NATIVE
int Encode_NATIVE_Base_NamedVector_base_JointTransform_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_base_JointTransform_m *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_base_JointTransform_m_UPER
int Decode_UPER_Base_NamedVector_base_JointTransform_m(asn1SccBase_NamedVector_base_JointTransform_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_base_JointTransform_m_ACN
int Decode_ACN_Base_NamedVector_base_JointTransform_m(asn1SccBase_NamedVector_base_JointTransform_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_base_JointTransform_m_NATIVE
int Decode_NATIVE_Base_NamedVector_base_JointTransform_m(asn1SccBase_NamedVector_base_JointTransform_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_base_Wrench_m_UPER
int Encode_UPER_Base_NamedVector_base_Wrench_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_base_Wrench_m *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_base_Wrench_m_ACN
int Encode_ACN_Base_NamedVector_base_Wrench_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_NamedVector_base_Wrench_m *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_base_Wrench_m_NATIVE
int Encode_NATIVE_Base_NamedVector_base_Wrench_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_NamedVector_base_Wrench_m *pSrc);
#endif

#ifdef __NEED_Base_NamedVector_base_Wrench_m_UPER
int Decode_UPER_Base_NamedVector_base_Wrench_m(asn1SccBase_NamedVector_base_Wrench_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_base_Wrench_m_ACN
int Decode_ACN_Base_NamedVector_base_Wrench_m(asn1SccBase_NamedVector_base_Wrench_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_NamedVector_base_Wrench_m_NATIVE
int Decode_NATIVE_Base_NamedVector_base_Wrench_m(asn1SccBase_NamedVector_base_Wrench_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Pointcloud_m_UPER
int Encode_UPER_Base_samples_Pointcloud_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Pointcloud_m *pSrc);
#endif

#ifdef __NEED_Base_samples_Pointcloud_m_ACN
int Encode_ACN_Base_samples_Pointcloud_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Pointcloud_m *pSrc);
#endif

#ifdef __NEED_Base_samples_Pointcloud_m_NATIVE
int Encode_NATIVE_Base_samples_Pointcloud_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Pointcloud_m *pSrc);
#endif

#ifdef __NEED_Base_samples_Pointcloud_m_UPER
int Decode_UPER_Base_samples_Pointcloud_m(asn1SccBase_samples_Pointcloud_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Pointcloud_m_ACN
int Decode_ACN_Base_samples_Pointcloud_m(asn1SccBase_samples_Pointcloud_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Pointcloud_m_NATIVE
int Decode_NATIVE_Base_samples_Pointcloud_m(asn1SccBase_samples_Pointcloud_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Wrenches_m_UPER
int Encode_UPER_Base_samples_Wrenches_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrenches_m *pSrc);
#endif

#ifdef __NEED_Base_samples_Wrenches_m_ACN
int Encode_ACN_Base_samples_Wrenches_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_samples_Wrenches_m *pSrc);
#endif

#ifdef __NEED_Base_samples_Wrenches_m_NATIVE
int Encode_NATIVE_Base_samples_Wrenches_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_samples_Wrenches_m *pSrc);
#endif

#ifdef __NEED_Base_samples_Wrenches_m_UPER
int Decode_UPER_Base_samples_Wrenches_m(asn1SccBase_samples_Wrenches_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Wrenches_m_ACN
int Decode_ACN_Base_samples_Wrenches_m(asn1SccBase_samples_Wrenches_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_samples_Wrenches_m_NATIVE
int Decode_NATIVE_Base_samples_Wrenches_m(asn1SccBase_samples_Wrenches_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_geometry_Spline_UPER
int Encode_UPER_Wrappers_geometry_Spline(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_geometry_Spline *pSrc);
#endif

#ifdef __NEED_Wrappers_geometry_Spline_ACN
int Encode_ACN_Wrappers_geometry_Spline(void *pBuffer, size_t iMaxBufferSize, asn1SccWrappers_geometry_Spline *pSrc);
#endif

#ifdef __NEED_Wrappers_geometry_Spline_NATIVE
int Encode_NATIVE_Wrappers_geometry_Spline(void *pBuffer, size_t iMaxBufferSize, const asn1SccWrappers_geometry_Spline *pSrc);
#endif

#ifdef __NEED_Wrappers_geometry_Spline_UPER
int Decode_UPER_Wrappers_geometry_Spline(asn1SccWrappers_geometry_Spline *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_geometry_Spline_ACN
int Decode_ACN_Wrappers_geometry_Spline(asn1SccWrappers_geometry_Spline *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Wrappers_geometry_Spline_NATIVE
int Decode_NATIVE_Wrappers_geometry_Spline(asn1SccWrappers_geometry_Spline *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Trajectory_m_UPER
int Encode_UPER_Base_Trajectory_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Trajectory_m *pSrc);
#endif

#ifdef __NEED_Base_Trajectory_m_ACN
int Encode_ACN_Base_Trajectory_m(void *pBuffer, size_t iMaxBufferSize, asn1SccBase_Trajectory_m *pSrc);
#endif

#ifdef __NEED_Base_Trajectory_m_NATIVE
int Encode_NATIVE_Base_Trajectory_m(void *pBuffer, size_t iMaxBufferSize, const asn1SccBase_Trajectory_m *pSrc);
#endif

#ifdef __NEED_Base_Trajectory_m_UPER
int Decode_UPER_Base_Trajectory_m(asn1SccBase_Trajectory_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Trajectory_m_ACN
int Decode_ACN_Base_Trajectory_m(asn1SccBase_Trajectory_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Base_Trajectory_m_NATIVE
int Decode_NATIVE_Base_Trajectory_m(asn1SccBase_Trajectory_m *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Double_UPER
int Encode_UPER_T_Double(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Double *pSrc);
#endif

#ifdef __NEED_T_Double_ACN
int Encode_ACN_T_Double(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Double *pSrc);
#endif

#ifdef __NEED_T_Double_NATIVE
int Encode_NATIVE_T_Double(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Double *pSrc);
#endif

#ifdef __NEED_T_Double_UPER
int Decode_UPER_T_Double(asn1SccT_Double *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Double_ACN
int Decode_ACN_T_Double(asn1SccT_Double *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Double_NATIVE
int Decode_NATIVE_T_Double(asn1SccT_Double *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Float_UPER
int Encode_UPER_T_Float(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Float *pSrc);
#endif

#ifdef __NEED_T_Float_ACN
int Encode_ACN_T_Float(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Float *pSrc);
#endif

#ifdef __NEED_T_Float_NATIVE
int Encode_NATIVE_T_Float(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Float *pSrc);
#endif

#ifdef __NEED_T_Float_UPER
int Decode_UPER_T_Float(asn1SccT_Float *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Float_ACN
int Decode_ACN_T_Float(asn1SccT_Float *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Float_NATIVE
int Decode_NATIVE_T_Float(asn1SccT_Float *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int16_UPER
int Encode_UPER_T_Int16(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int16 *pSrc);
#endif

#ifdef __NEED_T_Int16_ACN
int Encode_ACN_T_Int16(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int16 *pSrc);
#endif

#ifdef __NEED_T_Int16_NATIVE
int Encode_NATIVE_T_Int16(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int16 *pSrc);
#endif

#ifdef __NEED_T_Int16_UPER
int Decode_UPER_T_Int16(asn1SccT_Int16 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int16_ACN
int Decode_ACN_T_Int16(asn1SccT_Int16 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int16_NATIVE
int Decode_NATIVE_T_Int16(asn1SccT_Int16 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt16_UPER
int Encode_UPER_T_UInt16(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt16 *pSrc);
#endif

#ifdef __NEED_T_UInt16_ACN
int Encode_ACN_T_UInt16(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt16 *pSrc);
#endif

#ifdef __NEED_T_UInt16_NATIVE
int Encode_NATIVE_T_UInt16(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt16 *pSrc);
#endif

#ifdef __NEED_T_UInt16_UPER
int Decode_UPER_T_UInt16(asn1SccT_UInt16 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt16_ACN
int Decode_ACN_T_UInt16(asn1SccT_UInt16 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt16_NATIVE
int Decode_NATIVE_T_UInt16(asn1SccT_UInt16 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt64_UPER
int Encode_UPER_T_UInt64(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt64 *pSrc);
#endif

#ifdef __NEED_T_UInt64_ACN
int Encode_ACN_T_UInt64(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt64 *pSrc);
#endif

#ifdef __NEED_T_UInt64_NATIVE
int Encode_NATIVE_T_UInt64(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt64 *pSrc);
#endif

#ifdef __NEED_T_UInt64_UPER
int Decode_UPER_T_UInt64(asn1SccT_UInt64 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt64_ACN
int Decode_ACN_T_UInt64(asn1SccT_UInt64 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt64_NATIVE
int Decode_NATIVE_T_UInt64(asn1SccT_UInt64 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int64_UPER
int Encode_UPER_T_Int64(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int64 *pSrc);
#endif

#ifdef __NEED_T_Int64_ACN
int Encode_ACN_T_Int64(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int64 *pSrc);
#endif

#ifdef __NEED_T_Int64_NATIVE
int Encode_NATIVE_T_Int64(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int64 *pSrc);
#endif

#ifdef __NEED_T_Int64_UPER
int Decode_UPER_T_Int64(asn1SccT_Int64 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int64_ACN
int Decode_ACN_T_Int64(asn1SccT_Int64 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int64_NATIVE
int Decode_NATIVE_T_Int64(asn1SccT_Int64 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_String_UPER
int Encode_UPER_T_String(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_String *pSrc);
#endif

#ifdef __NEED_T_String_ACN
int Encode_ACN_T_String(void *pBuffer, size_t iMaxBufferSize, asn1SccT_String *pSrc);
#endif

#ifdef __NEED_T_String_NATIVE
int Encode_NATIVE_T_String(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_String *pSrc);
#endif

#ifdef __NEED_T_String_UPER
int Decode_UPER_T_String(asn1SccT_String *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_String_ACN
int Decode_ACN_T_String(asn1SccT_String *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_String_NATIVE
int Decode_NATIVE_T_String(asn1SccT_String *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Time_UPER
int Encode_UPER_T_Time(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Time *pSrc);
#endif

#ifdef __NEED_T_Time_ACN
int Encode_ACN_T_Time(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Time *pSrc);
#endif

#ifdef __NEED_T_Time_NATIVE
int Encode_NATIVE_T_Time(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Time *pSrc);
#endif

#ifdef __NEED_T_Time_UPER
int Decode_UPER_T_Time(asn1SccT_Time *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Time_ACN
int Decode_ACN_T_Time(asn1SccT_Time *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Time_NATIVE
int Decode_NATIVE_T_Time(asn1SccT_Time *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_DummyBase_T_UPER
int Encode_UPER_DummyBase_T(void *pBuffer, size_t iMaxBufferSize, const asn1SccDummyBase_T *pSrc);
#endif

#ifdef __NEED_DummyBase_T_ACN
int Encode_ACN_DummyBase_T(void *pBuffer, size_t iMaxBufferSize, asn1SccDummyBase_T *pSrc);
#endif

#ifdef __NEED_DummyBase_T_NATIVE
int Encode_NATIVE_DummyBase_T(void *pBuffer, size_t iMaxBufferSize, const asn1SccDummyBase_T *pSrc);
#endif

#ifdef __NEED_DummyBase_T_UPER
int Decode_UPER_DummyBase_T(asn1SccDummyBase_T *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_DummyBase_T_ACN
int Decode_ACN_DummyBase_T(asn1SccDummyBase_T *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_DummyBase_T_NATIVE
int Decode_NATIVE_DummyBase_T(asn1SccDummyBase_T *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int32_UPER
int Encode_UPER_T_Int32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int32 *pSrc);
#endif

#ifdef __NEED_T_Int32_ACN
int Encode_ACN_T_Int32(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int32 *pSrc);
#endif

#ifdef __NEED_T_Int32_NATIVE
int Encode_NATIVE_T_Int32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int32 *pSrc);
#endif

#ifdef __NEED_T_Int32_UPER
int Decode_UPER_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int32_ACN
int Decode_ACN_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int32_NATIVE
int Decode_NATIVE_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt32_UPER
int Encode_UPER_T_UInt32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt32 *pSrc);
#endif

#ifdef __NEED_T_UInt32_ACN
int Encode_ACN_T_UInt32(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt32 *pSrc);
#endif

#ifdef __NEED_T_UInt32_NATIVE
int Encode_NATIVE_T_UInt32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt32 *pSrc);
#endif

#ifdef __NEED_T_UInt32_UPER
int Decode_UPER_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt32_ACN
int Decode_ACN_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt32_NATIVE
int Decode_NATIVE_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int8_UPER
int Encode_UPER_T_Int8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int8 *pSrc);
#endif

#ifdef __NEED_T_Int8_ACN
int Encode_ACN_T_Int8(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int8 *pSrc);
#endif

#ifdef __NEED_T_Int8_NATIVE
int Encode_NATIVE_T_Int8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int8 *pSrc);
#endif

#ifdef __NEED_T_Int8_UPER
int Decode_UPER_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int8_ACN
int Decode_ACN_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int8_NATIVE
int Decode_NATIVE_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt8_UPER
int Encode_UPER_T_UInt8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt8 *pSrc);
#endif

#ifdef __NEED_T_UInt8_ACN
int Encode_ACN_T_UInt8(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt8 *pSrc);
#endif

#ifdef __NEED_T_UInt8_NATIVE
int Encode_NATIVE_T_UInt8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt8 *pSrc);
#endif

#ifdef __NEED_T_UInt8_UPER
int Decode_UPER_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt8_ACN
int Decode_ACN_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt8_NATIVE
int Decode_NATIVE_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Boolean_UPER
int Encode_UPER_T_Boolean(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Boolean *pSrc);
#endif

#ifdef __NEED_T_Boolean_ACN
int Encode_ACN_T_Boolean(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Boolean *pSrc);
#endif

#ifdef __NEED_T_Boolean_NATIVE
int Encode_NATIVE_T_Boolean(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Boolean *pSrc);
#endif

#ifdef __NEED_T_Boolean_UPER
int Decode_UPER_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Boolean_ACN
int Decode_ACN_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Boolean_NATIVE
int Decode_NATIVE_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize);
#endif


#endif
