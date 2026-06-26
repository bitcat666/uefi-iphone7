/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_4042708A_0F2D_4823_AC60_0D77B311188A
#define _AUTOGENH_4042708A_0F2D_4823_AC60_0D77B311188A

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x75D06C399DC5E1EDULL

// Guids
extern EFI_GUID gMsGraphicsPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gMsOSKProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdMsGopOverrideProtocolGuid  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdMsGopOverrideProtocolGuid[];
#define _PCD_GET_MODE_PTR_PcdMsGopOverrideProtocolGuid  (VOID *)_gPcd_FixedAtBuild_PcdMsGopOverrideProtocolGuid
//#define _PCD_SET_MODE_PTR_PcdMsGopOverrideProtocolGuid  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMsGopOverrideProtocolGuid (VOID *)_gPcd_FixedAtBuild_PcdMsGopOverrideProtocolGuid
#define _PCD_SIZE_PcdMsGopOverrideProtocolGuid 16
#define _PCD_GET_MODE_SIZE_PcdMsGopOverrideProtocolGuid _PCD_SIZE_PcdMsGopOverrideProtocolGuid


#ifdef __cplusplus
}
#endif

#endif
