/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_8E747032_7D55_4D95_9A84_77F83370B3A4
#define _AUTOGENH_8E747032_7D55_4D95_9A84_77F83370B3A4

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x8E747032, 0x7D55, 0x4D95, {0x9A, 0x84, 0x77, 0xF8, 0x33, 0x70, 0xB3, 0xA4}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0x1A4CB98EC5988A8ULL

// Guids
extern EFI_GUID gMsTouchPanelGuid;
extern EFI_GUID gMsGraphicsPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gAppleSiliconPkgTokenSpaceGuid;
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
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;

// Protocols
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiAbsolutePointerProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiSimpleTextInputExProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gMsOSKProtocolGuid;
extern EFI_GUID gMsSREProtocolGuid;
extern EFI_GUID gMsSWMProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gMsUiThemeProtocolGuid;
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPowerOffDelay  0U
#define _PCD_SIZE_PcdPowerOffDelay 4
#define _PCD_GET_MODE_SIZE_PcdPowerOffDelay  _PCD_SIZE_PcdPowerOffDelay 
#define _PCD_VALUE_PcdPowerOffDelay  300U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPowerOffDelay;
#define _PCD_GET_MODE_32_PcdPowerOffDelay  _gPcd_FixedAtBuild_PcdPowerOffDelay
//#define _PCD_SET_MODE_32_PcdPowerOffDelay  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPowerOffHold  0U
#define _PCD_SIZE_PcdPowerOffHold 2
#define _PCD_GET_MODE_SIZE_PcdPowerOffHold  _PCD_SIZE_PcdPowerOffHold 
#define _PCD_VALUE_PcdPowerOffHold  30U
extern const  UINT16  _gPcd_FixedAtBuild_PcdPowerOffHold;
#define _PCD_GET_MODE_16_PcdPowerOffHold  _gPcd_FixedAtBuild_PcdPowerOffHold
//#define _PCD_SET_MODE_16_PcdPowerOffHold  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSmallAssetMaxScreenWidth  0U
#define _PCD_SIZE_PcdSmallAssetMaxScreenWidth 4
#define _PCD_GET_MODE_SIZE_PcdSmallAssetMaxScreenWidth  _PCD_SIZE_PcdSmallAssetMaxScreenWidth 
#define _PCD_VALUE_PcdSmallAssetMaxScreenWidth  1280U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSmallAssetMaxScreenWidth;
#define _PCD_GET_MODE_32_PcdSmallAssetMaxScreenWidth  _gPcd_FixedAtBuild_PcdSmallAssetMaxScreenWidth
//#define _PCD_SET_MODE_32_PcdSmallAssetMaxScreenWidth  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
DriverInit (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



EFI_STATUS
EFIAPI
DriverUnload (
  IN EFI_HANDLE        ImageHandle
  );

#include "SimpleWindowManagerDxeStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
