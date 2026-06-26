/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_2a5f223b_9058_49cb_9eb4_ae1a0a876c12
#define _AUTOGENH_2a5f223b_9058_49cb_9eb4_ae1a0a876c12

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0xDD932450BD3D0D22ULL

// Guids
extern EFI_GUID gDfciSettingsGuid;
extern EFI_GUID gDfciPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gDfciSettingsProviderSupportProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdDfciAssetTagChars  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdDfciAssetTagChars[];
#define _PCD_GET_MODE_PTR_PcdDfciAssetTagChars  _gPcd_FixedAtBuild_PcdDfciAssetTagChars
//#define _PCD_SET_MODE_PTR_PcdDfciAssetTagChars  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDfciAssetTagChars _gPcd_FixedAtBuild_PcdDfciAssetTagChars
#define _PCD_SIZE_PcdDfciAssetTagChars 65
#define _PCD_GET_MODE_SIZE_PcdDfciAssetTagChars _PCD_SIZE_PcdDfciAssetTagChars
#define _PCD_TOKEN_PcdDfciAssetTagLen  0U
extern const UINT16 _gPcd_FixedAtBuild_PcdDfciAssetTagLen;
#define _PCD_GET_MODE_16_PcdDfciAssetTagLen  _gPcd_FixedAtBuild_PcdDfciAssetTagLen
//#define _PCD_SET_MODE_16_PcdDfciAssetTagLen  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDfciAssetTagLen 36
#define _PCD_SIZE_PcdDfciAssetTagLen 2
#define _PCD_GET_MODE_SIZE_PcdDfciAssetTagLen _PCD_SIZE_PcdDfciAssetTagLen
#define _PCD_TOKEN_PcdSettingsManagerInstallProvider  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdSettingsManagerInstallProvider;
#define _PCD_GET_MODE_BOOL_PcdSettingsManagerInstallProvider  _gPcd_FixedAtBuild_PcdSettingsManagerInstallProvider
//#define _PCD_SET_MODE_BOOL_PcdSettingsManagerInstallProvider  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

EFI_STATUS
EFIAPI
DfciAssetTagSettingConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
