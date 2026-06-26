/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_6D33944A_EC75_4855_A54D_809C75241F6C
#define _AUTOGENH_6D33944A_EC75_4855_A54D_809C75241F6C

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x6D33944A, 0xEC75, 0x4855, {0xA5, 0x4D, 0x80, 0x9C, 0x75, 0x24, 0x1F, 0x6C}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0xBD8C3C3D455F165CULL

// Guids
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gConnectConInEventGuid;
extern EFI_GUID gEdkiiStatusCodeDataTypeVariableGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
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
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;
extern EFI_GUID gEdkiiPerformanceMeasurementProtocolGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gOemPkgTokenSpaceGuid;
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gEfiMemoryTypeMinimumAllocationGuid;
extern EFI_GUID gEfiDiskInfoAhciInterfaceGuid;
extern EFI_GUID gEfiDiskInfoIdeInterfaceGuid;
extern EFI_GUID gEfiDiskInfoScsiInterfaceGuid;
extern EFI_GUID gEfiDiskInfoSdMmcInterfaceGuid;
extern EFI_GUID gEfiDiskInfoUfsInterfaceGuid;
extern EFI_GUID gEfiEventPreReadyToBootGuid;
extern EFI_GUID gEfiEventPostReadyToBootGuid;
extern EFI_GUID gDfciSettingsManagerVarNamespace;
extern EFI_GUID gMsWheaRSCDataTypeGuid;
extern EFI_GUID gLogoDisplayedEventGroup;
extern EFI_GUID gMsGraphicsPkgTokenSpaceGuid;
extern EFI_GUID gOemBootNVVarGuid;
extern EFI_GUID gMsBootManagerSettingsGuid;
extern EFI_GUID gDfciPkgTokenSpaceGuid;
extern EFI_GUID gPcBdsPkgTokenSpaceGuid;
extern EFI_GUID gMsBootPolicyFileGuid;
extern EFI_GUID gUefiShellFileGuid;
extern EFI_GUID gMsStartOfBdsNotifyGuid;
extern EFI_GUID gDfciStartOfBdsNotifyGuid;
extern EFI_GUID gMsBootMenuFormsetGuid;
extern EFI_GUID gEfiCapsuleVendorGuid;
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
extern EFI_GUID gEfiMemoryOverwriteControlDataGuid;
extern EFI_GUID gMuReadyToProcessCapsulesNotifyGuid;

// Protocols
extern EFI_GUID gEfiBdsArchProtocolGuid;
extern EFI_GUID gEfiSimpleTextInputExProtocolGuid;
extern EFI_GUID gEdkiiVariablePolicyProtocolGuid;
extern EFI_GUID gEfiDeferredImageLoadProtocolGuid;
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
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;
extern EFI_GUID gEfiUnicodeCollation2ProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gEfiSimpleNetworkProtocolGuid;
extern EFI_GUID gEfiSimpleTextInProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiBootLogoProtocolGuid;
extern EFI_GUID gEfiUsbIoProtocolGuid;
extern EFI_GUID gEfiNvmExpressPassThruProtocolGuid;
extern EFI_GUID gEfiDiskInfoProtocolGuid;
extern EFI_GUID gEfiDriverHealthProtocolGuid;
extern EFI_GUID gEfiRamDiskProtocolGuid;
extern EFI_GUID gEdkiiPlatformBootManagerProtocolGuid;
extern EFI_GUID gEfiAcpiSdtProtocolGuid;
extern EFI_GUID gEdkiiBootLogo2ProtocolGuid;
extern EFI_GUID gDfciSettingsProviderSupportProtocolGuid;
extern EFI_GUID gDfciSettingAccessProtocolGuid;
extern EFI_GUID gMsButtonServicesProtocolGuid;
extern EFI_GUID gMsNetworkDelayProtocolGuid;
extern EFI_GUID gMsOSKProtocolGuid;
extern EFI_GUID gMsSWMProtocolGuid;
extern EFI_GUID gTpmPpProtocolGuid;
extern EFI_GUID gEfiDxeSmmReadyToLockProtocolGuid;
extern EFI_GUID gEfiGenericMemTestProtocolGuid;
extern EFI_GUID gEfiAbsolutePointerProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdUefiVariableDefaultLangDeprecate  0U
#define _PCD_SIZE_PcdUefiVariableDefaultLangDeprecate 1
#define _PCD_GET_MODE_SIZE_PcdUefiVariableDefaultLangDeprecate  _PCD_SIZE_PcdUefiVariableDefaultLangDeprecate 
#define _PCD_VALUE_PcdUefiVariableDefaultLangDeprecate  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUefiVariableDefaultLangDeprecate;
#define _PCD_GET_MODE_BOOL_PcdUefiVariableDefaultLangDeprecate  _gPcd_FixedAtBuild_PcdUefiVariableDefaultLangDeprecate
//#define _PCD_SET_MODE_BOOL_PcdUefiVariableDefaultLangDeprecate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiVariableDefaultLangCodes  0U
#define _PCD_VALUE_PcdUefiVariableDefaultLangCodes  _gPcd_FixedAtBuild_PcdUefiVariableDefaultLangCodes
extern const UINT8 _gPcd_FixedAtBuild_PcdUefiVariableDefaultLangCodes[13];
#define _PCD_GET_MODE_PTR_PcdUefiVariableDefaultLangCodes  _gPcd_FixedAtBuild_PcdUefiVariableDefaultLangCodes
#define _PCD_SIZE_PcdUefiVariableDefaultLangCodes 13
#define _PCD_GET_MODE_SIZE_PcdUefiVariableDefaultLangCodes  _PCD_SIZE_PcdUefiVariableDefaultLangCodes 
//#define _PCD_SET_MODE_PTR_PcdUefiVariableDefaultLangCodes  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiVariableDefaultLang  0U
#define _PCD_VALUE_PcdUefiVariableDefaultLang  _gPcd_FixedAtBuild_PcdUefiVariableDefaultLang
extern const UINT8 _gPcd_FixedAtBuild_PcdUefiVariableDefaultLang[4];
#define _PCD_GET_MODE_PTR_PcdUefiVariableDefaultLang  _gPcd_FixedAtBuild_PcdUefiVariableDefaultLang
#define _PCD_SIZE_PcdUefiVariableDefaultLang 4
#define _PCD_GET_MODE_SIZE_PcdUefiVariableDefaultLang  _PCD_SIZE_PcdUefiVariableDefaultLang 
//#define _PCD_SET_MODE_PTR_PcdUefiVariableDefaultLang  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiVariableDefaultPlatformLangCodes  0U
#define _PCD_VALUE_PcdUefiVariableDefaultPlatformLangCodes  _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLangCodes
extern const UINT8 _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLangCodes[18];
#define _PCD_GET_MODE_PTR_PcdUefiVariableDefaultPlatformLangCodes  _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLangCodes
#define _PCD_SIZE_PcdUefiVariableDefaultPlatformLangCodes 18
#define _PCD_GET_MODE_SIZE_PcdUefiVariableDefaultPlatformLangCodes  _PCD_SIZE_PcdUefiVariableDefaultPlatformLangCodes 
//#define _PCD_SET_MODE_PTR_PcdUefiVariableDefaultPlatformLangCodes  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiVariableDefaultPlatformLang  0U
#define _PCD_VALUE_PcdUefiVariableDefaultPlatformLang  _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang
extern const UINT8 _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang[6];
#define _PCD_GET_MODE_PTR_PcdUefiVariableDefaultPlatformLang  _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang
#define _PCD_SIZE_PcdUefiVariableDefaultPlatformLang 6
#define _PCD_GET_MODE_SIZE_PcdUefiVariableDefaultPlatformLang  _PCD_SIZE_PcdUefiVariableDefaultPlatformLang 
//#define _PCD_SET_MODE_PTR_PcdUefiVariableDefaultPlatformLang  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdHardwareErrorRecordLevel  0U
#define _PCD_SIZE_PcdHardwareErrorRecordLevel 2
#define _PCD_GET_MODE_SIZE_PcdHardwareErrorRecordLevel  _PCD_SIZE_PcdHardwareErrorRecordLevel 
#define _PCD_VALUE_PcdHardwareErrorRecordLevel  0U
extern const  UINT16  _gPcd_FixedAtBuild_PcdHardwareErrorRecordLevel;
#define _PCD_GET_MODE_16_PcdHardwareErrorRecordLevel  _gPcd_FixedAtBuild_PcdHardwareErrorRecordLevel
//#define _PCD_SET_MODE_16_PcdHardwareErrorRecordLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPlatformBootTimeOut  0U
#define _PCD_SIZE_PcdPlatformBootTimeOut 2
#define _PCD_GET_MODE_SIZE_PcdPlatformBootTimeOut  _PCD_SIZE_PcdPlatformBootTimeOut 
#define _PCD_VALUE_PcdPlatformBootTimeOut  3U
extern const  UINT16  _gPcd_FixedAtBuild_PcdPlatformBootTimeOut;
#define _PCD_GET_MODE_16_PcdPlatformBootTimeOut  _gPcd_FixedAtBuild_PcdPlatformBootTimeOut
//#define _PCD_SET_MODE_16_PcdPlatformBootTimeOut  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFirmwareVendor  0U
#define _PCD_VALUE_PcdFirmwareVendor  _gPcd_FixedAtBuild_PcdFirmwareVendor
extern const UINT16 _gPcd_FixedAtBuild_PcdFirmwareVendor[19];
#define _PCD_GET_MODE_PTR_PcdFirmwareVendor  _gPcd_FixedAtBuild_PcdFirmwareVendor
#define _PCD_SIZE_PcdFirmwareVendor 38
#define _PCD_GET_MODE_SIZE_PcdFirmwareVendor  _PCD_SIZE_PcdFirmwareVendor 
//#define _PCD_SET_MODE_PTR_PcdFirmwareVendor  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFirmwareRevision  0U
#define _PCD_SIZE_PcdFirmwareRevision 4
#define _PCD_GET_MODE_SIZE_PcdFirmwareRevision  _PCD_SIZE_PcdFirmwareRevision 
#define _PCD_VALUE_PcdFirmwareRevision  0x00010000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFirmwareRevision;
#define _PCD_GET_MODE_32_PcdFirmwareRevision  _gPcd_FixedAtBuild_PcdFirmwareRevision
//#define _PCD_SET_MODE_32_PcdFirmwareRevision  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdConInConnectOnDemand  0U
#define _PCD_SIZE_PcdConInConnectOnDemand 1
#define _PCD_GET_MODE_SIZE_PcdConInConnectOnDemand  _PCD_SIZE_PcdConInConnectOnDemand 
#define _PCD_VALUE_PcdConInConnectOnDemand  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdConInConnectOnDemand;
#define _PCD_GET_MODE_BOOL_PcdConInConnectOnDemand  _gPcd_FixedAtBuild_PcdConInConnectOnDemand
//#define _PCD_SET_MODE_BOOL_PcdConInConnectOnDemand  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdErrorCodeSetVariable  0U
#define _PCD_SIZE_PcdErrorCodeSetVariable 4
#define _PCD_GET_MODE_SIZE_PcdErrorCodeSetVariable  _PCD_SIZE_PcdErrorCodeSetVariable 
#define _PCD_VALUE_PcdErrorCodeSetVariable  0x03058002U
extern const  UINT32  _gPcd_FixedAtBuild_PcdErrorCodeSetVariable;
#define _PCD_GET_MODE_32_PcdErrorCodeSetVariable  _gPcd_FixedAtBuild_PcdErrorCodeSetVariable
//#define _PCD_SET_MODE_32_PcdErrorCodeSetVariable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTestKeyUsed  4U
#define _PCD_GET_MODE_BOOL_PcdTestKeyUsed  LibPcdGetBool(_PCD_TOKEN_PcdTestKeyUsed)
#define _PCD_GET_MODE_SIZE_PcdTestKeyUsed  LibPcdGetSize(_PCD_TOKEN_PcdTestKeyUsed)
#define _PCD_SET_MODE_BOOL_PcdTestKeyUsed(Value)  LibPcdSetBool(_PCD_TOKEN_PcdTestKeyUsed, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdTestKeyUsed(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdTestKeyUsed, (Value))

#define _PCD_TOKEN_PcdCapsuleOnDiskSupport  0U
#define _PCD_SIZE_PcdCapsuleOnDiskSupport 1
#define _PCD_GET_MODE_SIZE_PcdCapsuleOnDiskSupport  _PCD_SIZE_PcdCapsuleOnDiskSupport 
#define _PCD_VALUE_PcdCapsuleOnDiskSupport  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCapsuleOnDiskSupport;
#define _PCD_GET_MODE_BOOL_PcdCapsuleOnDiskSupport  _gPcd_FixedAtBuild_PcdCapsuleOnDiskSupport
//#define _PCD_SET_MODE_BOOL_PcdCapsuleOnDiskSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPlatformRecoverySupport  0U
#define _PCD_SIZE_PcdPlatformRecoverySupport 1
#define _PCD_GET_MODE_SIZE_PcdPlatformRecoverySupport  _PCD_SIZE_PcdPlatformRecoverySupport 
#define _PCD_VALUE_PcdPlatformRecoverySupport  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPlatformRecoverySupport;
#define _PCD_GET_MODE_BOOL_PcdPlatformRecoverySupport  _gPcd_FixedAtBuild_PcdPlatformRecoverySupport
//#define _PCD_SET_MODE_BOOL_PcdPlatformRecoverySupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSupportInfiniteBootRetries  0U
#define _PCD_SIZE_PcdSupportInfiniteBootRetries 1
#define _PCD_GET_MODE_SIZE_PcdSupportInfiniteBootRetries  _PCD_SIZE_PcdSupportInfiniteBootRetries 
#define _PCD_VALUE_PcdSupportInfiniteBootRetries  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSupportInfiniteBootRetries;
#define _PCD_GET_MODE_BOOL_PcdSupportInfiniteBootRetries  _gPcd_FixedAtBuild_PcdSupportInfiniteBootRetries
//#define _PCD_SET_MODE_BOOL_PcdSupportInfiniteBootRetries  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
BdsInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
