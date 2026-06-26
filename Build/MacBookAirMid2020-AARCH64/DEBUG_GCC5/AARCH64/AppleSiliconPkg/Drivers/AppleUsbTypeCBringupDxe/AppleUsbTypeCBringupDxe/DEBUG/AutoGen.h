/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_a7a8b3f7_b8bb_42ff_a5d1_07ce43734461
#define _AUTOGENH_a7a8b3f7_b8bb_42ff_a5d1_07ce43734461

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xa7a8b3f7, 0xb8bb, 0x42ff, {0xa5, 0xd1, 0x07, 0xce, 0x43, 0x73, 0x44, 0x61}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0x3B5FA20094592103ULL

// Guids
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
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
extern EFI_GUID gEdkiiNonDiscoverableAhciDeviceGuid;
extern EFI_GUID gEdkiiNonDiscoverableAmbaDeviceGuid;
extern EFI_GUID gEdkiiNonDiscoverableEhciDeviceGuid;
extern EFI_GUID gEdkiiNonDiscoverableNvmeDeviceGuid;
extern EFI_GUID gEdkiiNonDiscoverableOhciDeviceGuid;
extern EFI_GUID gEdkiiNonDiscoverableSdhciDeviceGuid;
extern EFI_GUID gEdkiiNonDiscoverableUfsDeviceGuid;
extern EFI_GUID gEdkiiNonDiscoverableUhciDeviceGuid;
extern EFI_GUID gEdkiiNonDiscoverableXhciDeviceGuid;
extern EFI_GUID gEfiFileInfoGuid;

// Protocols
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
extern EFI_GUID gEdkiiNonDiscoverableDeviceProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdAppleSocIdentifier  0U
#define _PCD_SIZE_PcdAppleSocIdentifier 4
#define _PCD_GET_MODE_SIZE_PcdAppleSocIdentifier  _PCD_SIZE_PcdAppleSocIdentifier 
#define _PCD_VALUE_PcdAppleSocIdentifier  0x8103U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAppleSocIdentifier;
#define _PCD_GET_MODE_32_PcdAppleSocIdentifier  _gPcd_FixedAtBuild_PcdAppleSocIdentifier
//#define _PCD_SET_MODE_32_PcdAppleSocIdentifier  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAppleNumDwc3Controllers  0U
#define _PCD_SIZE_PcdAppleNumDwc3Controllers 4
#define _PCD_GET_MODE_SIZE_PcdAppleNumDwc3Controllers  _PCD_SIZE_PcdAppleNumDwc3Controllers 
#define _PCD_VALUE_PcdAppleNumDwc3Controllers  1U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAppleNumDwc3Controllers;
#define _PCD_GET_MODE_32_PcdAppleNumDwc3Controllers  _gPcd_FixedAtBuild_PcdAppleNumDwc3Controllers
//#define _PCD_SET_MODE_32_PcdAppleNumDwc3Controllers  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
AppleUsbTypeCBringupDxeInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
