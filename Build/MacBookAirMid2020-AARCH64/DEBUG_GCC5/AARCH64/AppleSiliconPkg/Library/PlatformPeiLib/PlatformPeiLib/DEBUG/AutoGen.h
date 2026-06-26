/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_49d37060_70b5_11e0_aa2d_0002a5d5c51b
#define _AUTOGENH_49d37060_70b5_11e0_aa2d_0002a5d5c51b

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x655125F3D4B4CD57ULL

// Guids
extern EFI_GUID gArmTokenSpaceGuid;

// PPIs
extern EFI_GUID gEfiPeiMasterBootModePpiGuid;
extern EFI_GUID gEfiPeiBootInRecoveryModePpiGuid;

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
#define _PCD_TOKEN_PcdFvSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdFvSize;
#define _PCD_GET_MODE_32_PcdFvSize  _gPcd_FixedAtBuild_PcdFvSize
//#define _PCD_SET_MODE_32_PcdFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFvSize 0x01D80000
#define _PCD_SIZE_PcdFvSize 4
#define _PCD_GET_MODE_SIZE_PcdFvSize _PCD_SIZE_PcdFvSize
#define _PCD_TOKEN_PcdFdBaseAddress  0U
extern volatile  UINT64  _gPcd_BinaryPatch_PcdFdBaseAddress;
#define _PCD_GET_MODE_64_PcdFdBaseAddress  _gPcd_BinaryPatch_PcdFdBaseAddress
#define _PCD_SET_MODE_64_PcdFdBaseAddress(Value)  (_gPcd_BinaryPatch_PcdFdBaseAddress = (Value))
#define _PCD_SET_MODE_64_S_PcdFdBaseAddress(Value)  ((_gPcd_BinaryPatch_PcdFdBaseAddress = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdFdBaseAddress_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdFdBaseAddress _gPcd_BinaryPatch_Size_PcdFdBaseAddress
extern UINTN _gPcd_BinaryPatch_Size_PcdFdBaseAddress; 
#define _PCD_TOKEN_PcdFvBaseAddress  0U
extern volatile  UINT64  _gPcd_BinaryPatch_PcdFvBaseAddress;
#define _PCD_GET_MODE_64_PcdFvBaseAddress  _gPcd_BinaryPatch_PcdFvBaseAddress
#define _PCD_SET_MODE_64_PcdFvBaseAddress(Value)  (_gPcd_BinaryPatch_PcdFvBaseAddress = (Value))
#define _PCD_SET_MODE_64_S_PcdFvBaseAddress(Value)  ((_gPcd_BinaryPatch_PcdFvBaseAddress = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdFvBaseAddress_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdFvBaseAddress _gPcd_BinaryPatch_Size_PcdFvBaseAddress
extern UINTN _gPcd_BinaryPatch_Size_PcdFvBaseAddress; 


#ifdef __cplusplus
}
#endif

#endif
