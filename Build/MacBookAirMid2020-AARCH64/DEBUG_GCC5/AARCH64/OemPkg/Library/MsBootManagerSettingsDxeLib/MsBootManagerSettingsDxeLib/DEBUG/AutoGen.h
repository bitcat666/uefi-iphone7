/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_75a0b4be_9b94_45dd_a8c8_9ecd1ed08a34
#define _AUTOGENH_75a0b4be_9b94_45dd_a8c8_9ecd1ed08a34

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0xFFC49185BA5FE352ULL

// Guids
extern EFI_GUID gMsBootManagerSettingsGuid;
extern EFI_GUID gDfciPkgTokenSpaceGuid;
extern EFI_GUID gPcBdsPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gDfciSettingsProviderSupportProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdSettingsManagerInstallProvider  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdSettingsManagerInstallProvider;
#define _PCD_GET_MODE_BOOL_PcdSettingsManagerInstallProvider  _gPcd_FixedAtBuild_PcdSettingsManagerInstallProvider
//#define _PCD_SET_MODE_BOOL_PcdSettingsManagerInstallProvider  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_TOKEN_PcdEnableIPv6Boot  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdEnableIPv6Boot;
#define _PCD_GET_MODE_8_PcdEnableIPv6Boot  _gPcd_FixedAtBuild_PcdEnableIPv6Boot
//#define _PCD_SET_MODE_8_PcdEnableIPv6Boot  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdEnableIPv6Boot 0x1
#define _PCD_SIZE_PcdEnableIPv6Boot 1
#define _PCD_GET_MODE_SIZE_PcdEnableIPv6Boot _PCD_SIZE_PcdEnableIPv6Boot
#define _PCD_TOKEN_PcdEnableAltBoot  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdEnableAltBoot;
#define _PCD_GET_MODE_8_PcdEnableAltBoot  _gPcd_FixedAtBuild_PcdEnableAltBoot
//#define _PCD_SET_MODE_8_PcdEnableAltBoot  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdEnableAltBoot 0x1
#define _PCD_SIZE_PcdEnableAltBoot 1
#define _PCD_GET_MODE_SIZE_PcdEnableAltBoot _PCD_SIZE_PcdEnableAltBoot
#define _PCD_TOKEN_PcdEnableBootOrderLock  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdEnableBootOrderLock;
#define _PCD_GET_MODE_8_PcdEnableBootOrderLock  _gPcd_FixedAtBuild_PcdEnableBootOrderLock
//#define _PCD_SET_MODE_8_PcdEnableBootOrderLock  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdEnableBootOrderLock 0x0
#define _PCD_SIZE_PcdEnableBootOrderLock 1
#define _PCD_GET_MODE_SIZE_PcdEnableBootOrderLock _PCD_SIZE_PcdEnableBootOrderLock
#define _PCD_TOKEN_PcdEnableUsbBoot  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdEnableUsbBoot;
#define _PCD_GET_MODE_8_PcdEnableUsbBoot  _gPcd_FixedAtBuild_PcdEnableUsbBoot
//#define _PCD_SET_MODE_8_PcdEnableUsbBoot  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdEnableUsbBoot 0x1
#define _PCD_SIZE_PcdEnableUsbBoot 1
#define _PCD_GET_MODE_SIZE_PcdEnableUsbBoot _PCD_SIZE_PcdEnableUsbBoot
#define _PCD_TOKEN_PcdStartNetwork  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdStartNetwork;
#define _PCD_GET_MODE_8_PcdStartNetwork  _gPcd_FixedAtBuild_PcdStartNetwork
//#define _PCD_SET_MODE_8_PcdStartNetwork  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdStartNetwork 0x0
#define _PCD_SIZE_PcdStartNetwork 1
#define _PCD_GET_MODE_SIZE_PcdStartNetwork _PCD_SIZE_PcdStartNetwork
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

EFI_STATUS
EFIAPI
MsBootManagerSettingsConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
