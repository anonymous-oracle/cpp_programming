##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=inheritance
ConfigurationName      :=Debug
WorkspacePath          :=/home/suhas/cpp_programming
ProjectPath            :=/home/suhas/cpp_programming/inheritance
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=suhas
Date                   :=02/08/20
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
ObjectsFileList        :="inheritance.txt"
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
Objects0=$(IntermediateDirectory)/up_test_savings_account.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_Account2.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_Savings_Account.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/up_test_savings_account.cpp$(ObjectSuffix): ../test_savings_account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_test_savings_account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_test_savings_account.cpp$(DependSuffix) -MM ../test_savings_account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/test_savings_account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_test_savings_account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_test_savings_account.cpp$(PreprocessSuffix): ../test_savings_account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_test_savings_account.cpp$(PreprocessSuffix) ../test_savings_account.cpp

$(IntermediateDirectory)/up_Account2.cpp$(ObjectSuffix): ../Account2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_Account2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_Account2.cpp$(DependSuffix) -MM ../Account2.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/Account2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_Account2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_Account2.cpp$(PreprocessSuffix): ../Account2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_Account2.cpp$(PreprocessSuffix) ../Account2.cpp

$(IntermediateDirectory)/up_Savings_Account.cpp$(ObjectSuffix): ../Savings_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_Savings_Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_Savings_Account.cpp$(DependSuffix) -MM ../Savings_Account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/Savings_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_Savings_Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_Savings_Account.cpp$(PreprocessSuffix): ../Savings_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_Savings_Account.cpp$(PreprocessSuffix) ../Savings_Account.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


