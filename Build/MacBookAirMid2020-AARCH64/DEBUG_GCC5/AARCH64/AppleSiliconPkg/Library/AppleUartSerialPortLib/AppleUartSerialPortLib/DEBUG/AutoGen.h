/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_e27f53d5_a3a2_4db2_aaea_44045fc70f11
#define _AUTOGENH_e27f53d5_a3a2_4db2_aaea_44045fc70f11

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x655125F3D4B4CD57ULL

// Guids
extern GUID gAppleSiliconPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdAppleUartBase  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdAppleUartBase;
#define _PCD_GET_MODE_64_PcdAppleUartBase  _gPcd_FixedAtBuild_PcdAppleUartBase
//#define _PCD_SET_MODE_64_PcdAppleUartBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdAppleUartBase 0x235200000
#define _PCD_SIZE_PcdAppleUartBase 8
#define _PCD_GET_MODE_SIZE_PcdAppleUartBase _PCD_SIZE_PcdAppleUartBase


#ifdef __cplusplus
}
#endif

#endif
