/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_dcfd1e6d_788d_4ffc_8e1b_ca2f75651a92
#define _AUTOGENH_dcfd1e6d_788d_4ffc_8e1b_ca2f75651a92

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xdcfd1e6d, 0x788d, 0x4ffc, {0x8e, 0x1b, 0xca, 0x2f, 0x75, 0x65, 0x1a, 0x92}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0xEE4DB6A6BE0C9606ULL

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
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
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;

// Protocols
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
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
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFrameBufferWidth  0U
#define _PCD_SIZE_PcdFrameBufferWidth 4
#define _PCD_GET_MODE_SIZE_PcdFrameBufferWidth  _PCD_SIZE_PcdFrameBufferWidth 
#define _PCD_VALUE_PcdFrameBufferWidth  1920U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFrameBufferWidth;
#define _PCD_GET_MODE_32_PcdFrameBufferWidth  _gPcd_FixedAtBuild_PcdFrameBufferWidth
//#define _PCD_SET_MODE_32_PcdFrameBufferWidth  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFrameBufferHeight  0U
#define _PCD_SIZE_PcdFrameBufferHeight 4
#define _PCD_GET_MODE_SIZE_PcdFrameBufferHeight  _PCD_SIZE_PcdFrameBufferHeight 
#define _PCD_VALUE_PcdFrameBufferHeight  1080U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFrameBufferHeight;
#define _PCD_GET_MODE_32_PcdFrameBufferHeight  _gPcd_FixedAtBuild_PcdFrameBufferHeight
//#define _PCD_SET_MODE_32_PcdFrameBufferHeight  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBootArgsPointer  0U
#define _PCD_SIZE_PcdBootArgsPointer 8
#define _PCD_GET_MODE_SIZE_PcdBootArgsPointer  _PCD_SIZE_PcdBootArgsPointer 
#define _PCD_VALUE_PcdBootArgsPointer  0x840000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdBootArgsPointer;
#define _PCD_GET_MODE_64_PcdBootArgsPointer  _gPcd_FixedAtBuild_PcdBootArgsPointer
//#define _PCD_SET_MODE_64_PcdBootArgsPointer  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SimpleFbDxeInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
