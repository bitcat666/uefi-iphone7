/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_b29a9982_47b7_47e8_9233_cdce2124b993
#define _AUTOGENH_b29a9982_47b7_47e8_9233_cdce2124b993

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x3B5A5F912EA7D006ULL

// Guids
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
DfciPasswordProviderConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
DfciPasswordProviderDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
