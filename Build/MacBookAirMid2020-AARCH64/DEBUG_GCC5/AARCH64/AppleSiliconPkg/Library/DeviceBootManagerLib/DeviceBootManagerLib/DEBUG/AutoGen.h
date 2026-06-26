/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_4734dddd_9054_4d42_acab_f8907886cc6f
#define _AUTOGENH_4734dddd_9054_4d42_acab_f8907886cc6f

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0xDC1A077A20739DE1ULL

// Guids
extern EFI_GUID gUefiShellFileGuid;
extern EFI_GUID gMsStartOfBdsNotifyGuid;
extern EFI_GUID gDfciStartOfBdsNotifyGuid;
extern EFI_GUID gMsBootMenuFormsetGuid;
extern EFI_GUID gEfiEventPreReadyToBootGuid;
extern EFI_GUID gEfiEventPostReadyToBootGuid;
extern EFI_GUID gDfciSettingsManagerVarNamespace;
extern EFI_GUID gPcBdsPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gMsOSKProtocolGuid;
extern EFI_GUID gMsSWMProtocolGuid;
extern EFI_GUID gTpmPpProtocolGuid;
extern EFI_GUID gEdkiiVariablePolicyProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdPowerAndThermalRetries  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdPowerAndThermalRetries;
#define _PCD_GET_MODE_32_PcdPowerAndThermalRetries  _gPcd_FixedAtBuild_PcdPowerAndThermalRetries
//#define _PCD_SET_MODE_32_PcdPowerAndThermalRetries  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPowerAndThermalRetries 0
#define _PCD_SIZE_PcdPowerAndThermalRetries 4
#define _PCD_GET_MODE_SIZE_PcdPowerAndThermalRetries _PCD_SIZE_PcdPowerAndThermalRetries
#define _PCD_TOKEN_PcdShutdownGraphicDisplayTime  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdShutdownGraphicDisplayTime;
#define _PCD_GET_MODE_32_PcdShutdownGraphicDisplayTime  _gPcd_FixedAtBuild_PcdShutdownGraphicDisplayTime
//#define _PCD_SET_MODE_32_PcdShutdownGraphicDisplayTime  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdShutdownGraphicDisplayTime 50000000
#define _PCD_SIZE_PcdShutdownGraphicDisplayTime 4
#define _PCD_GET_MODE_SIZE_PcdShutdownGraphicDisplayTime _PCD_SIZE_PcdShutdownGraphicDisplayTime
#define _PCD_TOKEN_PcdThermalControlRetryWait  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdThermalControlRetryWait;
#define _PCD_GET_MODE_32_PcdThermalControlRetryWait  _gPcd_FixedAtBuild_PcdThermalControlRetryWait
//#define _PCD_SET_MODE_32_PcdThermalControlRetryWait  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdThermalControlRetryWait 600000000
#define _PCD_SIZE_PcdThermalControlRetryWait 4
#define _PCD_GET_MODE_SIZE_PcdThermalControlRetryWait _PCD_SIZE_PcdThermalControlRetryWait
#define _PCD_TOKEN_PcdShellFile  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdShellFile[];
#define _PCD_GET_MODE_PTR_PcdShellFile  (VOID *)_gPcd_FixedAtBuild_PcdShellFile
//#define _PCD_SET_MODE_PTR_PcdShellFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdShellFile (VOID *)_gPcd_FixedAtBuild_PcdShellFile
#define _PCD_SIZE_PcdShellFile 16
#define _PCD_GET_MODE_SIZE_PcdShellFile _PCD_SIZE_PcdShellFile
#define _PCD_TOKEN_PcdEnableMemMapOutput  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdEnableMemMapOutput;
#define _PCD_GET_MODE_8_PcdEnableMemMapOutput  _gPcd_FixedAtBuild_PcdEnableMemMapOutput
//#define _PCD_SET_MODE_8_PcdEnableMemMapOutput  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdEnableMemMapOutput 0x0
#define _PCD_SIZE_PcdEnableMemMapOutput 1
#define _PCD_GET_MODE_SIZE_PcdEnableMemMapOutput _PCD_SIZE_PcdEnableMemMapOutput
#define _PCD_TOKEN_PcdEnableMemMapTypes  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdEnableMemMapTypes;
#define _PCD_GET_MODE_32_PcdEnableMemMapTypes  _gPcd_FixedAtBuild_PcdEnableMemMapTypes
//#define _PCD_SET_MODE_32_PcdEnableMemMapTypes  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdEnableMemMapTypes 0x3FFF
#define _PCD_SIZE_PcdEnableMemMapTypes 4
#define _PCD_GET_MODE_SIZE_PcdEnableMemMapTypes _PCD_SIZE_PcdEnableMemMapTypes
#define _PCD_TOKEN_PcdEnableMemMapDumpOutput  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdEnableMemMapDumpOutput;
#define _PCD_GET_MODE_8_PcdEnableMemMapDumpOutput  _gPcd_FixedAtBuild_PcdEnableMemMapDumpOutput
//#define _PCD_SET_MODE_8_PcdEnableMemMapDumpOutput  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdEnableMemMapDumpOutput 0x0
#define _PCD_SIZE_PcdEnableMemMapDumpOutput 1
#define _PCD_GET_MODE_SIZE_PcdEnableMemMapDumpOutput _PCD_SIZE_PcdEnableMemMapDumpOutput
#define _PCD_TOKEN_PcdLowResolutionInternalShell  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdLowResolutionInternalShell;
#define _PCD_GET_MODE_BOOL_PcdLowResolutionInternalShell  _gPcd_FixedAtBuild_PcdLowResolutionInternalShell
//#define _PCD_SET_MODE_BOOL_PcdLowResolutionInternalShell  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdLowResolutionInternalShell 0
#define _PCD_SIZE_PcdLowResolutionInternalShell 1
#define _PCD_GET_MODE_SIZE_PcdLowResolutionInternalShell _PCD_SIZE_PcdLowResolutionInternalShell

EFI_STATUS
EFIAPI
DeviceBootManagerConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
