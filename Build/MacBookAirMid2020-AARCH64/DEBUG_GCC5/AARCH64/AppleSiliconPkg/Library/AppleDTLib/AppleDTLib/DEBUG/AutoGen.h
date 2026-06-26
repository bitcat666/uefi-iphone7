/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_506b71a7_222c_47c4_a652_8c1576cfa03b
#define _AUTOGENH_506b71a7_222c_47c4_a652_8c1576cfa03b

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x23BD2188CF43F9B8ULL

// Guids
extern GUID gAppleSiliconPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdAdtPointer  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdAdtPointer;
#define _PCD_GET_MODE_64_PcdAdtPointer  _gPcd_FixedAtBuild_PcdAdtPointer
//#define _PCD_SET_MODE_64_PcdAdtPointer  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdAdtPointer 0x840004000
#define _PCD_SIZE_PcdAdtPointer 8
#define _PCD_GET_MODE_SIZE_PcdAdtPointer _PCD_SIZE_PcdAdtPointer
#define _PCD_TOKEN_PcdBootArgsPointer  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdBootArgsPointer;
#define _PCD_GET_MODE_64_PcdBootArgsPointer  _gPcd_FixedAtBuild_PcdBootArgsPointer
//#define _PCD_SET_MODE_64_PcdBootArgsPointer  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdBootArgsPointer 0x840000000
#define _PCD_SIZE_PcdBootArgsPointer 8
#define _PCD_GET_MODE_SIZE_PcdBootArgsPointer _PCD_SIZE_PcdBootArgsPointer


#ifdef __cplusplus
}
#endif

#endif
