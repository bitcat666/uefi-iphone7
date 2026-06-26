/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_287318BB_52BD_427A_929F_C4B6A0AD3E7E
#define _AUTOGENH_287318BB_52BD_427A_929F_C4B6A0AD3E7E

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x3668CB3682A68EA1ULL

// Guids
extern GUID gOemPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdUefiVersionNumber  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdUefiVersionNumber;
#define _PCD_GET_MODE_32_PcdUefiVersionNumber  _gPcd_FixedAtBuild_PcdUefiVersionNumber
//#define _PCD_SET_MODE_32_PcdUefiVersionNumber  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUefiVersionNumber 00000000
#define _PCD_SIZE_PcdUefiVersionNumber 4
#define _PCD_GET_MODE_SIZE_PcdUefiVersionNumber _PCD_SIZE_PcdUefiVersionNumber
#define _PCD_TOKEN_PcdUefiBuildDate  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdUefiBuildDate;
#define _PCD_GET_MODE_32_PcdUefiBuildDate  _gPcd_FixedAtBuild_PcdUefiBuildDate
//#define _PCD_SET_MODE_32_PcdUefiBuildDate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUefiBuildDate 00000000
#define _PCD_SIZE_PcdUefiBuildDate 4
#define _PCD_GET_MODE_SIZE_PcdUefiBuildDate _PCD_SIZE_PcdUefiBuildDate


#ifdef __cplusplus
}
#endif

#endif
