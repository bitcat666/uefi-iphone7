/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_55ddb6e0_70b5_11e0_b33e_0002a5d5c51b
#define _AUTOGENH_55ddb6e0_70b5_11e0_b33e_0002a5d5c51b

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0xFAFE834B07807EB9ULL

// Guids
extern GUID gEfiMemoryTypeInformationGuid;
extern GUID gArmTokenSpaceGuid;
extern GUID gAppleSiliconPkgTokenSpaceGuid;
extern GUID gEmbeddedTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdFdSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdFdSize;
#define _PCD_GET_MODE_32_PcdFdSize  _gPcd_FixedAtBuild_PcdFdSize
//#define _PCD_SET_MODE_32_PcdFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFdSize 0x001E00000
#define _PCD_SIZE_PcdFdSize 4
#define _PCD_GET_MODE_SIZE_PcdFdSize _PCD_SIZE_PcdFdSize
#define _PCD_TOKEN_PcdSystemMemoryUefiRegionSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdSystemMemoryUefiRegionSize;
#define _PCD_GET_MODE_32_PcdSystemMemoryUefiRegionSize  _gPcd_FixedAtBuild_PcdSystemMemoryUefiRegionSize
//#define _PCD_SET_MODE_32_PcdSystemMemoryUefiRegionSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSystemMemoryUefiRegionSize 0x8000000
#define _PCD_SIZE_PcdSystemMemoryUefiRegionSize 4
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryUefiRegionSize _PCD_SIZE_PcdSystemMemoryUefiRegionSize
#define _PCD_TOKEN_PcdMemoryTypeEfiACPIReclaimMemory  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiACPIReclaimMemory 0
#define _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIReclaimMemory _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory
#define _PCD_TOKEN_PcdMemoryTypeEfiACPIMemoryNVS  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiACPIMemoryNVS 0
#define _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIMemoryNVS _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS
#define _PCD_TOKEN_PcdMemoryTypeEfiReservedMemoryType  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiReservedMemoryType 0
#define _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiReservedMemoryType _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType
#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesData  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesData 300
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesData _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData
#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesCode  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesCode 150
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesCode _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode
#define _PCD_TOKEN_PcdMemoryTypeEfiBootServicesCode  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiBootServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiBootServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiBootServicesCode 1000
#define _PCD_SIZE_PcdMemoryTypeEfiBootServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiBootServicesCode _PCD_SIZE_PcdMemoryTypeEfiBootServicesCode
#define _PCD_TOKEN_PcdMemoryTypeEfiBootServicesData  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiBootServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiBootServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiBootServicesData 800
#define _PCD_SIZE_PcdMemoryTypeEfiBootServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiBootServicesData _PCD_SIZE_PcdMemoryTypeEfiBootServicesData
#define _PCD_TOKEN_PcdMemoryTypeEfiLoaderCode  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiLoaderCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiLoaderCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiLoaderCode 10
#define _PCD_SIZE_PcdMemoryTypeEfiLoaderCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiLoaderCode _PCD_SIZE_PcdMemoryTypeEfiLoaderCode
#define _PCD_TOKEN_PcdMemoryTypeEfiLoaderData  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiLoaderData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiLoaderData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiLoaderData 0
#define _PCD_SIZE_PcdMemoryTypeEfiLoaderData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiLoaderData _PCD_SIZE_PcdMemoryTypeEfiLoaderData
#define _PCD_TOKEN_PcdPrePiProduceMemoryTypeInformationHob  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob;
#define _PCD_GET_MODE_BOOL_PcdPrePiProduceMemoryTypeInformationHob  _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob
//#define _PCD_SET_MODE_BOOL_PcdPrePiProduceMemoryTypeInformationHob  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_TOKEN_PcdFdBaseAddress  0U
extern volatile  UINT64  _gPcd_BinaryPatch_PcdFdBaseAddress;
#define _PCD_GET_MODE_64_PcdFdBaseAddress  _gPcd_BinaryPatch_PcdFdBaseAddress
#define _PCD_SET_MODE_64_PcdFdBaseAddress(Value)  (_gPcd_BinaryPatch_PcdFdBaseAddress = (Value))
#define _PCD_SET_MODE_64_S_PcdFdBaseAddress(Value)  ((_gPcd_BinaryPatch_PcdFdBaseAddress = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdFdBaseAddress_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdFdBaseAddress _gPcd_BinaryPatch_Size_PcdFdBaseAddress
extern UINTN _gPcd_BinaryPatch_Size_PcdFdBaseAddress; 
#define _PCD_TOKEN_PcdSystemMemorySize  0U
extern volatile  UINT64  _gPcd_BinaryPatch_PcdSystemMemorySize;
#define _PCD_GET_MODE_64_PcdSystemMemorySize  _gPcd_BinaryPatch_PcdSystemMemorySize
#define _PCD_SET_MODE_64_PcdSystemMemorySize(Value)  (_gPcd_BinaryPatch_PcdSystemMemorySize = (Value))
#define _PCD_SET_MODE_64_S_PcdSystemMemorySize(Value)  ((_gPcd_BinaryPatch_PcdSystemMemorySize = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdSystemMemorySize_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemorySize _gPcd_BinaryPatch_Size_PcdSystemMemorySize
extern UINTN _gPcd_BinaryPatch_Size_PcdSystemMemorySize; 
#define _PCD_TOKEN_PcdSystemMemoryBase  0U
extern volatile  UINT64  _gPcd_BinaryPatch_PcdSystemMemoryBase;
#define _PCD_GET_MODE_64_PcdSystemMemoryBase  _gPcd_BinaryPatch_PcdSystemMemoryBase
#define _PCD_SET_MODE_64_PcdSystemMemoryBase(Value)  (_gPcd_BinaryPatch_PcdSystemMemoryBase = (Value))
#define _PCD_SET_MODE_64_S_PcdSystemMemoryBase(Value)  ((_gPcd_BinaryPatch_PcdSystemMemoryBase = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdSystemMemoryBase_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryBase _gPcd_BinaryPatch_Size_PcdSystemMemoryBase
extern UINTN _gPcd_BinaryPatch_Size_PcdSystemMemoryBase; 
#define _PCD_TOKEN_PcdFrameBufferAddress  0U
extern volatile  UINT64  _gPcd_BinaryPatch_PcdFrameBufferAddress;
#define _PCD_GET_MODE_64_PcdFrameBufferAddress  _gPcd_BinaryPatch_PcdFrameBufferAddress
#define _PCD_SET_MODE_64_PcdFrameBufferAddress(Value)  (_gPcd_BinaryPatch_PcdFrameBufferAddress = (Value))
#define _PCD_SET_MODE_64_S_PcdFrameBufferAddress(Value)  ((_gPcd_BinaryPatch_PcdFrameBufferAddress = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdFrameBufferAddress_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdFrameBufferAddress _gPcd_BinaryPatch_Size_PcdFrameBufferAddress
extern UINTN _gPcd_BinaryPatch_Size_PcdFrameBufferAddress; 
#define _PCD_TOKEN_PcdFrameBufferSize  0U
extern volatile  UINT64  _gPcd_BinaryPatch_PcdFrameBufferSize;
#define _PCD_GET_MODE_64_PcdFrameBufferSize  _gPcd_BinaryPatch_PcdFrameBufferSize
#define _PCD_SET_MODE_64_PcdFrameBufferSize(Value)  (_gPcd_BinaryPatch_PcdFrameBufferSize = (Value))
#define _PCD_SET_MODE_64_S_PcdFrameBufferSize(Value)  ((_gPcd_BinaryPatch_PcdFrameBufferSize = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdFrameBufferSize_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdFrameBufferSize _gPcd_BinaryPatch_Size_PcdFrameBufferSize
extern UINTN _gPcd_BinaryPatch_Size_PcdFrameBufferSize; 
#define _PCD_TOKEN_PcdCoreCount  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdCoreCount;
#define _PCD_GET_MODE_32_PcdCoreCount  _gPcd_FixedAtBuild_PcdCoreCount
//#define _PCD_SET_MODE_32_PcdCoreCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCoreCount 8
#define _PCD_SIZE_PcdCoreCount 4
#define _PCD_GET_MODE_SIZE_PcdCoreCount _PCD_SIZE_PcdCoreCount


#ifdef __cplusplus
}
#endif

#endif
