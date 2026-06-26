/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_3f7bd07a_1436_4486_8a8b_e7957d171ad7
#define _AUTOGENH_3f7bd07a_1436_4486_8a8b_e7957d171ad7

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x668993BAF4BD5128ULL

// Guids
extern EFI_GUID gOemPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdLogoFile  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdLogoFile[];
#define _PCD_GET_MODE_PTR_PcdLogoFile  (VOID *)_gPcd_FixedAtBuild_PcdLogoFile
//#define _PCD_SET_MODE_PTR_PcdLogoFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdLogoFile (VOID *)_gPcd_FixedAtBuild_PcdLogoFile
#define _PCD_SIZE_PcdLogoFile 16
#define _PCD_GET_MODE_SIZE_PcdLogoFile _PCD_SIZE_PcdLogoFile
#define _PCD_TOKEN_PcdLowBatteryFile  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdLowBatteryFile[];
#define _PCD_GET_MODE_PTR_PcdLowBatteryFile  (VOID *)_gPcd_FixedAtBuild_PcdLowBatteryFile
//#define _PCD_SET_MODE_PTR_PcdLowBatteryFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdLowBatteryFile (VOID *)_gPcd_FixedAtBuild_PcdLowBatteryFile
#define _PCD_SIZE_PcdLowBatteryFile 16
#define _PCD_GET_MODE_SIZE_PcdLowBatteryFile _PCD_SIZE_PcdLowBatteryFile
#define _PCD_TOKEN_PcdThermalFile  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdThermalFile[];
#define _PCD_GET_MODE_PTR_PcdThermalFile  (VOID *)_gPcd_FixedAtBuild_PcdThermalFile
//#define _PCD_SET_MODE_PTR_PcdThermalFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdThermalFile (VOID *)_gPcd_FixedAtBuild_PcdThermalFile
#define _PCD_SIZE_PcdThermalFile 16
#define _PCD_GET_MODE_SIZE_PcdThermalFile _PCD_SIZE_PcdThermalFile
#define _PCD_TOKEN_PcdPostBackgroundColor  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdPostBackgroundColor;
#define _PCD_GET_MODE_32_PcdPostBackgroundColor  _gPcd_FixedAtBuild_PcdPostBackgroundColor
//#define _PCD_SET_MODE_32_PcdPostBackgroundColor  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPostBackgroundColor 0x0
#define _PCD_SIZE_PcdPostBackgroundColor 4
#define _PCD_GET_MODE_SIZE_PcdPostBackgroundColor _PCD_SIZE_PcdPostBackgroundColor


#ifdef __cplusplus
}
#endif

#endif
