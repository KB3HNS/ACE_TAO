# Microsoft Developer Studio Project File - Name="RTCosScheduling_Server" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=RTCosScheduling_Server - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE run the tool that generated this project file and specify the
!MESSAGE nmake output type.  You can then use the following command:
!MESSAGE
!MESSAGE NMAKE /f "RTCosScheduling_Server.mak".
!MESSAGE
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE
!MESSAGE NMAKE /f "RTCosScheduling_Server.mak" CFG="RTCosScheduling_Server - Win32 Debug"
!MESSAGE
!MESSAGE Possible choices for configuration are:
!MESSAGE
!MESSAGE "RTCosScheduling_Server - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "RTCosScheduling_Server - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "RTCosScheduling_Server - Win32 Release"

# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release\RTCosScheduling_Server"
# PROP Target_Dir ""
# ADD CPP /nologo /O2 /W3 /GX /MD /GR /I "../../../" /I "../../../tao" /I "..\..\..\.." /I "..\..\..\orbsvcs" /D NDEBUG /D WIN32 /D _CONSOLE /FD /c
# SUBTRACT CPP /YX
# ADD RSC /l 0x409 /d NDEBUG /i "../../../" /i "../../../tao" /i "..\..\..\.."
BSC32=bscmake.exe
# ADD BSC32 /nologo 
LINK32=link.exe
# ADD LINK32 advapi32.lib user32.lib /INCREMENTAL:NO TAO_RTCosScheduling.lib TAO_RTPortableServer.lib TAO_RTCORBA.lib TAO_PortableServer.lib TAO_IORInterceptor.lib TAO_Valuetype.lib TAO_ObjRefTemplate.lib TAO.lib ACE.lib /libpath:"..\..\..\..\lib" /libpath:"..\..\..\tao\RTPortableServer" /libpath:"..\..\..\tao\RTCORBA" /libpath:"..\..\..\tao\PortableServer" /libpath:"..\..\..\tao\IORInterceptor" /libpath:"..\..\..\tao\ValueType" /libpath:"..\..\..\tao\ObjRefTemplate" /libpath:"..\..\..\tao" /libpath:"..\..\..\..\ace" /libpath:"..\..\orbsvcs" /nologo /version:1.3.4 /subsystem:console /pdb:"Release\server.pdb"  /machine:I386 /out:"Release\server.exe"

!ELSEIF  "$(CFG)" == "RTCosScheduling_Server - Win32 Debug"

# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "."
# PROP Intermediate_Dir "Debug\RTCosScheduling_Server"
# PROP Target_Dir ""
# ADD CPP /nologo /Ob0 /W3 /Gm /GX /Zi /MDd /GR /Gy /I "../../../" /I "../../../tao" /I "..\..\..\orbsvcs" /I "..\..\..\.." /D _DEBUG /D WIN32 /D _CONSOLE /FD /c
# SUBTRACT CPP /YX
# ADD RSC /l 0x409 /d _DEBUG /i "../../../" /i "../../../tao" /i "..\..\..\.."
BSC32=bscmake.exe
# ADD BSC32 /nologo 
LINK32=link.exe
# ADD LINK32 advapi32.lib user32.lib TAO_RTCosSchedulingd.lib TAO_RTPortableServerd.lib TAO_RTCORBAd.lib TAO_PortableServerd.lib TAO_IORInterceptord.lib TAO_Valuetyped.lib TAO_ObjRefTemplated.lib TAOd.lib ACEd.lib /nologo /subsystem:console /debug /machine:I386 /out:".\server.exe" /libpath:"..\..\..\lib" /libpath:"..\..\..\tao\RTPortableServer" /libpath:"..\..\..\tao\RTCORBA" /libpath:"..\..\..\tao\PortableServer" /libpath:"..\..\..\tao\IORInterceptor" /libpath:"..\..\..\tao\ValueType" /libpath:"..\..\..\tao\ObjRefTemplate" /libpath:"..\..\..\tao" /libpath:"..\..\..\..\ace" /libpath:"..\..\orbsvcs" /version:1.3.4

!ENDIF

# Begin Target

# Name "RTCosScheduling_Server - Win32 Release"
# Name "RTCosScheduling_Server - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;cxx;c"
# Begin Source File

SOURCE=".\Object1_i.cpp"
# End Source File
# Begin Source File

SOURCE=".\server.cpp"
# End Source File
# Begin Source File

SOURCE=".\testSchedC.cpp"
# End Source File
# Begin Source File

SOURCE=".\testSchedS.cpp"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hh"
# Begin Source File

SOURCE=".\Object1_i.h"
# End Source File
# Begin Source File

SOURCE=".\testSchedC.h"
# End Source File
# Begin Source File

SOURCE=".\testSchedS.h"
# End Source File
# End Group
# Begin Group "Inline Files"

# PROP Default_Filter "i;inl"
# Begin Source File

SOURCE=".\testSchedC.i"
# End Source File
# Begin Source File

SOURCE=".\testSchedS.i"
# End Source File
# End Group
# Begin Group "Documentation"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\README"
# End Source File
# End Group
# Begin Group "IDL Files"

# PROP Default_Filter "idl"
# Begin Source File

SOURCE=".\testSched.idl"

!IF  "$(CFG)" == "RTCosScheduling_Server - Win32 Release"

# PROP Ignore_Default_Tool 1
# Begin Custom Build - Invoking IDL Compiler on $(InputPath)
InputPath=.\testSched.idl
InputName=testSched
InputDir=.

BuildCmds= \
	PATH=%PATH%;..\..\..\..\lib \
	..\..\..\..\bin\Release\tao_idl -o . -Ge 1 -Sc -Wb,pre_include=ace\pre.h -Wb,post_include=ace\post.h -Gv $(InputPath)

".\$(InputName)C.h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

".\$(InputName)C.i" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

".\$(InputName)C.cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

".\$(InputName)S.h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

".\$(InputName)S.i" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

".\$(InputName)S.cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

# End Custom Build

!ELSEIF  "$(CFG)" == "RTCosScheduling_Server - Win32 Debug"

# PROP Ignore_Default_Tool 1
# Begin Custom Build - Invoking IDL Compiler on $(InputPath)
InputPath=.\testSched.idl
InputName=testSched
InputDir=.

BuildCmds= \
	PATH=%PATH%;..\..\..\..\lib \
	..\..\..\..\bin\tao_idl -o . -Ge 1 -Sc -Wb,pre_include=ace\pre.h -Wb,post_include=ace\post.h -Gv $(InputPath)

".\$(InputName)C.h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

".\$(InputName)C.i" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

".\$(InputName)C.cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

".\$(InputName)S.h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

".\$(InputName)S.i" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

".\$(InputName)S.cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

# End Custom Build

!ENDIF

# End Source File
# End Group
# End Target
# End Project
