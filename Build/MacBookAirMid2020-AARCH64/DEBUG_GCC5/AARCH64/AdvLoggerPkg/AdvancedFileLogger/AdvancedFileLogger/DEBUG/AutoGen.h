/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_06e49122_4ef4_45fe_9766_e2eaf2f9472f
#define _AUTOGENH_06e49122_4ef4_45fe_9766_e2eaf2f9472f

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x06e49122, 0x4ef4, 0x45fe, {0x97, 0x66, 0xe2, 0xea, 0xf2, 0xf9, 0x47, 0x2f}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0x2600BB47D9B44BD7ULL

// Guids
extern EFI_GUID gAdvancedFileLoggerWriteLogFiles;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventBeforeExitBootServicesGuid;
extern EFI_GUID gAdvancedFileLoggerPolicyGuid;
extern EFI_GUID gAdvLoggerPkgTokenSpaceGuid;
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
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEdkiiPerformanceMeasurementProtocolGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;

// Protocols
extern EFI_GUID gEdkiiPlatformSpecificResetFilterProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
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
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gAdvancedLoggerProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gPolicyProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdAdvancedLoggerPages  0U
#define _PCD_SIZE_PcdAdvancedLoggerPages 4
#define _PCD_GET_MODE_SIZE_PcdAdvancedLoggerPages  _PCD_SIZE_PcdAdvancedLoggerPages 
#define _PCD_VALUE_PcdAdvancedLoggerPages  1024U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAdvancedLoggerPages;
#define _PCD_GET_MODE_32_PcdAdvancedLoggerPages  _gPcd_FixedAtBuild_PcdAdvancedLoggerPages
//#define _PCD_SET_MODE_32_PcdAdvancedLoggerPages  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAdvancedFileLoggerForceEnable  0U
#define _PCD_SIZE_PcdAdvancedFileLoggerForceEnable 1
#define _PCD_GET_MODE_SIZE_PcdAdvancedFileLoggerForceEnable  _PCD_SIZE_PcdAdvancedFileLoggerForceEnable 
#define _PCD_VALUE_PcdAdvancedFileLoggerForceEnable  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdAdvancedFileLoggerForceEnable;
#define _PCD_GET_MODE_BOOL_PcdAdvancedFileLoggerForceEnable  _gPcd_FixedAtBuild_PcdAdvancedFileLoggerForceEnable
//#define _PCD_SET_MODE_BOOL_PcdAdvancedFileLoggerForceEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAdvancedFileLoggerFlush  0U
#define _PCD_SIZE_PcdAdvancedFileLoggerFlush 1
#define _PCD_GET_MODE_SIZE_PcdAdvancedFileLoggerFlush  _PCD_SIZE_PcdAdvancedFileLoggerFlush 
#define _PCD_VALUE_PcdAdvancedFileLoggerFlush  1U
extern const  UINT8  _gPcd_FixedAtBuild_PcdAdvancedFileLoggerFlush;
#define _PCD_GET_MODE_8_PcdAdvancedFileLoggerFlush  _gPcd_FixedAtBuild_PcdAdvancedFileLoggerFlush
//#define _PCD_SET_MODE_8_PcdAdvancedFileLoggerFlush  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
AdvancedFileLoggerEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
