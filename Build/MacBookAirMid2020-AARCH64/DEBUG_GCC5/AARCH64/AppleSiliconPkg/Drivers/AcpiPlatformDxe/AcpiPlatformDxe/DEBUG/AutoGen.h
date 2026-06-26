/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_cb933912_df8f_4305_b1f9_7b44fa11395c
#define _AUTOGENH_cb933912_df8f_4305_b1f9_7b44fa11395c

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xcb933912, 0xdf8f, 0x4305, {0xb1, 0xf9, 0x7b, 0x44, 0xfa, 0x11, 0x39, 0x5c}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0xAEE366C8F93238AEULL

// Guids
extern EFI_GUID gAppleSiliconPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;

// Protocols
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdDeviceAcpiTableStorageFile  0U
#define _PCD_VALUE_PcdDeviceAcpiTableStorageFile  (VOID *)_gPcd_FixedAtBuild_PcdDeviceAcpiTableStorageFile
extern const UINT8 _gPcd_FixedAtBuild_PcdDeviceAcpiTableStorageFile[16];
#define _PCD_GET_MODE_PTR_PcdDeviceAcpiTableStorageFile  (VOID *)_gPcd_FixedAtBuild_PcdDeviceAcpiTableStorageFile
#define _PCD_SIZE_PcdDeviceAcpiTableStorageFile 16
#define _PCD_GET_MODE_SIZE_PcdDeviceAcpiTableStorageFile  _PCD_SIZE_PcdDeviceAcpiTableStorageFile 
//#define _PCD_SET_MODE_PTR_PcdDeviceAcpiTableStorageFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDeviceFamilyAcpiTableStorageFile  0U
#define _PCD_VALUE_PcdDeviceFamilyAcpiTableStorageFile  (VOID *)_gPcd_FixedAtBuild_PcdDeviceFamilyAcpiTableStorageFile
extern const UINT8 _gPcd_FixedAtBuild_PcdDeviceFamilyAcpiTableStorageFile[16];
#define _PCD_GET_MODE_PTR_PcdDeviceFamilyAcpiTableStorageFile  (VOID *)_gPcd_FixedAtBuild_PcdDeviceFamilyAcpiTableStorageFile
#define _PCD_SIZE_PcdDeviceFamilyAcpiTableStorageFile 16
#define _PCD_GET_MODE_SIZE_PcdDeviceFamilyAcpiTableStorageFile  _PCD_SIZE_PcdDeviceFamilyAcpiTableStorageFile 
//#define _PCD_SET_MODE_PTR_PcdDeviceFamilyAcpiTableStorageFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSocAcpiTableStorageFile  0U
#define _PCD_VALUE_PcdSocAcpiTableStorageFile  (VOID *)_gPcd_FixedAtBuild_PcdSocAcpiTableStorageFile
extern const UINT8 _gPcd_FixedAtBuild_PcdSocAcpiTableStorageFile[16];
#define _PCD_GET_MODE_PTR_PcdSocAcpiTableStorageFile  (VOID *)_gPcd_FixedAtBuild_PcdSocAcpiTableStorageFile
#define _PCD_SIZE_PcdSocAcpiTableStorageFile 16
#define _PCD_GET_MODE_SIZE_PcdSocAcpiTableStorageFile  _PCD_SIZE_PcdSocAcpiTableStorageFile 
//#define _PCD_SET_MODE_PTR_PcdSocAcpiTableStorageFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGenericAcpiTableStorageFile  0U
#define _PCD_VALUE_PcdGenericAcpiTableStorageFile  (VOID *)_gPcd_FixedAtBuild_PcdGenericAcpiTableStorageFile
extern const UINT8 _gPcd_FixedAtBuild_PcdGenericAcpiTableStorageFile[16];
#define _PCD_GET_MODE_PTR_PcdGenericAcpiTableStorageFile  (VOID *)_gPcd_FixedAtBuild_PcdGenericAcpiTableStorageFile
#define _PCD_SIZE_PcdGenericAcpiTableStorageFile 16
#define _PCD_GET_MODE_SIZE_PcdGenericAcpiTableStorageFile  _PCD_SIZE_PcdGenericAcpiTableStorageFile 
//#define _PCD_SET_MODE_PTR_PcdGenericAcpiTableStorageFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
AcpiPlatformEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
