/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_50670071_478f_4be7_ad13_8754f379c62f
#define _AUTOGENH_50670071_478f_4be7_ad13_8754f379c62f

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x668993BAF4BD5128ULL

// Guids
extern EFI_GUID gPcBdsPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gDfciSettingAccessProtocolGuid;
extern EFI_GUID gMsButtonServicesProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdBdsBootPolicy  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdBdsBootPolicy;
#define _PCD_GET_MODE_BOOL_PcdBdsBootPolicy  _gPcd_FixedAtBuild_PcdBdsBootPolicy
//#define _PCD_SET_MODE_BOOL_PcdBdsBootPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdBdsBootPolicy 0
#define _PCD_SIZE_PcdBdsBootPolicy 1
#define _PCD_GET_MODE_SIZE_PcdBdsBootPolicy _PCD_SIZE_PcdBdsBootPolicy

EFI_STATUS
EFIAPI
MsBootPolicyLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
