APRIORI DXE {
  INF MU_BASECORE/MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MU_BASECORE/MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF Silicon/ARM/TIANO/ArmPkg/Drivers/CpuDxe/CpuDxe.inf
!if $(AIC_BUILD) == FALSE
  INF Silicon/ARM/TIANO/ArmPkg/Drivers/ArmGicDxe/ArmGicDxe.inf
!else 
  INF Silicon/Apple/AppleSiliconPkg/Drivers/AppleAicDxe/AppleAicDxe.inf
!endif
  INF Common/TIANO/EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF Silicon/ARM/TIANO/ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  INF MU_BASECORE/MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MU_BASECORE/MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MU_BASECORE/MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
  INF Silicon/Apple/AppleSiliconPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
  INF MU_BASECORE/MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MU_BASECORE/MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MU_BASECORE/MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  INF Silicon/Apple/AppleSiliconPkg/Drivers/AppleDartIoMmuDxe/AppleDartIoMmuDxe.inf
  INF Silicon/Apple/AppleSiliconPkg/Drivers/AppleEmbeddedGpioControllerDxe/AppleEmbeddedGpioControllerDxe.inf
  #
  # Temporary hack: disable PCIe support while debugging why the ASMedia controller isn't working
  #
  INF Silicon/Apple/AppleSiliconPkg/Drivers/AppleSiliconPciPlatformDxe/AppleSiliconPciPlatformDxe.inf
  INF Silicon/Apple/AppleSiliconPkg/Drivers/AppleUsbTypeCBringupDxe/AppleUsbTypeCBringupDxe.inf
}