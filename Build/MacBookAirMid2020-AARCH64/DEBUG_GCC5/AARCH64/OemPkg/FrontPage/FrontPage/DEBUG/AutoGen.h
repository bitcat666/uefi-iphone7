/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_4042708A_0F2D_4823_AC60_0D77B3111889
#define _AUTOGENH_4042708A_0F2D_4823_AC60_0D77B3111889

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x4042708A, 0x0F2D, 0x4823, {0xAC, 0x60, 0x0D, 0x77, 0xB3, 0x11, 0x18, 0x89}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0x8164FD1F0C50D5A4ULL

// Guids
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiImageSecurityDatabaseGuid;
extern EFI_GUID gEfiIfrTianoGuid;
extern EFI_GUID gEfiCertPkcs7Guid;
extern EFI_GUID gMsEventMasterFrameNotifyGroupGuid;
extern EFI_GUID gFrontPageResetGuid;
extern EFI_GUID gDfciMenuFormsetGuid;
extern EFI_GUID gHwhMenuFormsetGuid;
extern EFI_GUID gMuVarPolicyDxePhaseGuid;
extern EFI_GUID gOemPkgTokenSpaceGuid;
extern EFI_GUID gMsGraphicsPkgTokenSpaceGuid;
extern EFI_GUID gDfciPkgTokenSpaceGuid;
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
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEdkiiPerformanceMeasurementProtocolGuid;
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;
extern EFI_GUID gEfiSecureBootEnableDisableGuid;
extern EFI_GUID gEfiCustomModeEnableGuid;
extern EFI_GUID gEfiCertX509Guid;
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gEfiMemoryTypeMinimumAllocationGuid;
extern EFI_GUID gEdkiiStatusCodeDataTypeVariableGuid;
extern EFI_GUID gEfiDiskInfoAhciInterfaceGuid;
extern EFI_GUID gEfiDiskInfoIdeInterfaceGuid;
extern EFI_GUID gEfiDiskInfoScsiInterfaceGuid;
extern EFI_GUID gEfiDiskInfoSdMmcInterfaceGuid;
extern EFI_GUID gEfiDiskInfoUfsInterfaceGuid;
extern EFI_GUID gEfiEventPreReadyToBootGuid;
extern EFI_GUID gEfiEventPostReadyToBootGuid;
extern EFI_GUID gEfiRngAlgorithmSp80090Ctr256Guid;
extern EFI_GUID gEfiRngAlgorithmSp80090Hmac256Guid;
extern EFI_GUID gEfiRngAlgorithmSp80090Hash256Guid;
extern EFI_GUID gLogoDisplayedEventGroup;
extern EFI_GUID gOemBootNVVarGuid;
extern EFI_GUID gEfiHashAlgorithmSha256Guid;

// Protocols
extern EFI_GUID gEfiSmbiosProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gMsOSKProtocolGuid;
extern EFI_GUID gMsSWMProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiSmmVariableProtocolGuid;
extern EFI_GUID gEfiSmmCommunicationProtocolGuid;
extern EFI_GUID gDfciSettingAccessProtocolGuid;
extern EFI_GUID gMsFrontPageAuthTokenProtocolGuid;
extern EFI_GUID gDfciAuthenticationProtocolGuid;
extern EFI_GUID gEdkiiFormBrowserEx2ProtocolGuid;
extern EFI_GUID gEfiFirmwareManagementProtocolGuid;
extern EFI_GUID gEdkiiVariablePolicyProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;
extern EFI_GUID gMsUiThemeProtocolGuid;
extern EFI_GUID gEfiUnicodeCollation2ProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gEfiSimpleNetworkProtocolGuid;
extern EFI_GUID gEfiSimpleTextInProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiBootLogoProtocolGuid;
extern EFI_GUID gEfiSimpleTextInputExProtocolGuid;
extern EFI_GUID gEfiUsbIoProtocolGuid;
extern EFI_GUID gEfiNvmExpressPassThruProtocolGuid;
extern EFI_GUID gEfiDiskInfoProtocolGuid;
extern EFI_GUID gEfiDriverHealthProtocolGuid;
extern EFI_GUID gEfiRamDiskProtocolGuid;
extern EFI_GUID gEfiDeferredImageLoadProtocolGuid;
extern EFI_GUID gEdkiiPlatformBootManagerProtocolGuid;
extern EFI_GUID gMuPKCS5PasswordHashProtocolGuid;
extern EFI_GUID gEfiRngProtocolGuid;
extern EFI_GUID gEdkiiBootLogo2ProtocolGuid;
extern EFI_GUID gEfiRealTimeClockArchProtocolGuid;
extern EFI_GUID gEfiHash2ProtocolGuid;
extern EFI_GUID gEfiHash2ServiceBindingProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCD Token Space GUIDs used in this module

extern EFI_GUID gMsGraphicsPkgTokenSpaceGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdVolumeUpIndicatorFile  0U
#define _PCD_VALUE_PcdVolumeUpIndicatorFile  (VOID *)_gPcd_FixedAtBuild_PcdVolumeUpIndicatorFile
extern const UINT8 _gPcd_FixedAtBuild_PcdVolumeUpIndicatorFile[16];
#define _PCD_GET_MODE_PTR_PcdVolumeUpIndicatorFile  (VOID *)_gPcd_FixedAtBuild_PcdVolumeUpIndicatorFile
#define _PCD_SIZE_PcdVolumeUpIndicatorFile 16
#define _PCD_GET_MODE_SIZE_PcdVolumeUpIndicatorFile  _PCD_SIZE_PcdVolumeUpIndicatorFile 
//#define _PCD_SET_MODE_PTR_PcdVolumeUpIndicatorFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFirmwareSettingsIndicatorFile  0U
#define _PCD_VALUE_PcdFirmwareSettingsIndicatorFile  (VOID *)_gPcd_FixedAtBuild_PcdFirmwareSettingsIndicatorFile
extern const UINT8 _gPcd_FixedAtBuild_PcdFirmwareSettingsIndicatorFile[16];
#define _PCD_GET_MODE_PTR_PcdFirmwareSettingsIndicatorFile  (VOID *)_gPcd_FixedAtBuild_PcdFirmwareSettingsIndicatorFile
#define _PCD_SIZE_PcdFirmwareSettingsIndicatorFile 16
#define _PCD_GET_MODE_SIZE_PcdFirmwareSettingsIndicatorFile  _PCD_SIZE_PcdFirmwareSettingsIndicatorFile 
//#define _PCD_SET_MODE_PTR_PcdFirmwareSettingsIndicatorFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFrontPageLogoFile  0U
#define _PCD_VALUE_PcdFrontPageLogoFile  (VOID *)_gPcd_FixedAtBuild_PcdFrontPageLogoFile
extern const UINT8 _gPcd_FixedAtBuild_PcdFrontPageLogoFile[16];
#define _PCD_GET_MODE_PTR_PcdFrontPageLogoFile  (VOID *)_gPcd_FixedAtBuild_PcdFrontPageLogoFile
#define _PCD_SIZE_PcdFrontPageLogoFile 16
#define _PCD_GET_MODE_SIZE_PcdFrontPageLogoFile  _PCD_SIZE_PcdFrontPageLogoFile 
//#define _PCD_SET_MODE_PTR_PcdFrontPageLogoFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBootFailIndicatorFile  0U
#define _PCD_VALUE_PcdBootFailIndicatorFile  (VOID *)_gPcd_FixedAtBuild_PcdBootFailIndicatorFile
extern const UINT8 _gPcd_FixedAtBuild_PcdBootFailIndicatorFile[16];
#define _PCD_GET_MODE_PTR_PcdBootFailIndicatorFile  (VOID *)_gPcd_FixedAtBuild_PcdBootFailIndicatorFile
#define _PCD_SIZE_PcdBootFailIndicatorFile 16
#define _PCD_GET_MODE_SIZE_PcdBootFailIndicatorFile  _PCD_SIZE_PcdBootFailIndicatorFile 
//#define _PCD_SET_MODE_PTR_PcdBootFailIndicatorFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxPasswordAttempts  0U
#define _PCD_SIZE_PcdMaxPasswordAttempts 1
#define _PCD_GET_MODE_SIZE_PcdMaxPasswordAttempts  _PCD_SIZE_PcdMaxPasswordAttempts 
#define _PCD_VALUE_PcdMaxPasswordAttempts  0x3U
extern const  UINT8  _gPcd_FixedAtBuild_PcdMaxPasswordAttempts;
#define _PCD_GET_MODE_8_PcdMaxPasswordAttempts  _gPcd_FixedAtBuild_PcdMaxPasswordAttempts
//#define _PCD_SET_MODE_8_PcdMaxPasswordAttempts  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_gMsGraphicsPkgTokenSpaceGuid_PcdCurrentPointerState  1073741833U
#define _PCD_TOKEN_PcdCurrentPointerState  _PCD_TOKEN_gMsGraphicsPkgTokenSpaceGuid_PcdCurrentPointerState
#define _PCD_GET_MODE_64_PcdCurrentPointerState  LibPcdGetEx64(&gMsGraphicsPkgTokenSpaceGuid, _PCD_TOKEN_PcdCurrentPointerState)
#define _PCD_GET_MODE_SIZE_PcdCurrentPointerState LibPcdGetExSize(&gMsGraphicsPkgTokenSpaceGuid, _PCD_TOKEN_PcdCurrentPointerState)
#define _PCD_SET_MODE_64_PcdCurrentPointerState(Value)  LibPcdSetEx64(&gMsGraphicsPkgTokenSpaceGuid, _PCD_TOKEN_PcdCurrentPointerState, (Value))
#define _PCD_SET_MODE_64_S_PcdCurrentPointerState(Value)  LibPcdSetEx64S(&gMsGraphicsPkgTokenSpaceGuid, _PCD_TOKEN_PcdCurrentPointerState, (Value))

#define _PCD_TOKEN_PcdSetupUiReducedFunction  2U
#define _PCD_GET_MODE_BOOL_PcdSetupUiReducedFunction  LibPcdGetBool(_PCD_TOKEN_PcdSetupUiReducedFunction)
#define _PCD_GET_MODE_SIZE_PcdSetupUiReducedFunction  LibPcdGetSize(_PCD_TOKEN_PcdSetupUiReducedFunction)
#define _PCD_SET_MODE_BOOL_PcdSetupUiReducedFunction(Value)  LibPcdSetBool(_PCD_TOKEN_PcdSetupUiReducedFunction, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdSetupUiReducedFunction(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdSetupUiReducedFunction, (Value))

#define _PCD_TOKEN_PcdDfciEnabled  0U
#define _PCD_SIZE_PcdDfciEnabled 1
#define _PCD_GET_MODE_SIZE_PcdDfciEnabled  _PCD_SIZE_PcdDfciEnabled 
#define _PCD_VALUE_PcdDfciEnabled  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDfciEnabled;
#define _PCD_GET_MODE_BOOL_PcdDfciEnabled  _gPcd_FixedAtBuild_PcdDfciEnabled
//#define _PCD_SET_MODE_BOOL_PcdDfciEnabled  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define COMPAREGUID(Guid1, Guid2) (BOOLEAN)(*(CONST UINT64*)Guid1 == *(CONST UINT64*)Guid2 && *((CONST UINT64*)Guid1 + 1) == *((CONST UINT64*)Guid2 + 1))

#define __PCD_PcdCurrentPointerState_ADDR_CMP(GuidPtr)  (\
  (GuidPtr == &gMsGraphicsPkgTokenSpaceGuid) ? _PCD_TOKEN_gMsGraphicsPkgTokenSpaceGuid_PcdCurrentPointerState:0 \
  )

#define __PCD_PcdCurrentPointerState_VAL_CMP(GuidPtr)  (\
  (GuidPtr == NULL) ? 0:\
  COMPAREGUID (GuidPtr, &gMsGraphicsPkgTokenSpaceGuid) ? _PCD_TOKEN_gMsGraphicsPkgTokenSpaceGuid_PcdCurrentPointerState:0 \
  )
#define _PCD_TOKEN_EX_PcdCurrentPointerState(GuidPtr)   __PCD_PcdCurrentPointerState_ADDR_CMP(GuidPtr) ? __PCD_PcdCurrentPointerState_ADDR_CMP(GuidPtr) : __PCD_PcdCurrentPointerState_VAL_CMP(GuidPtr)  

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
UefiMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



#include "FrontPageStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
