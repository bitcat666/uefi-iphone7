/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_F918DACB_FBB8_4CB6_A61D_08E75AF0E7CD
#define _AUTOGENH_F918DACB_FBB8_4CB6_A61D_08E75AF0E7CD

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x1125DC2CA3836911ULL

// Guids
extern GUID gArmTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdMonitorConduitHvc  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdMonitorConduitHvc;
#define _PCD_GET_MODE_BOOL_PcdMonitorConduitHvc  _gPcd_FixedAtBuild_PcdMonitorConduitHvc
//#define _PCD_SET_MODE_BOOL_PcdMonitorConduitHvc  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMonitorConduitHvc 0
#define _PCD_SIZE_PcdMonitorConduitHvc 1
#define _PCD_GET_MODE_SIZE_PcdMonitorConduitHvc _PCD_SIZE_PcdMonitorConduitHvc


#ifdef __cplusplus
}
#endif

#endif
