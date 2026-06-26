/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9566ccef_839d_4ba5_8c61_f26206c3f136
#define _AUTOGENH_9566ccef_839d_4ba5_8c61_f26206c3f136

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x401CC6CA24116096ULL

// Guids
extern EFI_GUID gDfciSettingsGuid;
extern EFI_GUID gDfciPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gDfciSettingsProviderSupportProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdSettingsManagerInstallProvider  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdSettingsManagerInstallProvider;
#define _PCD_GET_MODE_BOOL_PcdSettingsManagerInstallProvider  _gPcd_FixedAtBuild_PcdSettingsManagerInstallProvider
//#define _PCD_SET_MODE_BOOL_PcdSettingsManagerInstallProvider  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

EFI_STATUS
EFIAPI
DfciSettingsConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
