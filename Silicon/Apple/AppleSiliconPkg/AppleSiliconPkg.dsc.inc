## @file
#
#  Copyright (c) 2011-2015, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2016, Intel Corporation. All rights reserved.
#  Copyright (c) 2018 - 2019, Bingxing Wang. All rights reserved.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

[BuildOptions.common]
  # use Clang to compile, try to use GCC5 otherwise
  *_CLANGPDB_AARCH64_CC_FLAGS = -Wno-unused-const-variable -Wno-sometimes-uninitialized -D CLANG
  *_CLANGPDB_AARCH64_DLINK_FLAGS = /ALIGN:0x1000 /FILEALIGN:0x1000 # a hack to force 4k alignment - changing FDF rules was not working for whatever reason...
  *_GCC5_AARCH64_CC_FLAGS = -Wno-unused-const-variable -D GCC
  *_*_*_CC_FLAGS = -D DISABLE_NEW_DEPRECATED_INTERFACES -D HAS_MEMCPY_INTRINSICS -march=armv8.2-a+crypto+rcpc
  # TODO: add MSVC flags

[BuildOptions.common.EDKII.SEC,BuildOptions.common.EDKII.MM_CORE_STANDALONE]
  GCC:*_GCC*_*_DLINK_FLAGS = -z common-page-size=0x1000
  GCC:*_CLANGPDB_*_DLINK_FLAGS = /ALIGN:0x1000 /FILEALIGN:0x1000

[BuildOptions.common.EDKII.DXE_CORE,BuildOptions.common.EDKII.DXE_DRIVER,BuildOptions.common.EDKII.UEFI_DRIVER,BuildOptions.common.EDKII.UEFI_APPLICATION,BuildOptions.common.EDKII.MM_CORE_STANDALONE,BuildOptions.common.EDKII.MM_STANDALONE]
  GCC:*_GCC*_*_DLINK_FLAGS = -z common-page-size=0x1000
  GCC:*_CLANGPDB_*_DLINK_FLAGS = /ALIGN:0x1000

[BuildOptions.common.EDKII.DXE_RUNTIME_DRIVER]
  GCC:*_GCC*_ARM_DLINK_FLAGS = -z common-page-size=0x1000
  GCC:*_GCC*_AARCH64_DLINK_FLAGS = -z common-page-size=0x10000
  GCC:*_CLANGPDB_AARCH64_DLINK_FLAGS = /ALIGN:0x10000
  RVCT:*_*_ARM_DLINK_FLAGS = --scatter $(EDK_TOOLS_PATH)/Scripts/Rvct-Align4K.sct

[BuildOptions.AARCH64.EDKII.MM_CORE_STANDALONE,BuildOptions.AARCH64.EDKII.MM_STANDALONE]
  GCC:*_*_*_CC_FLAGS = -mstrict-align -march=armv8-a

[PcdsFeatureFlag.common]

  #MdeModulePkg feature flags
  gEfiMdeModulePkgTokenSpaceGuid.PcdTurnOffUsbLegacySupport|TRUE
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutGopSupport|TRUE
  gEfiMdeModulePkgTokenSpaceGuid.PcdSupportUpdateCapsuleReset|TRUE
  gEmbeddedTokenSpaceGuid.PcdPrePiProduceMemoryTypeInformationHob|TRUE
  # in 202405 or 202502, seems IOMMU implementation had changed
  #gEfiMdeModulePkgTokenSpaceGuid.PcdRequireIommu|FALSE

  gEfiMdePkgTokenSpaceGuid.PcdComponentNameDisable|TRUE
  gEfiMdePkgTokenSpaceGuid.PcdDriverDiagnosticsDisable|TRUE
  gEfiMdePkgTokenSpaceGuid.PcdComponentName2Disable|TRUE
  gEfiMdePkgTokenSpaceGuid.PcdDriverDiagnostics2Disable|TRUE

[PcdsFixedAtBuild.common]

  #MdeModulePkg build time fixed settings.
  gEfiMdeModulePkgTokenSpaceGuid.PcdFirmwareVendor|L"AppleWOA Developer"
  gEfiMdeModulePkgTokenSpaceGuid.PcdFirmwareVersionString|L"1.0" 
  #MdeModulePkg ACPI default settings
  gEfiMdeModulePkgTokenSpaceGuid.PcdAcpiDefaultOemId|"Apple"
  gEfiMdeModulePkgTokenSpaceGuid.PcdAcpiDefaultOemTableId|0x494645454c505041
  gEfiMdeModulePkgTokenSpaceGuid.PcdAcpiDefaultCreatorRevision|0x00000001
  gEfiMdeModulePkgTokenSpaceGuid.PcdAcpiDefaultCreatorId|0x4C505041 #APPL

  gAppleSiliconPkgTokenSpaceGuid.PcdSystemMemoryUefiRegionSize|0x8000000

  #MdePkg fixed build-time settings
  gEfiMdePkgTokenSpaceGuid.PcdMaximumUnicodeStringLength|1000000
  gEfiMdePkgTokenSpaceGuid.PcdMaximumAsciiStringLength|1000000
  gEfiMdePkgTokenSpaceGuid.PcdMaximumLinkedListLength|1000000
  gEfiMdePkgTokenSpaceGuid.PcdDefaultTerminalType|4 #use TTYTERM mode as the default

  #OEM Sample FrontPage
  gEfiMdeModulePkgTokenSpaceGuid.PcdBootManagerMenuFile|{ 0x8A, 0x70, 0x42, 0x40, 0x2D, 0x0F, 0x23, 0x48, 0xAC, 0x60, 0x0D, 0x77, 0xB3, 0x11, 0x18, 0x89 }
  gAppleSiliconPkgTokenSpaceGuid.PcdUIApplicationFile|{ 0x8A, 0x70, 0x42, 0x40, 0x2D, 0x0F, 0x23, 0x48, 0xAC, 0x60, 0x0D, 0x77, 0xB3, 0x11, 0x18, 0x89 }

  #EFI debug settings
  gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x2f
  gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0xFFFFFF4F
  gEfiMdePkgTokenSpaceGuid.PcdUefiLibMaxPrintBufferSize|320
  gEfiMdePkgTokenSpaceGuid.PcdReportStatusCodePropertyMask|0xff
  #gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0x80000002

  #variable size
  gEfiMdeModulePkgTokenSpaceGuid.PcdMaxVariableSize|0x2000
  gEfiMdePkgTokenSpaceGuid.PcdPlatformBootTimeOut|3
  gEfiMdePkgTokenSpaceGuid.PcdUartDefaultBaudRate|115200
  #
  # Make VariableRuntimeDxe work at emulated non-volatile variable mode.
  #
  gEfiMdeModulePkgTokenSpaceGuid.PcdEmuVariableNvModeEnable|TRUE

!if $(SECURE_BOOT_ENABLE) == TRUE
  gEfiMdeModulePkgTokenSpaceGuid.PcdMaxAuthVariableSize|0x2800
  gEfiSecurityPkgTokenSpaceGuid.PcdUserPhysicalPresence|TRUE
!endif

  gPcBdsPkgTokenSpaceGuid.PcdLowResolutionInternalShell|FALSE
  gEfiMdeModulePkgTokenSpaceGuid.PcdPciDisableBusEnumeration|FALSE

!if $(ARCH) == AARCH64
  gArmTokenSpaceGuid.PcdVFPEnabled|1
!endif

  #Debugger control
  DebuggerFeaturePkgTokenSpaceGuid.PcdForceEnableDebugger|FALSE


[PcdsDynamicDefault.common]
  #color bar default settings
  gMsCorePkgTokenSpaceGuid.PcdDeviceStateBitmask|0x0000001F

[PcdsFeatureFlag.AARCH64]
  #
  # Activate AcpiSdtProtocol
  #
  gEfiMdeModulePkgTokenSpaceGuid.PcdInstallAcpiSdtProtocol|TRUE

## Platform-independent libraries
## Most of these are intrinsic to Mu
## mu_andromeda_platforms/mu_tiano_platforms/OnePlus6TPkg used as basis for included libraries

!include MU_BASECORE/MdePkg/MdeLibs.dsc.inc

[LibraryClasses.common]
  DebugLib  |MU_BASECORE/MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
  DebugPrintErrorLevelLib|MU_BASECORE/MdePkg/Library/BaseDebugPrintErrorLevelLib/BaseDebugPrintErrorLevelLib.inf

  ImagePropertiesRecordLib|MU_BASECORE/MdeModulePkg/Library/ImagePropertiesRecordLib/ImagePropertiesRecordLib.inf
  PolicyLib|MU_BASECORE/PolicyServicePkg/Library/DxePolicyLib/DxePolicyLib.inf

  BaseLib|MU_BASECORE/MdePkg/Library/BaseLib/BaseLib.inf
  SafeIntLib|MU_BASECORE/MdePkg/Library/BaseSafeIntLib/BaseSafeIntLib.inf
  BmpSupportLib|MU_BASECORE/MdeModulePkg/Library/BaseBmpSupportLib/BaseBmpSupportLib.inf
  SynchronizationLib|MU_BASECORE/MdePkg/Library/BaseSynchronizationLib/BaseSynchronizationLib.inf
  PerformanceLib|MU_BASECORE/MdePkg/Library/BasePerformanceLibNull/BasePerformanceLibNull.inf
  PrintLib|MU_BASECORE/MdePkg/Library/BasePrintLib/BasePrintLib.inf
  PeCoffGetEntryPointLib|MU_BASECORE/MdePkg/Library/BasePeCoffGetEntryPointLib/BasePeCoffGetEntryPointLib.inf
  PeCoffLib|MU_BASECORE/MdePkg/Library/BasePeCoffLib/BasePeCoffLib.inf
  IoLib|MU_BASECORE/MdePkg/Library/BaseIoLibIntrinsic/BaseIoLibIntrinsicArmVirt.inf
  UefiDecompressLib|MU_BASECORE/MdePkg/Library/BaseUefiDecompressLib/BaseUefiDecompressLib.inf
  CpuLib|MU_BASECORE/MdePkg/Library/BaseCpuLib/BaseCpuLib.inf

  UefiLib|MU_BASECORE/MdePkg/Library/UefiLib/UefiLib.inf
  #
  # Unsure why we're relying on the one meant for hypervisors but leaving in case we need to revert.
  #
  #HobLib|ArmVirtPkg/Library/ArmVirtDxeHobLib/ArmVirtDxeHobLib.inf
  HobLib|MU_BASECORE/MdePkg/Library/DxeHobLib/DxeHobLib.inf
  UefiRuntimeServicesTableLib|MU_BASECORE/MdePkg/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib.inf
  DevicePathLib  |MU_BASECORE/MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib.inf
  UefiBootServicesTableLib|MU_BASECORE/MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib.inf
  DxeServicesTableLib|MU_BASECORE/MdePkg/Library/DxeServicesTableLib/DxeServicesTableLib.inf
  DxeServicesLib|MU_BASECORE/MdePkg/Library/DxeServicesLib/DxeServicesLib.inf
  UefiDriverEntryPoint|MU_BASECORE/MdePkg/Library/UefiDriverEntryPoint/UefiDriverEntryPoint.inf
  UefiApplicationEntryPoint|MU_BASECORE/MdePkg/Library/UefiApplicationEntryPoint/UefiApplicationEntryPoint.inf
  HiiLib|MU_BASECORE/MdeModulePkg/Library/UefiHiiLib/UefiHiiLib.inf
  UefiHiiServicesLib|MU_BASECORE/MdeModulePkg/Library/UefiHiiServicesLib/UefiHiiServicesLib.inf
  SortLib|MU_BASECORE/MdeModulePkg/Library/UefiSortLib/UefiSortLib.inf
  ShellLib|MU_BASECORE/ShellPkg/Library/UefiShellLib/UefiShellLib.inf
  ShellCEntryLib|MU_BASECORE/ShellPkg/Library/UefiShellCEntryLib/UefiShellCEntryLib.inf
  FileHandleLib|MU_BASECORE/MdePkg/Library/UefiFileHandleLib/UefiFileHandleLib.inf

  UefiRuntimeLib|MU_BASECORE/MdePkg/Library/UefiRuntimeLib/UefiRuntimeLib.inf
  OrderedCollectionLib|MU_BASECORE/MdePkg/Library/BaseOrderedCollectionRedBlackTreeLib/BaseOrderedCollectionRedBlackTreeLib.inf

  #
  # Ramdisk Requirements
  #
  FileExplorerLib|MU_BASECORE/MdeModulePkg/Library/FileExplorerLib/FileExplorerLib.inf

  # Allow dynamic PCDs
  #
  PcdLib|MU_BASECORE/MdePkg/Library/DxePcdLib/DxePcdLib.inf

  # use the accelerated BaseMemoryLibOptDxe by default, overrides for SEC/PEI below
  BaseMemoryLib|MU_BASECORE/MdePkg/Library/BaseMemoryLibOptDxe/BaseMemoryLibOptDxe.inf
  # Networking Requirements
# !include MU_BASECORE/NetworkPkg/NetworkLibs.dsc.inc
# !if $(NETWORK_TLS_ENABLE) == TRUE
#   TlsLib|MU_BASECORE/CryptoPkg/Library/TlsLib/TlsLib.inf
# !endif

  NonDiscoverableDeviceRegistrationLib|MU_BASECORE/MdeModulePkg/Library/NonDiscoverableDeviceRegistrationLib/NonDiscoverableDeviceRegistrationLib.inf

  #
  # It is not possible to prevent the ARM compiler from inserting calls to intrinsic functions.
  # This library provides the intrinsic functions such a compiler may generate calls to.
  #
  # NULL|Silicon/ARM/TIANO/ArmPkg/Library/CompilerIntrinsicsLib/CompilerIntrinsicsLib.inf   # MU_CHANGE
  #NULL|MU_BASECORE/MdePkg/Library/CompilerIntrinsicsLib/ArmCompilerIntrinsicsLib.inf  # MU_CHANGE

  # Add support for GCC stack protector
  # Stack cookie support is now upstream in EDK2, so this lib got removed in 202502
  #NULL|MU_BASECORE/MdePkg/Library/BaseStackCheckLib/BaseStackCheckLib.inf

  # ARM Architectural Libraries
  CacheMaintenanceLib|Silicon/ARM/TIANO/ArmPkg/Library/ArmCacheMaintenanceLib/ArmCacheMaintenanceLib.inf
  DefaultExceptionHandlerLib|Silicon/ARM/TIANO/ArmPkg/Library/DefaultExceptionHandlerLib/DefaultExceptionHandlerLib.inf
  CpuExceptionHandlerLib|Silicon/ARM/TIANO/ArmPkg/Library/ArmExceptionLib/ArmExceptionLib.inf
  #
  # Dropped in 202502
  #
  #ArmDisassemblerLib|Silicon/ARM/TIANO/ArmPkg/Library/ArmDisassemblerLib/ArmDisassemblerLib.inf
!if $(AIC_BUILD) == FALSE
  #
  # Recent EDK2 releases have integrated both of these into the ArmGicDxe driver, so
  # the definitions are no longer necessary. The AIC driver will need to go into the same direction soon.
  #
  # TODO: remove definitions of ArmGicLib/ArmGicArchLib, merge AppleAicLib into AppleAicDxe.
  #
  #ArmGicLib  |Silicon/ARM/TIANO/ArmPkg/Drivers/ArmGic/ArmGicLib.inf
  #ArmGicArchLib|Silicon/Apple/AppleSiliconPkg/Library/ArmGicArchLib/ArmGicArchLib.inf
!else
  AppleAicLib  |Silicon/Apple/AppleSiliconPkg/Drivers/AppleAicDxe/AppleAicLib.inf
!endif
  #
  # As of 202405, these libraries no longer reside in ArmPkg and have been moved to MdePkg
  # as part of the effort to make AARCH64 a first class platform in UEFI.
  #
  #
  # ArmHvcLib and ArmSmcLib are no longer used in PSCI reset system, both got consolidated into an
  # ArmMonitorLib and the PCD gArmTokenSpaceGuid.PcdMonitorConduitHvc defines if HVC is the conduit or not
  # (For this project, we're using virtualized/trapped SMCs, the SMC paths in ARM standard code tend to be more tested
  # than the HVC paths)
  #
  ArmMonitorLib|Silicon/ARM/TIANO/ArmPkg/Library/ArmMonitorLib/ArmMonitorLib.inf
  #ArmSmcLib|MU_BASECORE/MdePkg/Library/ArmSmcLib/ArmSmcLib.inf
  #ArmHvcLib|MU_BASECORE/MdePkg/Library/ArmHvcLib/ArmHvcLib.inf

  ArmGenericTimerCounterLib|Silicon/Apple/AppleSiliconPkg/Library/AppleArmGenericTimerPhyCounterLib/AppleArmGenericTimerPhyCounterLib.inf

  # Virtual RTC Driver
  RealTimeClockLib|Common/TIANO/EmbeddedPkg/Library/VirtualRealTimeClockLib/VirtualRealTimeClockLib.inf
  TimeBaseLib|Common/TIANO/EmbeddedPkg/Library/TimeBaseLib/TimeBaseLib.inf


  #
  # Platform specific initialization
  #
  PlatformPeiLib|Silicon/Apple/AppleSiliconPkg/Library/PlatformPeiLib/PlatformPeiLib.inf

  #
  # UART driver.
  #
  SerialPortLib|Silicon/Apple/AppleSiliconPkg/Library/AppleUartSerialPortLib/AppleUartSerialPortLib.inf

  #
  # Could we possibly use this code for potentially interacting with OpenOCD when
  # working on UEFI ports to devices with JTAG able to be enabled? 
  # (Namely T8015-based devices and possibly S8000 ones)
  # 
  #PeCoffExtraActionLib|Silicon/ARM/TIANO/ArmPkg/Library/RvdPeCoffExtraActionLib/RvdPeCoffExtraActionLib.inf
  #PeCoffExtraActionLib|Silicon/ARM/TIANO/ArmPkg/Library/DebugPeCoffExtraActionLib/DebugPeCoffExtraActionLib.inf
  PeCoffExtraActionLib|MU_BASECORE/MdePkg/Library/BasePeCoffExtraActionLibNull/BasePeCoffExtraActionLibNull.inf


  # Debugger Libraries
  DebugTransportLib|mu_feature_debugger/DebuggerFeaturePkg/Library/DebugTransportSerialLib/DebugTransportSerialLib.inf
  WatchdogTimerLib|mu_feature_debugger/DebuggerFeaturePkg/Library/WatchdogTimerLibNull/WatchdogTimerLibNull.inf
  TransportLogControlLib|mu_feature_debugger/DebuggerFeaturePkg/Library/TransportLogControlLibNull/TransportLogControlLibNull.inf

  #DebugAgentLib|MU_BASECORE/MdeModulePkg/Library/DebugAgentLibNull/DebugAgentLibNull.inf
  #DebugAgentTimerLib|Common/TIANO/EmbeddedPkg/Library/DebugAgentTimerLibNull/DebugAgentTimerLibNull.inf

  # Apple Device Tree (ADT) access library
  AppleDTLib|Silicon/Apple/AppleSiliconPkg/Library/AppleDTLib/AppleDTLib.inf


  # USB Libraries
  UefiUsbLib|MU_BASECORE/MdePkg/Library/UefiUsbLib/UefiUsbLib.inf


  #
  # CryptoPkg libraries needed by multiple firmware features
  #
  IntrinsicLib|MU_BASECORE/CryptoPkg/Library/IntrinsicLib/IntrinsicLib.inf
  # OpensslLib|MU_BASECORE/CryptoPkg/Library/OpensslLib/OpensslLibCrypto.inf
  # BaseCryptLib|MU_BASECORE/CryptoPkg/Library/BaseCryptLib/BaseCryptLib.inf
  RngLib|MU_BASECORE/MdePkg/Library/BaseRngLibTimerLib/BaseRngLibTimerLib.inf
  Hash2CryptoLib|Common/TIANO/SecurityPkg/Library/BaseHash2CryptoLibNull/BaseHash2CryptoLibNull.inf

  #
  # Secure Boot dependencies
  #
  SecureBootVariableLib|Common/TIANO/SecurityPkg/Library/SecureBootVariableLib/SecureBootVariableLib.inf
  SecureBootVariableProvisionLib|Common/TIANO/SecurityPkg/Library/SecureBootVariableProvisionLib/SecureBootVariableProvisionLib.inf


  # Security Libraries
  LockBoxLib            |MU_BASECORE/MdeModulePkg/Library/LockBoxNullLib/LockBoxNullLib.inf
  PasswordPolicyLib     |Common/MU_OEM_SAMPLE/OemPkg/Library/PasswordPolicyLib/PasswordPolicyLib.inf
!if $(SECURE_BOOT_ENABLE) == TRUE
  AuthVariableLib|Silicon/Apple/AppleSiliconPkg/Library/AuthVariableLib/AuthVariableLib.inf
  SecureBootKeyStoreLib  |Silicon/Apple/AppleSiliconPkg/Library/SecureBootKeyStoreLib/SecureBootKeyStoreLib.inf
  # re-use the UserPhysicalPresent() dummy implementation from the ovmf tree
  PlatformSecureLib|Silicon/Apple/AppleSiliconPkg/Library/PlatformSecureLib/PlatformSecureLib.inf
!else
  AuthVariableLib|MU_BASECORE/MdeModulePkg/Library/AuthVariableLibNull/AuthVariableLibNull.inf
  SecureBootKeyStoreLib  |Common/MU/MsCorePkg/Library/SecureBootKeyStoreLibNull/SecureBootKeyStoreLibNull.inf
!endif
  PlatformPKProtectionLib|Common/TIANO/SecurityPkg/Library/PlatformPKProtectionLibVarPolicy/PlatformPKProtectionLibVarPolicy.inf
  MuSecureBootKeySelectorLib|Common/MU/MsCorePkg/Library/MuSecureBootKeySelectorLib/MuSecureBootKeySelectorLib.inf


  # Variable Libraries
  VarCheckLib|MU_BASECORE/MdeModulePkg/Library/VarCheckLib/VarCheckLib.inf
  VariablePolicyLib|MU_BASECORE/MdeModulePkg/Library/VariablePolicyLib/VariablePolicyLib.inf
  VariablePolicyHelperLib|MU_BASECORE/MdeModulePkg/Library/VariablePolicyHelperLib/VariablePolicyHelperLib.inf

  # Whea Libraries
  MsWheaEarlyStorageLib |Common/MU/MsWheaPkg/Library/MsWheaEarlyStorageLibNull/MsWheaEarlyStorageLibNull.inf
  MuTelemetryHelperLib  |Common/MU/MsWheaPkg/Library/MuTelemetryHelperLib/MuTelemetryHelperLib.inf

  UefiBootManagerLib|MU_BASECORE/MdeModulePkg/Library/UefiBootManagerLib/UefiBootManagerLib.inf
  ReportStatusCodeLib|MU_BASECORE/MdePkg/Library/BaseReportStatusCodeLibNull/BaseReportStatusCodeLibNull.inf

  # Base ARM libraries
  ArmLib|Silicon/ARM/TIANO/ArmPkg/Library/ArmLib/ArmBaseLib.inf
  ArmMmuLib|Silicon/ARM/TIANO/ArmPkg/Library/ArmMmuLib/ArmMmuBaseLib.inf
  MmuLib|Silicon/ARM/TIANO/ArmPkg/Library/MmuLib/BaseMmuLib.inf
  # this got moved to MdePkg
  ArmSvcLib|MU_BASECORE/MdePkg/Library/ArmSvcLib/ArmSvcLib.inf

  ArmPlatformLib|Silicon/ARM/TIANO/ArmPlatformPkg/Library/ArmPlatformLibNull/ArmPlatformLibNull.inf

  TimerLib|Silicon/ARM/TIANO/ArmPkg/Library/ArmArchTimerLib/ArmArchTimerLib.inf

  CapsuleLib|MU_BASECORE/MdeModulePkg/Library/DxeCapsuleLibNull/DxeCapsuleLibNull.inf
  BootLogoLib|MU_BASECORE/MdeModulePkg/Library/BootLogoLib/BootLogoLib.inf
  PlatformBootManagerLib|Common/MU/MsCorePkg/Library/PlatformBootManagerLib/PlatformBootManagerLib.inf
  #
  # From QemuPkg, might come in handy, might not. (might also be useful for patches?)
  #
  PlatformBmPrintScLib|Silicon/Apple/AppleSiliconPkg/Library/PlatformBmPrintScLib/PlatformBmPrintScLib.inf
  CustomizedDisplayLib|MU_BASECORE/MdeModulePkg/Library/CustomizedDisplayLib/CustomizedDisplayLib.inf
  FrameBufferBltLib|MU_BASECORE/MdeModulePkg/Library/FrameBufferBltLib/FrameBufferBltLib.inf
  FileExplorerLib|MU_BASECORE/MdeModulePkg/Library/FileExplorerLib/FileExplorerLib.inf
  PciSegmentLib|MU_BASECORE/MdePkg/Library/BasePciSegmentLibPci/BasePciSegmentLibPci.inf
  PciLib|MU_BASECORE/MdePkg/Library/BasePciLibPciExpress/BasePciLibPciExpress.inf
  PciExpressLib|MU_BASECORE/MdePkg/Library/BasePciExpressLib/BasePciExpressLib.inf
  #
  # PCIe Host Bridge Library.
  # 
  PciHostBridgeLib|Silicon/Apple/AppleSiliconPkg/Library/AppleSiliconPciHostBridgeLib/AppleSiliconPciHostBridgeLib.inf

  MemoryTypeInformationChangeLib|MU_BASECORE/MdeModulePkg/Library/MemoryTypeInformationChangeLibNull/MemoryTypeInformationChangeLibNull.inf
  # BaseBinSecurityLib|MU_BASECORE/MdePkg/Library/BaseBinSecurityLibNull/BaseBinSecurityLibNull.inf
  DxeMemoryProtectionHobLib|MU_BASECORE/MdeModulePkg/Library/MemoryProtectionHobLib/DxeMemoryProtectionHobLib.inf
  VariableFlashInfoLib|MU_BASECORE/MdeModulePkg/Library/BaseVariableFlashInfoLib/BaseVariableFlashInfoLib.inf
  MemoryTypeInfoSecVarCheckLib|MU_BASECORE/MdeModulePkg/Library/MemoryTypeInfoSecVarCheckLib/MemoryTypeInfoSecVarCheckLib.inf
  SecurityLockAuditLib|MU_BASECORE/MdeModulePkg/Library/SecurityLockAuditDebugMessageLib/SecurityLockAuditDebugMessageLib.inf
  ResetUtilityLib|MU_BASECORE/MdeModulePkg/Library/ResetUtilityLib/ResetUtilityLib.inf
  #
  # ArmSmcPsciResetSystemLib is refactored into a single PSCI reset system lib as of 202502
  HwResetSystemLib|Silicon/ARM/TIANO/ArmPkg/Library/ArmPsciResetSystemLib/ArmPsciResetSystemLib.inf
  ResetSystemLib|MU_BASECORE/MdeModulePkg/Library/DxeResetSystemLib/DxeResetSystemLib.inf
  FltUsedLib|MU_BASECORE/MdePkg/Library/FltUsedLib/FltUsedLib.inf

  # UI and graphics
  FrameBufferMemDrawLib    |Common/MU/MsGraphicsPkg/Library/FrameBufferMemDrawLib/FrameBufferMemDrawLibDxe.inf
  PlatformThemeLib  |Common/MU/MsGraphicsPkg/Library/SamplePlatformThemeLib/PlatformThemeLib.inf

  # DFCI / XML / JSON Libraries
  DfciUiSupportLib                  |Common/MU_DFCI/DfciPkg/Library/DfciUiSupportLibNull/DfciUiSupportLibNull.inf # Supports DFCI Groups.
  DfciV1SupportLib                  |Common/MU_DFCI/DfciPkg/Library/DfciV1SupportLibNull/DfciV1SupportLibNull.inf # Backwards compatibility with DFCI V1 functions.
  DfciDeviceIdSupportLib            |Common/MU_OEM_SAMPLE/OemPkg/Library/DfciDeviceIdSupportLib/DfciDeviceIdSupportLib.inf
  DfciGroupLib                      |Common/MU_DFCI/DfciPkg/Library/DfciGroupLibNull/DfciGroups.inf
  DfciRecoveryLib                   |Common/MU_DFCI/DfciPkg/Library/DfciRecoveryLib/DfciRecoveryLib.inf
   # Zero Touch is part of DFCI
  ZeroTouchSettingsLib              |Common/MU_DFCI/ZeroTouchPkg/Library/ZeroTouchSettings/ZeroTouchSettings.inf
   # Libraries that understands the MsXml Settings Schema and providers helper functions
  DfciXmlIdentitySchemaSupportLib   |Common/MU_DFCI/DfciPkg/Library/DfciXmlIdentitySchemaSupportLib/DfciXmlIdentitySchemaSupportLib.inf
  DfciXmlDeviceIdSchemaSupportLib   |Common/MU_DFCI/DfciPkg/Library/DfciXmlDeviceIdSchemaSupportLib/DfciXmlDeviceIdSchemaSupportLib.inf
  DfciXmlSettingSchemaSupportLib    |Common/MU_DFCI/DfciPkg/Library/DfciXmlSettingSchemaSupportLib/DfciXmlSettingSchemaSupportLib.inf
  DfciXmlPermissionSchemaSupportLib |Common/MU_DFCI/DfciPkg/Library/DfciXmlPermissionSchemaSupportLib/DfciXmlPermissionSchemaSupportLib.inf
  DfciSettingChangedNotificationLib |Common/MU_DFCI/DfciPkg/Library/DfciSettingChangedNotificationLib/DfciSettingChangedNotificationLibNull.inf

   #XML libraries
  XmlTreeQueryLib                   |XmlSupportPkg/Library/XmlTreeQueryLib/XmlTreeQueryLib.inf
  XmlTreeLib                        |XmlSupportPkg/Library/XmlTreeLib/XmlTreeLib.inf
   # Json parser
  JsonLiteParserLib |Common/MU/MsCorePkg/Library/JsonLiteParser/JsonLiteParser.inf

  # TPM Libraries
  # either in 202405 or 202502, Tpm2DebugLib got dropped.

  OemTpm2InitLib          |Common/TIANO/SecurityPkg/Library/OemTpm2InitLibNull/OemTpm2InitLib.inf
  #Tpm2DebugLib            |Common/TIANO/SecurityPkg/Library/Tpm2DebugLib/Tpm2DebugLibNull.inf
  Tpm12CommandLib         |Common/TIANO/SecurityPkg/Library/Tpm12CommandLib/Tpm12CommandLib.inf
  Tpm2CommandLib          |Common/TIANO/SecurityPkg/Library/Tpm2CommandLib/Tpm2CommandLib.inf
  Tpm2DeviceLib           |Common/TIANO/SecurityPkg/Library/Tpm2DeviceLibTcg2/Tpm2DeviceLibTcg2.inf
  Tcg2PpVendorLib         |Common/TIANO/SecurityPkg/Library/Tcg2PpVendorLibNull/Tcg2PpVendorLibNull.inf
  TpmMeasurementLib       |MU_BASECORE/MdeModulePkg/Library/TpmMeasurementLibNull/TpmMeasurementLibNull.inf
  Tcg2PhysicalPresenceLib |Silicon/Apple/AppleSiliconPkg/Library/Tcg2PhysicalPresenceLibNull/DxeTcg2PhysicalPresenceLib.inf
!if $(TPM_ENABLE) == TRUE
  Tcg2PhysicalPresenceLib |Silicon/Apple/AppleSiliconPkg/Library/Tcg2PhysicalPresenceLibQemu/DxeTcg2PhysicalPresenceLib.inf
  TpmMeasurementLib       |Common/TIANO/SecurityPkg/Library/DxeTpmMeasurementLib/DxeTpmMeasurementLib.inf
  #Tpm2DebugLib            |Common/TIANO/SecurityPkg/Library/Tpm2DebugLib/Tpm2DebugLibSimple.inf
!endif

  AdvancedLoggerAccessLib |Common/MU/AdvLoggerPkg/Library/AdvancedLoggerAccessLib/AdvancedLoggerAccessLib.inf

  #
  # In 202502, ArmPlatformStackLib got dropped.
  #
  #ArmPlatformStackLib|Silicon/ARM/TIANO/ArmPlatformPkg/Library/ArmPlatformStackLib/ArmPlatformStackLib.inf
  PrePiHobListPointerLib|Silicon/ARM/TIANO/ArmPlatformPkg/Library/PrePiHobListPointerLib/PrePiHobListPointerLib.inf

  SynchronizationLib|MU_BASECORE/MdePkg/Library/BaseSynchronizationLib/BaseSynchronizationLib.inf
  BaseSynchronizationLib|MU_BASECORE/MdePkg/Library/BaseSynchronizationLib/BaseSynchronizationLib.inf
  CompilerIntrinsicsLib|MU_BASECORE/MdePkg/Library/CompilerIntrinsicsLib/CompilerIntrinsicsLib.inf  # MU_CHANGE
  UefiDevicePathLib|MU_BASECORE/MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib.inf
  UefiScsiLib|MU_BASECORE/MdePkg/Library/UefiScsiLib/UefiScsiLib.inf

  CapsulePersistLib|MU_BASECORE/MdeModulePkg/Library/CapsulePersistLibNull/CapsulePersistLibNull.inf      ## MU_CHANGE
  LzmaDecompressLib|MU_BASECORE/MdeModulePkg/Library/LzmaCustomDecompressLib/LzmaCustomDecompressLib.inf
  OemHookStatusCodeLib|MU_BASECORE/MdeModulePkg/Library/OemHookStatusCodeLibNull/OemHookStatusCodeLibNull.inf
  PcdDatabaseLoaderLib|MU_BASECORE/MdeModulePkg/Library/PcdDatabaseLoaderLib/Dxe/PcdDatabaseLoaderLibDxe.inf

  DfciSettingsLib|Common/MU_DFCI/DfciPkg/Library/DfciSettingsLib/DfciSettingsLib.inf

  #
  # PCI host bridge driver requires the IoMmuLib.
  # We're specifying the NULL one for now, but note that we will need to change this 
  # when DART support is added
  #
  IoMmuLib|MU_BASECORE/MdeModulePkg/Library/IoMmuLibNull/IoMmuLibNull.inf

  DpcLib|MU_BASECORE/NetworkPkg/Library/DxeDpcLib/DxeDpcLib.inf
  HttpLib|MU_BASECORE/NetworkPkg/Library/DxeHttpLib/DxeHttpLib.inf
  IpIoLib|MU_BASECORE/NetworkPkg/Library/DxeIpIoLib/DxeIpIoLib.inf
  NetLib|MU_BASECORE/NetworkPkg/Library/DxeNetLib/DxeNetLib.inf
  UdpIoLib|MU_BASECORE/NetworkPkg/Library/DxeUdpIoLib/DxeUdpIoLib.inf

  DtPlatformDtbLoaderLib|Common/TIANO/EmbeddedPkg/Library/DxeDtPlatformDtbLoaderLibDefault/DxeDtPlatformDtbLoaderLibDefault.inf
  ExtractGuidedSectionLib|Common/TIANO/EmbeddedPkg/Library/PrePiExtractGuidedSectionLib/PrePiExtractGuidedSectionLib.inf
  PrePiLib|Common/TIANO/EmbeddedPkg/Library/PrePiLib/PrePiLib.inf

  FmpAuthenticationLib|Common/TIANO/SecurityPkg/Library/FmpAuthenticationLibPkcs7/FmpAuthenticationLibPkcs7.inf

  MsSecureBootModeSettingLib|Common/MU_OEM_SAMPLE/OemPkg/Library/MsSecureBootModeSettingLib/MsSecureBootModeSettingLib.inf
  UpdateFacsHardwareSignatureLib|Common/MU_OEM_SAMPLE/OemPkg/Library/UpdateFacsHardwareSignatureLib/UpdateFacsHardwareSignatureLib.inf

  # Services tables/Entry points
  RegisterFilterLib           |MU_BASECORE/MdePkg/Library/RegisterFilterLibNull/RegisterFilterLibNull.inf


[LibraryClasses.common.SEC]

  HobLib|Common/TIANO/EmbeddedPkg/Library/PrePiHobLib/PrePiHobLib.inf
  MemoryAllocationLib|Common/TIANO/EmbeddedPkg/Library/PrePiMemoryAllocationLib/PrePiMemoryAllocationLib.inf
  PrePiHobListPointerLib|Silicon/ARM/TIANO/ArmPlatformPkg/Library/PrePiHobListPointerLib/PrePiHobListPointerLib.inf
  PcdLib|MU_BASECORE/MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
  BaseMemoryLib  |MU_BASECORE/MdePkg/Library/BaseMemoryLib/BaseMemoryLib.inf
  ArmMmuLib|Silicon/ARM/TIANO/ArmPkg/Library/ArmMmuLib/ArmMmuPeiLib.inf

[LibraryClasses.common.DXE_CORE]

  DebugAgentLib|mu_feature_debugger/DebuggerFeaturePkg/Library/DebugAgent/DebugAgentDxe.inf
  HobLib|MU_BASECORE/MdePkg/Library/DxeCoreHobLib/DxeCoreHobLib.inf
  MemoryAllocationLib|MU_BASECORE/MdeModulePkg/Library/DxeCoreMemoryAllocationLib/DxeCoreMemoryAllocationLib.inf
  DxeCoreEntryPoint|MU_BASECORE/MdePkg/Library/DxeCoreEntryPoint/DxeCoreEntryPoint.inf
  ReportStatusCodeLib|MU_BASECORE/MdeModulePkg/Library/DxeReportStatusCodeLib/DxeReportStatusCodeLib.inf
  ExtractGuidedSectionLib|MU_BASECORE/MdePkg/Library/DxeExtractGuidedSectionLib/DxeExtractGuidedSectionLib.inf
  UefiDecompressLib|MU_BASECORE/MdePkg/Library/BaseUefiDecompressLib/BaseUefiDecompressLib.inf
  PerformanceLib|MU_BASECORE/MdeModulePkg/Library/DxeCorePerformanceLib/DxeCorePerformanceLib.inf

[LibraryClasses.common.UEFI_APPLICATION]
  UefiDecompressLib|MU_BASECORE/MdePkg/Library/BaseUefiDecompressLib/BaseUefiTianoCustomDecompressLib.inf
  PerformanceLib|MU_BASECORE/MdeModulePkg/Library/DxePerformanceLib/DxePerformanceLib.inf
  MemoryAllocationLib|MU_BASECORE/MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf
  HiiLib|MU_BASECORE/MdeModulePkg/Library/UefiHiiLib/UefiHiiLib.inf
  ShellLib|MU_BASECORE/ShellPkg/Library/UefiShellLib/UefiShellLib.inf
  FileHandleLib|MU_BASECORE/MdePkg/Library/UefiFileHandleLib/UefiFileHandleLib.inf
  ReportStatusCodeLib|MU_BASECORE/MdeModulePkg/Library/DxeReportStatusCodeLib/DxeReportStatusCodeLib.inf
  ExtractGuidedSectionLib|MU_BASECORE/MdePkg/Library/DxeExtractGuidedSectionLib/DxeExtractGuidedSectionLib.inf
  CheckHwErrRecHeaderLib|Common/MU/MsWheaPkg/Library/CheckHwErrRecHeaderLib/CheckHwErrRecHeaderLib.inf

!if $(SECURE_BOOT_ENABLE) == 1
  BaseCryptLib|MU_BASECORE/CryptoPkg/Library/BaseCryptLib/BaseCryptLib.inf
!endif


[LibraryClasses.common.DXE_RUNTIME_DRIVER]

  HobLib|MU_BASECORE/MdePkg/Library/DxeHobLib/DxeHobLib.inf
  MemoryAllocationLib|MU_BASECORE/MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf
  ReportStatusCodeLib|MU_BASECORE/MdeModulePkg/Library/DxeReportStatusCodeLib/DxeReportStatusCodeLib.inf
  CapsuleLib|MU_BASECORE/MdeModulePkg/Library/DxeCapsuleLibNull/DxeCapsuleLibNull.inf
  #ArmHvcLib|MU_BASECORE/MdePkg/Library/ArmHvcLib/ArmHvcLib.inf
  #ArmSmcLib|MU_BASECORE/MdePkg/Library/ArmSmcLib/ArmSmcLib.inf
  #
  # ArmHvcLib and ArmSmcLib are no longer used in PSCI reset system, both got consolidated into an
  # ArmMonitorLib and the PCD gArmTokenSpaceGuid.PcdMonitorConduitHvc defines if HVC is the conduit or not
  # (For this project, we're using virtualized/trapped SMCs, the SMC paths in ARM standard code tend to be more tested
  # than the HVC paths)
  #
  ArmMonitorLib|Silicon/ARM/TIANO/ArmPkg/Library/ArmMonitorLib/ArmMonitorLib.inf
!if $(TARGET) != RELEASE
  DebugLib|MU_BASECORE/MdePkg/Library/DxeRuntimeDebugLibSerialPort/DxeRuntimeDebugLibSerialPort.inf
!endif
  ExtractGuidedSectionLib|MU_BASECORE/MdePkg/Library/DxeExtractGuidedSectionLib/DxeExtractGuidedSectionLib.inf

  # System Reset
  HwResetSystemLib|Silicon/ARM/TIANO/ArmPkg/Library/ArmPsciResetSystemLib/ArmPsciResetSystemLib.inf
  ResetSystemLib|MU_BASECORE/MdeModulePkg/Library/RuntimeResetSystemLib/RuntimeResetSystemLib.inf

  VariablePolicyLib|MU_BASECORE/MdeModulePkg/Library/VariablePolicyLib/VariablePolicyLibRuntimeDxe.inf

!if $(SECURE_BOOT_ENABLE) == 1
  BaseCryptLib|MU_BASECORE/CryptoPkg/Library/BaseCryptLib/RuntimeCryptLib.inf
!endif

[LibraryClasses.common.UEFI_DRIVER]

  ReportStatusCodeLib|MU_BASECORE/MdeModulePkg/Library/DxeReportStatusCodeLib/DxeReportStatusCodeLib.inf
  UefiDecompressLib|MU_BASECORE/MdePkg/Library/BaseUefiDecompressLib/BaseUefiTianoCustomDecompressLib.inf
  ExtractGuidedSectionLib|MU_BASECORE/MdePkg/Library/DxeExtractGuidedSectionLib/DxeExtractGuidedSectionLib.inf
  PerformanceLib|MU_BASECORE/MdeModulePkg/Library/DxePerformanceLib/DxePerformanceLib.inf
  MemoryAllocationLib|MU_BASECORE/MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf
  UefiScsiLib|MU_BASECORE/MdePkg/Library/UefiScsiLib/UefiScsiLib.inf
  ExtractGuidedSectionLib|MU_BASECORE/MdePkg/Library/DxeExtractGuidedSectionLib/DxeExtractGuidedSectionLib.inf

!if $(SECURE_BOOT_ENABLE) == 1
  BaseCryptLib|MU_BASECORE/CryptoPkg/Library/BaseCryptLib/BaseCryptLib.inf
!endif
  UefiScsiLib|MU_BASECORE/MdePkg/Library/UefiScsiLib/UefiScsiLib.inf
  ExtractGuidedSectionLib|MU_BASECORE/MdePkg/Library/DxeExtractGuidedSectionLib/DxeExtractGuidedSectionLib.inf
  PerformanceLib|MU_BASECORE/MdeModulePkg/Library/DxePerformanceLib/DxePerformanceLib.inf
  MemoryAllocationLib|MU_BASECORE/MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf


[LibraryClasses.common.DXE_DRIVER]

  ReportStatusCodeLib|MU_BASECORE/MdeModulePkg/Library/DxeReportStatusCodeLib/DxeReportStatusCodeLib.inf
  SecurityManagementLib|MU_BASECORE/MdeModulePkg/Library/DxeSecurityManagementLib/DxeSecurityManagementLib.inf
  PerformanceLib|MU_BASECORE/MdeModulePkg/Library/DxePerformanceLib/DxePerformanceLib.inf
  MemoryAllocationLib|MU_BASECORE/MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf
  HiiLib|MU_BASECORE/MdeModulePkg/Library/UefiHiiLib/UefiHiiLib.inf
  UefiHiiServicesLib|MU_BASECORE/MdeModulePkg/Library/UefiHiiServicesLib/UefiHiiServicesLib.inf
  ExtractGuidedSectionLib|MU_BASECORE/MdePkg/Library/DxeExtractGuidedSectionLib/DxeExtractGuidedSectionLib.inf

!if $(SECURE_BOOT_ENABLE) == 1
  BaseCryptLib|MU_BASECORE/CryptoPkg/Library/BaseCryptLib/BaseCryptLib.inf
!endif


#
# Components to be compiled as part of the package.
#
[Components.common]

  #SEC phase
  Silicon/Apple/AppleSiliconPkg/PrePi/PrePi.inf {
    <LibraryClasses>
    SerialPortLib|Silicon/Apple/AppleSiliconPkg/Library/AppleUartSerialPortLib/AppleUartSerialPortLib.inf
  }

  #
  # DXE Phase (PEI is skipped, as that's effectively done by m1n1 for now)
  #
  # TODO: should we not skip PEI phase?
  #

  MU_BASECORE/MdeModulePkg/Core/Dxe/DxeMain.inf {
    <LibraryClasses>
    NULL|MU_BASECORE/MdeModulePkg/Library/DxeCrc32GuidedSectionExtractLib/DxeCrc32GuidedSectionExtractLib.inf
    NULL|MU_BASECORE/MdeModulePkg/Library/DxeCrc32GuidedSectionExtractLib/DxeCrc32GuidedSectionExtractLib.inf
    NULL|MU_BASECORE/MdeModulePkg/Library/LzmaCustomDecompressLib/LzmaCustomDecompressLib.inf
    DevicePathLib|MU_BASECORE/MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib.inf
    DebugAgentLib|mu_feature_debugger/DebuggerFeaturePkg/Library/DebugAgent/DebugAgentDxe.inf
  }

  #
  # PCD Database.
  #
  # Question: why is the LibraryClass for PCDs being redefined here when
  # DXE supports dynamic PCDs?
  #
  MU_BASECORE/MdeModulePkg/Universal/PCD/Dxe/Pcd.inf {
    <LibraryClasses>
    PcdLib|MU_BASECORE/MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
  }


  # Processor Core Services
  Silicon/ARM/TIANO/ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  Silicon/ARM/TIANO/ArmPkg/Drivers/TimerDxe/TimerDxe.inf
!if $(AIC_BUILD) == FALSE
  Silicon/ARM/TIANO/ArmPkg/Drivers/ArmGicDxe/ArmGicDxe.inf {
    <LibraryClasses>
	  ArmGicArchLib|Silicon/Apple/AppleSiliconPkg/Library/ArmGicArchLib/ArmGicArchLib.inf
  }
!else
  Silicon/Apple/AppleSiliconPkg/Drivers/AppleAicDxe/AppleAicDxe.inf
!endif
  MU_BASECORE/MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  Silicon/Apple/AppleSiliconPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  MU_BASECORE/MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  Common/TIANO/EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  MU_BASECORE/MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  Common/TIANO/EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf {
    <LibraryClasses>
	  RealTimeClockLib|Silicon/Apple/AppleSiliconPkg/Library/VirtualRealTimeClockLib/VirtualRealTimeClockLib.inf
  }
  Common/TIANO/EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  Silicon/Apple/AppleSiliconPkg/Drivers/AppleDartIoMmuDxe/AppleDartIoMmuDxe.inf

  # Fake Variable Services
  MU_BASECORE/MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

  # Security Stub
  MU_BASECORE/MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf {
    <LibraryClasses>
!if $(SECURE_BOOT_ENABLE) == 1
      NULL|Common/TIANO/SecurityPkg/Library/DxeImageVerificationLib/DxeImageVerificationLib.inf
!endif
!if $(TPM2_ENABLE) == TRUE
      NULL|Common/TIANO/SecurityPkg/Library/DxeTpm2MeasureBootLib/DxeTpm2MeasureBootLib.inf
!endif
  }
!if $(SECURE_BOOT_ENABLE) == TRUE
  Common/TIANO/SecurityPkg/VariableAuthenticated/SecureBootConfigDxe/SecureBootConfigDxe.inf
  #Silicon/Apple/AppleSiliconPkg/Driver/SecureBootProvisioningDxe/SecureBootProvisioningDxe.inf
!endif

  Common/MU/MsCorePkg/MuVarPolicyFoundationDxe/MuVarPolicyFoundationDxe.inf

  #
  # DWC3 bringup module
  #
  Silicon/Apple/AppleSiliconPkg/Drivers/AppleUsbTypeCBringupDxe/AppleUsbTypeCBringupDxe.inf

  #
  # Generic ACPI tables. (Basically just GTDT)
  #
  Silicon/Apple/AppleSiliconPkg/AcpiTables/GenericAcpiTables.inf

  # BDS
  MU_BASECORE/MdeModulePkg/Universal/DisplayEngineDxe/DisplayEngineDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/Console/TerminalDxe/TerminalDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/SerialDxe/SerialDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf {
    <LibraryClasses>
      DevicePathLib|MU_BASECORE/MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib.inf
      PcdLib|MU_BASECORE/MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
  }
  MU_BASECORE/MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/SmbiosDxe/SmbiosDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/SetupBrowserDxe/SetupBrowserDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/DriverHealthManagerDxe/DriverHealthManagerDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  #
  # Status Code Routing
  #
  MU_BASECORE/MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf

  # HID Support
  Common/MU/HidPkg/HidKeyboardDxe/HidKeyboardDxe.inf
  Common/MU/HidPkg/HidMouseAbsolutePointerDxe/HidMouseAbsolutePointerDxe.inf
  # Rng Protocol producer
  Common/TIANO/SecurityPkg/RandomNumberGenerator/RngDxe/RngDxe.inf

  # Disk IO
  #TODO: ANS2/SART drivers 
  MU_BASECORE/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf
  Common/TIANO/FatPkg/EnhancedFatDxe/Fat.inf
  MU_BASECORE/MdeModulePkg/Bus/Scsi/ScsiBusDxe/ScsiBusDxe.inf
  MU_BASECORE/MdeModulePkg/Bus/Scsi/ScsiDiskDxe/ScsiDiskDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/Disk/UdfDxe/UdfDxe.inf
  #MU_BASECORE/MdeModulePkg/Bus/Pci/NvmExpressDxe/NvmExpressDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/Disk/RamDiskDxe/RamDiskDxe.inf
  Silicon/Apple/AppleSiliconPkg/Drivers/BootRamdiskHelperDxe/BootRamdiskHelperDxe.inf

  # USB
  MU_BASECORE/MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  MU_BASECORE/MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf
  MU_BASECORE/MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  MU_BASECORE/MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  MU_BASECORE/MdeModulePkg/Bus/Pci/UhciDxe/UhciDxe.inf
  MU_BASECORE/MdeModulePkg/Bus/Pci/EhciDxe/EhciDxe.inf
  MU_BASECORE/MdeModulePkg/Bus/Pci/XhciDxe/XhciDxe.inf

  # DT
  Common/TIANO/EmbeddedPkg/Drivers/DtPlatformDxe/DtPlatformDxe.inf

  Common/TIANO/EmbeddedPkg/Drivers/VirtualKeyboardDxe/VirtualKeyboardDxe.inf

  #
  # ACPI Support
  #
  MU_BASECORE/MdeModulePkg/Universal/Acpi/BootGraphicsResourceTableDxe/BootGraphicsResourceTableDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/Acpi/FirmwarePerformanceDataTableDxe/FirmwarePerformanceDxe.inf
  MU_BASECORE/MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  Common/MU/MsCorePkg/Universal/StatusCodeHandler/Serial/Dxe/SerialStatusCodeHandlerDxe.inf
  Common/TIANO/EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  #
  # SMBIOS information
  #
  Silicon/Apple/AppleSiliconPkg/Drivers/SmbiosInfoDxe/SmbiosInfoDxe.inf

  MU_BASECORE/MdeModulePkg/Universal/Acpi/AcpiTableDxe/AcpiTableDxe.inf
  Silicon/Apple/AppleSiliconPkg/Drivers/AcpiPlatformDxe/AcpiPlatformDxe.inf
  #Common/MU/MsCorePkg/MuCryptoDxe/MuCryptoDxe.inf
  #MU_BASECORE/CryptoPkg/Driver/CryptoDxe.inf
  #
  # EBC support
  #
  MU_BASECORE/MdeModulePkg/Universal/EbcDxe/EbcDxe.inf

  Silicon/Apple/AppleSiliconPkg/Drivers/ColorbarsDxe/ColorbarsDxe.inf

  Common/MU/AdvLoggerPkg/AdvancedFileLogger/AdvancedFileLogger.inf
  MU_BASECORE/MdeModulePkg/Universal/MemoryTest/NullMemoryTestDxe/NullMemoryTestDxe.inf

  #
  # PCI support
  #
  Silicon/ARM/TIANO/ArmPkg/Drivers/ArmPciCpuIo2Dxe/ArmPciCpuIo2Dxe.inf
  MU_BASECORE/MdeModulePkg/Bus/Pci/PciHostBridgeDxe/PciHostBridgeDxe.inf
  MU_BASECORE/MdeModulePkg/Bus/Pci/PciBusDxe/PciBusDxe.inf
  MU_BASECORE/MdeModulePkg/Bus/Pci/NonDiscoverablePciDeviceDxe/NonDiscoverablePciDeviceDxe.inf
  #
  # Temporary hack: disable PCIe support while debugging why the ASMedia controller isn't working
  #
  Silicon/Apple/AppleSiliconPkg/Drivers/AppleSiliconPciPlatformDxe/AppleSiliconPciPlatformDxe.inf
  Silicon/Apple/AppleSiliconPkg/Drivers/AppleEmbeddedGpioControllerDxe/AppleEmbeddedGpioControllerDxe.inf