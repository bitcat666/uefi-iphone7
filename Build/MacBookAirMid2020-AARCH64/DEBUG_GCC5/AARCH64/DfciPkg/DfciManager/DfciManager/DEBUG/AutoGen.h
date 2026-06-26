/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_07f1b357_4270_4122_a32a_7eab3c013bac
#define _AUTOGENH_07f1b357_4270_4122_a32a_7eab3c013bac

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x07f1b357, 0x4270, 0x4122, {0xa3, 0x2a, 0x7e, 0xab, 0x3c, 0x01, 0x3b, 0xac}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0xD03E4B98C6B13CB5ULL

// Guids
extern EFI_GUID gDfciAuthProvisionVarNamespace;
extern EFI_GUID gDfciDeviceIdVarNamespace;
extern EFI_GUID gDfciInternalVariableGuid;
extern EFI_GUID gDfciPermissionManagerVarNamespace;
extern EFI_GUID gDfciSettingsGuid;
extern EFI_GUID gDfciSettingsManagerVarNamespace;
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
extern EFI_GUID gMuVarPolicyDxePhaseGuid;
extern EFI_GUID gZeroTouchVariableGuid;
extern EFI_GUID gDfciPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gAppleSiliconPkgTokenSpaceGuid;
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
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEdkiiPerformanceMeasurementProtocolGuid;

// Protocols
extern EFI_GUID gDfciApplyIdentityProtocolGuid;
extern EFI_GUID gDfciApplyPermissionsProtocolGuid;
extern EFI_GUID gDfciApplySettingsProtocolGuid;
extern EFI_GUID gDfciSettingAccessProtocolGuid;
extern EFI_GUID gEdkiiVariablePolicyProtocolGuid;
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
extern EFI_GUID gEfiSmbiosProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdSKUEnableDfci  1U
#define _PCD_GET_MODE_BOOL_PcdSKUEnableDfci  LibPcdGetBool(_PCD_TOKEN_PcdSKUEnableDfci)
#define _PCD_GET_MODE_SIZE_PcdSKUEnableDfci  LibPcdGetSize(_PCD_TOKEN_PcdSKUEnableDfci)
#define _PCD_SET_MODE_BOOL_PcdSKUEnableDfci(Value)  LibPcdSetBool(_PCD_TOKEN_PcdSKUEnableDfci, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdSKUEnableDfci(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdSKUEnableDfci, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
DfciManagerEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
