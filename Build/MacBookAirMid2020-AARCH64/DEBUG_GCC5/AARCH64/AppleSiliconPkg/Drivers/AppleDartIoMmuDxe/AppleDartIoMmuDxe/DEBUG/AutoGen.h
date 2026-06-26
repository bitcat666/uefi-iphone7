/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_f7b773c7_660a_4da6_b641_75e9ee06bd41
#define _AUTOGENH_f7b773c7_660a_4da6_b641_75e9ee06bd41

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xf7b773c7, 0x660a, 0x4da6, {0xb6, 0x41, 0x75, 0xe9, 0xee, 0x06, 0xbd, 0x41}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0x53FAD4F53D178C16ULL

// Guids
extern EFI_GUID gAppleSiliconPkgTokenSpaceGuid;
extern EFI_GUID gEmbeddedTokenSpaceGuid;
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
extern EFI_GUID gEfiFileInfoGuid;

// Protocols
extern EFI_GUID gEdkiiIoMmuProtocolGuid;
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
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdAppleNumDwc3Controllers  0U
#define _PCD_SIZE_PcdAppleNumDwc3Controllers 4
#define _PCD_GET_MODE_SIZE_PcdAppleNumDwc3Controllers  _PCD_SIZE_PcdAppleNumDwc3Controllers 
#define _PCD_VALUE_PcdAppleNumDwc3Controllers  1U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAppleNumDwc3Controllers;
#define _PCD_GET_MODE_32_PcdAppleNumDwc3Controllers  _gPcd_FixedAtBuild_PcdAppleNumDwc3Controllers
//#define _PCD_SET_MODE_32_PcdAppleNumDwc3Controllers  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAppleSocIdentifier  0U
#define _PCD_SIZE_PcdAppleSocIdentifier 4
#define _PCD_GET_MODE_SIZE_PcdAppleSocIdentifier  _PCD_SIZE_PcdAppleSocIdentifier 
#define _PCD_VALUE_PcdAppleSocIdentifier  0x8103U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAppleSocIdentifier;
#define _PCD_GET_MODE_32_PcdAppleSocIdentifier  _gPcd_FixedAtBuild_PcdAppleSocIdentifier
//#define _PCD_SET_MODE_32_PcdAppleSocIdentifier  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDmaDeviceOffset  0U
#define _PCD_SIZE_PcdDmaDeviceOffset 8
#define _PCD_GET_MODE_SIZE_PcdDmaDeviceOffset  _PCD_SIZE_PcdDmaDeviceOffset 
#define _PCD_VALUE_PcdDmaDeviceOffset  0xFFFFFFFB00000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdDmaDeviceOffset;
#define _PCD_GET_MODE_64_PcdDmaDeviceOffset  _gPcd_FixedAtBuild_PcdDmaDeviceOffset
//#define _PCD_SET_MODE_64_PcdDmaDeviceOffset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
AppleDartIoMmuDxeInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
