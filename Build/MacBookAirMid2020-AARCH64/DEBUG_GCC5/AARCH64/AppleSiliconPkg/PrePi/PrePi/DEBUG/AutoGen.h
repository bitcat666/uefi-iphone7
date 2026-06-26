/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_fa8e7979_a845_4378_b7f8_ceede175b1e9
#define _AUTOGENH_fa8e7979_a845_4378_b7f8_ceede175b1e9

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xfa8e7979, 0xa845, 0x4378, {0xb7, 0xf8, 0xce, 0xed, 0xe1, 0x75, 0xb1, 0xe9}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0x54E0DB54DB55D706ULL

// Guids
extern EFI_GUID gEfiSystemNvDataFvGuid;
extern EFI_GUID gEfiVariableGuid;
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gAppleSiliconPkgTokenSpaceGuid;
extern EFI_GUID gEmbeddedTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gArmMmuReplaceLiveTranslationEntryFuncGuid;
extern EFI_GUID gLzmaCustomDecompressGuid;

// Protocols
extern EFI_GUID gPeCoffLoaderProtocolGuid;

// PPIs
extern EFI_GUID gEfiPeiMasterBootModePpiGuid;
extern EFI_GUID gEfiPeiBootInRecoveryModePpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFvSize  0U
#define _PCD_SIZE_PcdFvSize 4
#define _PCD_GET_MODE_SIZE_PcdFvSize  _PCD_SIZE_PcdFvSize 
#define _PCD_VALUE_PcdFvSize  0x01D80000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFvSize;
#define _PCD_GET_MODE_32_PcdFvSize  _gPcd_FixedAtBuild_PcdFvSize
//#define _PCD_SET_MODE_32_PcdFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFdSize  0U
#define _PCD_SIZE_PcdFdSize 4
#define _PCD_GET_MODE_SIZE_PcdFdSize  _PCD_SIZE_PcdFdSize 
#define _PCD_VALUE_PcdFdSize  0x001E00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFdSize;
#define _PCD_GET_MODE_32_PcdFdSize  _gPcd_FixedAtBuild_PcdFdSize
//#define _PCD_SET_MODE_32_PcdFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSystemMemoryUefiRegionSize  0U
#define _PCD_SIZE_PcdSystemMemoryUefiRegionSize 4
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryUefiRegionSize  _PCD_SIZE_PcdSystemMemoryUefiRegionSize 
#define _PCD_VALUE_PcdSystemMemoryUefiRegionSize  0x8000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSystemMemoryUefiRegionSize;
#define _PCD_GET_MODE_32_PcdSystemMemoryUefiRegionSize  _gPcd_FixedAtBuild_PcdSystemMemoryUefiRegionSize
//#define _PCD_SET_MODE_32_PcdSystemMemoryUefiRegionSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPrePiCpuIoSize  0U
#define _PCD_SIZE_PcdPrePiCpuIoSize 1
#define _PCD_GET_MODE_SIZE_PcdPrePiCpuIoSize  _PCD_SIZE_PcdPrePiCpuIoSize 
#define _PCD_VALUE_PcdPrePiCpuIoSize  40U
extern const  UINT8  _gPcd_FixedAtBuild_PcdPrePiCpuIoSize;
#define _PCD_GET_MODE_8_PcdPrePiCpuIoSize  _gPcd_FixedAtBuild_PcdPrePiCpuIoSize
//#define _PCD_SET_MODE_8_PcdPrePiCpuIoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSecPhaseStackBase  0U
#define _PCD_SIZE_PcdSecPhaseStackBase 8
#define _PCD_GET_MODE_SIZE_PcdSecPhaseStackBase  _PCD_SIZE_PcdSecPhaseStackBase 
#define _PCD_VALUE_PcdSecPhaseStackBase  0x900000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdSecPhaseStackBase;
#define _PCD_GET_MODE_64_PcdSecPhaseStackBase  _gPcd_FixedAtBuild_PcdSecPhaseStackBase
//#define _PCD_SET_MODE_64_PcdSecPhaseStackBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSecPhaseStackSize  0U
#define _PCD_SIZE_PcdSecPhaseStackSize 4
#define _PCD_GET_MODE_SIZE_PcdSecPhaseStackSize  _PCD_SIZE_PcdSecPhaseStackSize 
#define _PCD_VALUE_PcdSecPhaseStackSize  0x80000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSecPhaseStackSize;
#define _PCD_GET_MODE_32_PcdSecPhaseStackSize  _gPcd_FixedAtBuild_PcdSecPhaseStackSize
//#define _PCD_SET_MODE_32_PcdSecPhaseStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAdtPointer  0U
#define _PCD_SIZE_PcdAdtPointer 8
#define _PCD_GET_MODE_SIZE_PcdAdtPointer  _PCD_SIZE_PcdAdtPointer 
#define _PCD_VALUE_PcdAdtPointer  0x840004000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdAdtPointer;
#define _PCD_GET_MODE_64_PcdAdtPointer  _gPcd_FixedAtBuild_PcdAdtPointer
//#define _PCD_SET_MODE_64_PcdAdtPointer  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBootArgsPointer  0U
#define _PCD_SIZE_PcdBootArgsPointer 8
#define _PCD_GET_MODE_SIZE_PcdBootArgsPointer  _PCD_SIZE_PcdBootArgsPointer 
#define _PCD_VALUE_PcdBootArgsPointer  0x840000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdBootArgsPointer;
#define _PCD_GET_MODE_64_PcdBootArgsPointer  _gPcd_FixedAtBuild_PcdBootArgsPointer
//#define _PCD_SET_MODE_64_PcdBootArgsPointer  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdFvBaseAddress  0U
#define _PCD_PATCHABLE_VALUE_PcdFvBaseAddress  ((UINT64)0x830008000ULL)
extern volatile   UINT64  _gPcd_BinaryPatch_PcdFvBaseAddress;
#define _PCD_GET_MODE_64_PcdFvBaseAddress  _gPcd_BinaryPatch_PcdFvBaseAddress
#define _PCD_PATCHABLE_PcdFvBaseAddress_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdFvBaseAddress  _gPcd_BinaryPatch_Size_PcdFvBaseAddress 
extern UINTN _gPcd_BinaryPatch_Size_PcdFvBaseAddress; 
#define _PCD_SET_MODE_64_PcdFvBaseAddress(Value)  (_gPcd_BinaryPatch_PcdFvBaseAddress = (Value))
#define _PCD_SET_MODE_64_S_PcdFvBaseAddress(Value)  ((_gPcd_BinaryPatch_PcdFvBaseAddress = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdFdBaseAddress  0U
#define _PCD_PATCHABLE_VALUE_PcdFdBaseAddress  ((UINT64)0x830000000ULL)
extern volatile   UINT64  _gPcd_BinaryPatch_PcdFdBaseAddress;
#define _PCD_GET_MODE_64_PcdFdBaseAddress  _gPcd_BinaryPatch_PcdFdBaseAddress
#define _PCD_PATCHABLE_PcdFdBaseAddress_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdFdBaseAddress  _gPcd_BinaryPatch_Size_PcdFdBaseAddress 
extern UINTN _gPcd_BinaryPatch_Size_PcdFdBaseAddress; 
#define _PCD_SET_MODE_64_PcdFdBaseAddress(Value)  (_gPcd_BinaryPatch_PcdFdBaseAddress = (Value))
#define _PCD_SET_MODE_64_S_PcdFdBaseAddress(Value)  ((_gPcd_BinaryPatch_PcdFdBaseAddress = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdFrameBufferAddress  0U
#define _PCD_PATCHABLE_VALUE_PcdFrameBufferAddress  ((UINT64)0x0ULL)
extern volatile   UINT64  _gPcd_BinaryPatch_PcdFrameBufferAddress;
#define _PCD_GET_MODE_64_PcdFrameBufferAddress  _gPcd_BinaryPatch_PcdFrameBufferAddress
#define _PCD_PATCHABLE_PcdFrameBufferAddress_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdFrameBufferAddress  _gPcd_BinaryPatch_Size_PcdFrameBufferAddress 
extern UINTN _gPcd_BinaryPatch_Size_PcdFrameBufferAddress; 
#define _PCD_SET_MODE_64_PcdFrameBufferAddress(Value)  (_gPcd_BinaryPatch_PcdFrameBufferAddress = (Value))
#define _PCD_SET_MODE_64_S_PcdFrameBufferAddress(Value)  ((_gPcd_BinaryPatch_PcdFrameBufferAddress = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdFrameBufferSize  0U
#define _PCD_PATCHABLE_VALUE_PcdFrameBufferSize  ((UINT64)0x0ULL)
extern volatile   UINT64  _gPcd_BinaryPatch_PcdFrameBufferSize;
#define _PCD_GET_MODE_64_PcdFrameBufferSize  _gPcd_BinaryPatch_PcdFrameBufferSize
#define _PCD_PATCHABLE_PcdFrameBufferSize_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdFrameBufferSize  _gPcd_BinaryPatch_Size_PcdFrameBufferSize 
extern UINTN _gPcd_BinaryPatch_Size_PcdFrameBufferSize; 
#define _PCD_SET_MODE_64_PcdFrameBufferSize(Value)  (_gPcd_BinaryPatch_PcdFrameBufferSize = (Value))
#define _PCD_SET_MODE_64_S_PcdFrameBufferSize(Value)  ((_gPcd_BinaryPatch_PcdFrameBufferSize = (Value)), RETURN_SUCCESS) 

// Definition of PCDs used in libraries is in AutoGen.c


#ifdef __cplusplus
}
#endif

#endif
