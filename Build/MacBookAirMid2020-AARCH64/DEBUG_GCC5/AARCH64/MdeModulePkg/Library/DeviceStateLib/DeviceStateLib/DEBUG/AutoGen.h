/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_49F18455_FE0D_4DFC_B88B_BEC283BB46DD
#define _AUTOGENH_49F18455_FE0D_4DFC_B88B_BEC283BB46DD

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x1344FDCEF0C2A713ULL

// Guids
extern GUID gEfiMdeModulePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdDeviceStateBitmask  3U
#define _PCD_GET_MODE_32_PcdDeviceStateBitmask  LibPcdGet32(_PCD_TOKEN_PcdDeviceStateBitmask)
#define _PCD_GET_MODE_SIZE_PcdDeviceStateBitmask  LibPcdGetSize(_PCD_TOKEN_PcdDeviceStateBitmask)
#define _PCD_SET_MODE_32_PcdDeviceStateBitmask(Value)  LibPcdSet32(_PCD_TOKEN_PcdDeviceStateBitmask, (Value))
#define _PCD_SET_MODE_32_S_PcdDeviceStateBitmask(Value)  LibPcdSet32S(_PCD_TOKEN_PcdDeviceStateBitmask, (Value))


#ifdef __cplusplus
}
#endif

#endif
