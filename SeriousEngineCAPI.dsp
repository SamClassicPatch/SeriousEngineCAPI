# Microsoft Developer Studio Project File - Name="SeriousEngineCAPI" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=SeriousEngineCAPI - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "SeriousEngineCAPI.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "SeriousEngineCAPI.mak" CFG="SeriousEngineCAPI - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "SeriousEngineCAPI - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "SeriousEngineCAPI - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "SeriousEngineCAPI - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "SERIOUSENGINECAPI_EXPORTS" /YX /FD /c
# ADD CPP /nologo /G5 /MD /W3 /GX /Ox /Ot /Og /Oi /Oy- /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "SERIOUSENGINECAPI_EXPORTS" /YX /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386
# ADD LINK32 Engine.lib /nologo /dll /machine:I386

!ELSEIF  "$(CFG)" == "SeriousEngineCAPI - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "SERIOUSENGINECAPI_EXPORTS" /YX /FD /GZ /c
# ADD CPP /nologo /G5 /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "SERIOUSENGINECAPI_EXPORTS" /YX /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "SeriousEngineCAPI - Win32 Release"
# Name "SeriousEngineCAPI - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Group "Base"

# PROP Default_Filter "h"
# Begin Source File

SOURCE=.\Base\Anim.cpp
# End Source File
# Begin Source File

SOURCE=.\Base\Anim.h
# End Source File
# Begin Source File

SOURCE=.\Base\Changeable.cpp
# End Source File
# Begin Source File

SOURCE=.\Base\Changeable.h
# End Source File
# Begin Source File

SOURCE=.\Base\CTString.cpp
# End Source File
# Begin Source File

SOURCE=.\Base\CTString.h
# End Source File
# Begin Source File

SOURCE=.\Base\Exception.cpp
# End Source File
# Begin Source File

SOURCE=.\Base\FileName.cpp
# End Source File
# Begin Source File

SOURCE=.\Base\FileName.h
# End Source File
# Begin Source File

SOURCE=.\Base\Lists.cpp
# End Source File
# Begin Source File

SOURCE=.\Base\Lists.h
# End Source File
# Begin Source File

SOURCE=.\Base\Serial.cpp
# End Source File
# Begin Source File

SOURCE=.\Base\Serial.h
# End Source File
# Begin Source File

SOURCE=.\Base\Stream.cpp
# End Source File
# Begin Source File

SOURCE=.\Base\Stream.h
# End Source File
# Begin Source File

SOURCE=.\Base\Synchronization.cpp
# End Source File
# Begin Source File

SOURCE=.\Base\Synchronization.h
# End Source File
# Begin Source File

SOURCE=.\Base\Timer.cpp
# End Source File
# Begin Source File

SOURCE=.\Base\Timer.h
# End Source File
# Begin Source File

SOURCE=.\Base\Translation.cpp
# End Source File
# Begin Source File

SOURCE=.\Base\Translation.h
# End Source File
# Begin Source File

SOURCE=.\Base\TranslationPair.cpp
# End Source File
# Begin Source File

SOURCE=.\Base\TranslationPair.h
# End Source File
# Begin Source File

SOURCE=.\Base\Types.h
# End Source File
# Begin Source File

SOURCE=.\Base\Updateable.cpp
# End Source File
# Begin Source File

SOURCE=.\Base\Updateable.h
# End Source File
# End Group
# Begin Group "Math"

# PROP Default_Filter "h"
# Begin Source File

SOURCE=.\Math\AABBox.cpp
# End Source File
# Begin Source File

SOURCE=.\Math\AABBox.h
# End Source File
# Begin Source File

SOURCE=.\Math\Matrix.cpp
# End Source File
# Begin Source File

SOURCE=.\Math\Matrix.h
# End Source File
# Begin Source File

SOURCE=.\Math\OBBox.cpp
# End Source File
# Begin Source File

SOURCE=.\Math\OBBox.h
# End Source File
# Begin Source File

SOURCE=.\Math\Object3D.h
# End Source File
# Begin Source File

SOURCE=.\Math\Placement.cpp
# End Source File
# Begin Source File

SOURCE=.\Math\Placement.h
# End Source File
# Begin Source File

SOURCE=.\Math\Plane.cpp
# End Source File
# Begin Source File

SOURCE=.\Math\Plane.h
# End Source File
# Begin Source File

SOURCE=.\Math\Projection.cpp
# End Source File
# Begin Source File

SOURCE=.\Math\Projection.h
# End Source File
# Begin Source File

SOURCE=.\Math\Quaternion.cpp
# End Source File
# Begin Source File

SOURCE=.\Math\Quaternion.h
# End Source File
# Begin Source File

SOURCE=.\Math\TextureMapping.cpp
# End Source File
# Begin Source File

SOURCE=.\Math\TextureMapping.h
# End Source File
# Begin Source File

SOURCE=.\Math\Vector.cpp
# End Source File
# Begin Source File

SOURCE=.\Math\Vector.h
# End Source File
# End Group
# Begin Group "Templates"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\Templates\DynamicArray.cpp
# End Source File
# Begin Source File

SOURCE=.\Templates\DynamicArray.h
# End Source File
# Begin Source File

SOURCE=.\Templates\DynamicStackArray.cpp
# End Source File
# Begin Source File

SOURCE=.\Templates\DynamicStackArray.h
# End Source File
# Begin Source File

SOURCE=.\Templates\StaticArray.cpp
# End Source File
# Begin Source File

SOURCE=.\Templates\StaticArray.h
# End Source File
# Begin Source File

SOURCE=.\Templates\StaticStackArray.cpp
# End Source File
# Begin Source File

SOURCE=.\Templates\StaticStackArray.h
# End Source File
# Begin Source File

SOURCE=.\Templates\Stock_CAnimData.cpp
# End Source File
# Begin Source File

SOURCE=.\Templates\Stock_CAnimData.h
# End Source File
# Begin Source File

SOURCE=.\Templates\Stock_CModelData.cpp
# End Source File
# Begin Source File

SOURCE=.\Templates\Stock_CModelData.h
# End Source File
# Begin Source File

SOURCE=.\Templates\Stock_CSoundData.cpp
# End Source File
# Begin Source File

SOURCE=.\Templates\Stock_CSoundData.h
# End Source File
# Begin Source File

SOURCE=.\Templates\Stock_CTextureData.cpp
# End Source File
# Begin Source File

SOURCE=.\Templates\Stock_CTextureData.h
# End Source File
# End Group
# Begin Group "Graphics"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\Graphics\DrawPort.cpp
# End Source File
# Begin Source File

SOURCE=.\Graphics\DrawPort.h
# End Source File
# Begin Source File

SOURCE=.\Graphics\Font.cpp
# End Source File
# Begin Source File

SOURCE=.\Graphics\Font.h
# End Source File
# Begin Source File

SOURCE=.\Graphics\ImageInfo.cpp
# End Source File
# Begin Source File

SOURCE=.\Graphics\ImageInfo.h
# End Source File
# Begin Source File

SOURCE=.\Graphics\Raster.cpp
# End Source File
# Begin Source File

SOURCE=.\Graphics\Raster.h
# End Source File
# Begin Source File

SOURCE=.\Graphics\Texture.cpp
# End Source File
# Begin Source File

SOURCE=.\Graphics\Texture.h
# End Source File
# Begin Source File

SOURCE=.\Graphics\ViewPort.cpp
# End Source File
# Begin Source File

SOURCE=.\Graphics\ViewPort.h
# End Source File
# End Group
# Begin Group "Models"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\Models\Model_internal.cpp
# End Source File
# Begin Source File

SOURCE=.\Models\Model_internal.h
# End Source File
# Begin Source File

SOURCE=.\Models\ModelData.cpp
# End Source File
# Begin Source File

SOURCE=.\Models\ModelData.h
# End Source File
# Begin Source File

SOURCE=.\Models\ModelObject.cpp
# End Source File
# Begin Source File

SOURCE=.\Models\ModelObject.h
# End Source File
# Begin Source File

SOURCE=.\Models\RenderModel.cpp
# End Source File
# Begin Source File

SOURCE=.\Models\RenderModel.h
# End Source File
# End Group
# Begin Group "Sound"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\Sound\SoundData.cpp
# End Source File
# Begin Source File

SOURCE=.\Sound\SoundData.h
# End Source File
# Begin Source File

SOURCE=.\Sound\SoundObject.cpp
# End Source File
# Begin Source File

SOURCE=.\Sound\SoundObject.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\Engine.cpp
# End Source File
# Begin Source File

SOURCE=.\Engine.h
# End Source File
# Begin Source File

SOURCE=.\EngineGUI.h
# End Source File
# End Group
# End Target
# End Project
