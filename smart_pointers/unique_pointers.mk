##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=unique_pointers
ConfigurationName      :=Debug
WorkspacePath          :=/home/suhas/cpp_programming
ProjectPath            :=/home/suhas/cpp_programming/smart_pointers
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=suhas
Date                   :=04/08/20
CodeLitePath           :=/home/suhas/.codelite
LinkerName             :=/usr/bin/g++-7
SharedObjectLinkerName :=/usr/bin/g++-7 -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="unique_pointers.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++-7
CC       := /usr/bin/gcc-7
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/up_Section17_UniquePointers_main2.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_Section17_UniquePointers_Account_Util.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_Section17_UniquePointers_Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_Section17_UniquePointers_I_Printable.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_Section17_UniquePointers_Savings_Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_Section17_UniquePointers_Checking_Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_Section17_UniquePointers_Trust_Account.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/up_Section17_UniquePointers_main2.cpp$(ObjectSuffix): ../Section17/UniquePointers/main2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_Section17_UniquePointers_main2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_Section17_UniquePointers_main2.cpp$(DependSuffix) -MM ../Section17/UniquePointers/main2.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/Section17/UniquePointers/main2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_Section17_UniquePointers_main2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_Section17_UniquePointers_main2.cpp$(PreprocessSuffix): ../Section17/UniquePointers/main2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_Section17_UniquePointers_main2.cpp$(PreprocessSuffix) ../Section17/UniquePointers/main2.cpp

$(IntermediateDirectory)/up_Section17_UniquePointers_Account_Util.cpp$(ObjectSuffix): ../Section17/UniquePointers/Account_Util.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_Section17_UniquePointers_Account_Util.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_Section17_UniquePointers_Account_Util.cpp$(DependSuffix) -MM ../Section17/UniquePointers/Account_Util.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/Section17/UniquePointers/Account_Util.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_Section17_UniquePointers_Account_Util.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_Section17_UniquePointers_Account_Util.cpp$(PreprocessSuffix): ../Section17/UniquePointers/Account_Util.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_Section17_UniquePointers_Account_Util.cpp$(PreprocessSuffix) ../Section17/UniquePointers/Account_Util.cpp

$(IntermediateDirectory)/up_Section17_UniquePointers_Account.cpp$(ObjectSuffix): ../Section17/UniquePointers/Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_Section17_UniquePointers_Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_Section17_UniquePointers_Account.cpp$(DependSuffix) -MM ../Section17/UniquePointers/Account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/Section17/UniquePointers/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_Section17_UniquePointers_Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_Section17_UniquePointers_Account.cpp$(PreprocessSuffix): ../Section17/UniquePointers/Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_Section17_UniquePointers_Account.cpp$(PreprocessSuffix) ../Section17/UniquePointers/Account.cpp

$(IntermediateDirectory)/up_Section17_UniquePointers_I_Printable.cpp$(ObjectSuffix): ../Section17/UniquePointers/I_Printable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_Section17_UniquePointers_I_Printable.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_Section17_UniquePointers_I_Printable.cpp$(DependSuffix) -MM ../Section17/UniquePointers/I_Printable.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/Section17/UniquePointers/I_Printable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_Section17_UniquePointers_I_Printable.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_Section17_UniquePointers_I_Printable.cpp$(PreprocessSuffix): ../Section17/UniquePointers/I_Printable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_Section17_UniquePointers_I_Printable.cpp$(PreprocessSuffix) ../Section17/UniquePointers/I_Printable.cpp

$(IntermediateDirectory)/up_Section17_UniquePointers_Savings_Account.cpp$(ObjectSuffix): ../Section17/UniquePointers/Savings_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_Section17_UniquePointers_Savings_Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_Section17_UniquePointers_Savings_Account.cpp$(DependSuffix) -MM ../Section17/UniquePointers/Savings_Account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/Section17/UniquePointers/Savings_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_Section17_UniquePointers_Savings_Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_Section17_UniquePointers_Savings_Account.cpp$(PreprocessSuffix): ../Section17/UniquePointers/Savings_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_Section17_UniquePointers_Savings_Account.cpp$(PreprocessSuffix) ../Section17/UniquePointers/Savings_Account.cpp

$(IntermediateDirectory)/up_Section17_UniquePointers_Checking_Account.cpp$(ObjectSuffix): ../Section17/UniquePointers/Checking_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_Section17_UniquePointers_Checking_Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_Section17_UniquePointers_Checking_Account.cpp$(DependSuffix) -MM ../Section17/UniquePointers/Checking_Account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/Section17/UniquePointers/Checking_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_Section17_UniquePointers_Checking_Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_Section17_UniquePointers_Checking_Account.cpp$(PreprocessSuffix): ../Section17/UniquePointers/Checking_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_Section17_UniquePointers_Checking_Account.cpp$(PreprocessSuffix) ../Section17/UniquePointers/Checking_Account.cpp

$(IntermediateDirectory)/up_Section17_UniquePointers_Trust_Account.cpp$(ObjectSuffix): ../Section17/UniquePointers/Trust_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_Section17_UniquePointers_Trust_Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_Section17_UniquePointers_Trust_Account.cpp$(DependSuffix) -MM ../Section17/UniquePointers/Trust_Account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/Section17/UniquePointers/Trust_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_Section17_UniquePointers_Trust_Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_Section17_UniquePointers_Trust_Account.cpp$(PreprocessSuffix): ../Section17/UniquePointers/Trust_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_Section17_UniquePointers_Trust_Account.cpp$(PreprocessSuffix) ../Section17/UniquePointers/Trust_Account.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


