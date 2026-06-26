/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_0d42b5bd_b0d0_41e8_8432_8cc303b672f2
#define _AUTOGENH_0d42b5bd_b0d0_41e8_8432_8cc303b672f2

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x90C21074DADD52F1ULL

// Guids
extern EFI_GUID gLogoDisplayedEventGroup;
extern EFI_GUID gMsGraphicsPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEdkiiBootLogo2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCD Token Space GUIDs used in this module

extern EFI_GUID gMsGraphicsPkgTokenSpaceGuid;

// PCD definitions

#define _PCD_TOKEN_gMsGraphicsPkgTokenSpaceGuid_PcdPostBackgroundColoringSkipCount  1073742215U
#define _PCD_TOKEN_PcdPostBackgroundColoringSkipCount  _PCD_TOKEN_gMsGraphicsPkgTokenSpaceGuid_PcdPostBackgroundColoringSkipCount
#define _PCD_GET_MODE_8_PcdPostBackgroundColoringSkipCount  LibPcdGetEx8(&gMsGraphicsPkgTokenSpaceGuid, _PCD_TOKEN_PcdPostBackgroundColoringSkipCount)
#define _PCD_GET_MODE_SIZE_PcdPostBackgroundColoringSkipCount LibPcdGetExSize(&gMsGraphicsPkgTokenSpaceGuid, _PCD_TOKEN_PcdPostBackgroundColoringSkipCount)
#define _PCD_SET_MODE_8_PcdPostBackgroundColoringSkipCount(Value)  LibPcdSetEx8(&gMsGraphicsPkgTokenSpaceGuid, _PCD_TOKEN_PcdPostBackgroundColoringSkipCount, (Value))
#define _PCD_SET_MODE_8_S_PcdPostBackgroundColoringSkipCount(Value)  LibPcdSetEx8S(&gMsGraphicsPkgTokenSpaceGuid, _PCD_TOKEN_PcdPostBackgroundColoringSkipCount, (Value))

#define COMPAREGUID(Guid1, Guid2) (BOOLEAN)(*(CONST UINT64*)Guid1 == *(CONST UINT64*)Guid2 && *((CONST UINT64*)Guid1 + 1) == *((CONST UINT64*)Guid2 + 1))

#define __PCD_PcdPostBackgroundColoringSkipCount_ADDR_CMP(GuidPtr)  (\
  (GuidPtr == &gMsGraphicsPkgTokenSpaceGuid) ? _PCD_TOKEN_gMsGraphicsPkgTokenSpaceGuid_PcdPostBackgroundColoringSkipCount:0 \
  )

#define __PCD_PcdPostBackgroundColoringSkipCount_VAL_CMP(GuidPtr)  (\
  (GuidPtr == NULL) ? 0:\
  COMPAREGUID (GuidPtr, &gMsGraphicsPkgTokenSpaceGuid) ? _PCD_TOKEN_gMsGraphicsPkgTokenSpaceGuid_PcdPostBackgroundColoringSkipCount:0 \
  )
#define _PCD_TOKEN_EX_PcdPostBackgroundColoringSkipCount(GuidPtr)   __PCD_PcdPostBackgroundColoringSkipCount_ADDR_CMP(GuidPtr) ? __PCD_PcdPostBackgroundColoringSkipCount_ADDR_CMP(GuidPtr) : __PCD_PcdPostBackgroundColoringSkipCount_VAL_CMP(GuidPtr)  


#ifdef __cplusplus
}
#endif

#endif
