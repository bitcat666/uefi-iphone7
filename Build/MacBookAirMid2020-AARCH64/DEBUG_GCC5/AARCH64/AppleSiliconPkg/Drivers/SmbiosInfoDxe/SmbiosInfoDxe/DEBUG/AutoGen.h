/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_58018fb9_0e53_429a_add1_87fed52c8559
#define _AUTOGENH_58018fb9_0e53_429a_add1_87fed52c8559

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x58018fb9, 0x0e53, 0x429a, {0xad, 0xd1, 0x87, 0xfe, 0xd5, 0x2c, 0x85, 0x59}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0xEE175644C564A75EULL

// Guids
extern EFI_GUID gArmTokenSpaceGuid;
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
extern EFI_GUID gOemPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiSmbiosProtocolGuid;
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

#define _PCD_TOKEN_PcdSystemMemoryBase  0U
#define _PCD_PATCHABLE_VALUE_PcdSystemMemoryBase  ((UINT64)0x800000000ULL)
extern volatile   UINT64  _gPcd_BinaryPatch_PcdSystemMemoryBase;
#define _PCD_GET_MODE_64_PcdSystemMemoryBase  _gPcd_BinaryPatch_PcdSystemMemoryBase
#define _PCD_PATCHABLE_PcdSystemMemoryBase_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryBase  _gPcd_BinaryPatch_Size_PcdSystemMemoryBase 
extern UINTN _gPcd_BinaryPatch_Size_PcdSystemMemoryBase; 
#define _PCD_SET_MODE_64_PcdSystemMemoryBase(Value)  (_gPcd_BinaryPatch_PcdSystemMemoryBase = (Value))
#define _PCD_SET_MODE_64_S_PcdSystemMemoryBase(Value)  ((_gPcd_BinaryPatch_PcdSystemMemoryBase = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdSystemMemorySize  0U
#define _PCD_PATCHABLE_VALUE_PcdSystemMemorySize  ((UINT64)0x200000000ULL)
extern volatile   UINT64  _gPcd_BinaryPatch_PcdSystemMemorySize;
#define _PCD_GET_MODE_64_PcdSystemMemorySize  _gPcd_BinaryPatch_PcdSystemMemorySize
#define _PCD_PATCHABLE_PcdSystemMemorySize_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemorySize  _gPcd_BinaryPatch_Size_PcdSystemMemorySize 
extern UINTN _gPcd_BinaryPatch_Size_PcdSystemMemorySize; 
#define _PCD_SET_MODE_64_PcdSystemMemorySize(Value)  (_gPcd_BinaryPatch_PcdSystemMemorySize = (Value))
#define _PCD_SET_MODE_64_S_PcdSystemMemorySize(Value)  ((_gPcd_BinaryPatch_PcdSystemMemorySize = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdCoreCount  0U
#define _PCD_SIZE_PcdCoreCount 4
#define _PCD_GET_MODE_SIZE_PcdCoreCount  _PCD_SIZE_PcdCoreCount 
#define _PCD_VALUE_PcdCoreCount  8U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCoreCount;
#define _PCD_GET_MODE_32_PcdCoreCount  _gPcd_FixedAtBuild_PcdCoreCount
//#define _PCD_SET_MODE_32_PcdCoreCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SmBiosTableDxeInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
