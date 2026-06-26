/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_995F045B_0265_46A4_8D21_001211A24A4F
#define _AUTOGENH_995F045B_0265_46A4_8D21_001211A24A4F

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x995F045B, 0x0265, 0x46A4, {0x8D, 0x21, 0x00, 0x12, 0x11, 0xA2, 0x4A, 0x4F}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0x12337E8DDE833D67ULL

// Guids
extern EFI_GUID gEfiHardwareErrorVariableGuid;
extern EFI_GUID gEfiEventExitBootServicesGuid;
extern EFI_GUID gMuTelemetrySectionTypeGuid;
extern EFI_GUID gMsWheaRSCDataTypeGuid;
extern EFI_GUID gMsWheaReportServiceGuid;
extern EFI_GUID gEfiEventNotificationTypeBootGuid;
extern EFI_GUID gMsWheaReportRecordIDGuid;
extern EFI_GUID gMsWheaPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
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
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;

// Protocols
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiRuntimeArchProtocolGuid;
extern EFI_GUID gEfiRscHandlerProtocolGuid;
extern EFI_GUID gEfiVariableWriteArchProtocolGuid;
extern EFI_GUID gEfiVariableArchProtocolGuid;
extern EFI_GUID gEfiRealTimeClockArchProtocolGuid;
extern EFI_GUID gEdkiiVariablePolicyProtocolGuid;
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
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdMsWheaReportEarlyStorageCapacity  0U
#define _PCD_SIZE_PcdMsWheaReportEarlyStorageCapacity 4
#define _PCD_GET_MODE_SIZE_PcdMsWheaReportEarlyStorageCapacity  _PCD_SIZE_PcdMsWheaReportEarlyStorageCapacity 
#define _PCD_VALUE_PcdMsWheaReportEarlyStorageCapacity  0x00000100U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMsWheaReportEarlyStorageCapacity;
#define _PCD_GET_MODE_32_PcdMsWheaReportEarlyStorageCapacity  _gPcd_FixedAtBuild_PcdMsWheaReportEarlyStorageCapacity
//#define _PCD_SET_MODE_32_PcdMsWheaReportEarlyStorageCapacity  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMsWheaEarlyStorageDefaultValue  0U
#define _PCD_SIZE_PcdMsWheaEarlyStorageDefaultValue 1
#define _PCD_GET_MODE_SIZE_PcdMsWheaEarlyStorageDefaultValue  _PCD_SIZE_PcdMsWheaEarlyStorageDefaultValue 
#define _PCD_VALUE_PcdMsWheaEarlyStorageDefaultValue  0xFFU
extern const  UINT8  _gPcd_FixedAtBuild_PcdMsWheaEarlyStorageDefaultValue;
#define _PCD_GET_MODE_8_PcdMsWheaEarlyStorageDefaultValue  _gPcd_FixedAtBuild_PcdMsWheaEarlyStorageDefaultValue
//#define _PCD_SET_MODE_8_PcdMsWheaEarlyStorageDefaultValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDeviceIdentifierGuid  0U
#define _PCD_VALUE_PcdDeviceIdentifierGuid  (VOID *)_gPcd_FixedAtBuild_PcdDeviceIdentifierGuid
extern const UINT8 _gPcd_FixedAtBuild_PcdDeviceIdentifierGuid[16];
#define _PCD_GET_MODE_PTR_PcdDeviceIdentifierGuid  (VOID *)_gPcd_FixedAtBuild_PcdDeviceIdentifierGuid
#define _PCD_SIZE_PcdDeviceIdentifierGuid 16
#define _PCD_GET_MODE_SIZE_PcdDeviceIdentifierGuid  _PCD_SIZE_PcdDeviceIdentifierGuid 
//#define _PCD_SET_MODE_PTR_PcdDeviceIdentifierGuid  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMsWheaRSCHandlerTpl  0U
#define _PCD_SIZE_PcdMsWheaRSCHandlerTpl 4
#define _PCD_GET_MODE_SIZE_PcdMsWheaRSCHandlerTpl  _PCD_SIZE_PcdMsWheaRSCHandlerTpl 
#define _PCD_VALUE_PcdMsWheaRSCHandlerTpl  0x00000008U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMsWheaRSCHandlerTpl;
#define _PCD_GET_MODE_32_PcdMsWheaRSCHandlerTpl  _gPcd_FixedAtBuild_PcdMsWheaRSCHandlerTpl
//#define _PCD_SET_MODE_32_PcdMsWheaRSCHandlerTpl  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVariableHardwareMaxCount  0U
#define _PCD_SIZE_PcdVariableHardwareMaxCount 2
#define _PCD_GET_MODE_SIZE_PcdVariableHardwareMaxCount  _PCD_SIZE_PcdVariableHardwareMaxCount 
#define _PCD_VALUE_PcdVariableHardwareMaxCount  0xFFFFU
extern const  UINT16  _gPcd_FixedAtBuild_PcdVariableHardwareMaxCount;
#define _PCD_GET_MODE_16_PcdVariableHardwareMaxCount  _gPcd_FixedAtBuild_PcdVariableHardwareMaxCount
//#define _PCD_SET_MODE_16_PcdVariableHardwareMaxCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVariableHardwareErrorRecordAttributeSupported  0U
#define _PCD_SIZE_PcdVariableHardwareErrorRecordAttributeSupported 1
#define _PCD_GET_MODE_SIZE_PcdVariableHardwareErrorRecordAttributeSupported  _PCD_SIZE_PcdVariableHardwareErrorRecordAttributeSupported 
#define _PCD_VALUE_PcdVariableHardwareErrorRecordAttributeSupported  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVariableHardwareErrorRecordAttributeSupported;
#define _PCD_GET_MODE_BOOL_PcdVariableHardwareErrorRecordAttributeSupported  _gPcd_FixedAtBuild_PcdVariableHardwareErrorRecordAttributeSupported
//#define _PCD_SET_MODE_BOOL_PcdVariableHardwareErrorRecordAttributeSupported  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxHardwareErrorVariableSize  0U
#define _PCD_SIZE_PcdMaxHardwareErrorVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdMaxHardwareErrorVariableSize  _PCD_SIZE_PcdMaxHardwareErrorVariableSize 
#define _PCD_VALUE_PcdMaxHardwareErrorVariableSize  0x8000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaxHardwareErrorVariableSize;
#define _PCD_GET_MODE_32_PcdMaxHardwareErrorVariableSize  _gPcd_FixedAtBuild_PcdMaxHardwareErrorVariableSize
//#define _PCD_SET_MODE_32_PcdMaxHardwareErrorVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
MsWheaReportDxeEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
