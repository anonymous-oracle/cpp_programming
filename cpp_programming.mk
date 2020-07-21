##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=cpp_programming
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/suhas/cpp_programming
ProjectPath            :=/home/suhas/cpp_programming
IntermediateDirectory  :=./build-$(ConfigurationName)/
OutDir                 :=./build-$(ConfigurationName)/
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=suhas
Date                   :=21/07/20
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
OutputFile             :=./build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
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
CXXFLAGS := -std=c++14 -g -O0 -Wall $(Preprocessors)
CFLAGS   := -g -std=c++14 -Wall -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=./build-$(ConfigurationName)//player.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ./build-$(ConfigurationName)//.d $(Objects) 
	@mkdir -p "./build-$(ConfigurationName)/"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "./build-$(ConfigurationName)/"
	@mkdir -p ""./build-$(ConfigurationName)/bin""

./build-$(ConfigurationName)//.d:
	@mkdir -p "./build-$(ConfigurationName)/"

PreBuild:


##
## Objects
##
./build-$(ConfigurationName)//player.cpp$(ObjectSuffix): player.cpp ./build-$(ConfigurationName)//player.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/player.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/player.cpp$(ObjectSuffix) $(IncludePath)
./build-$(ConfigurationName)//player.cpp$(DependSuffix): player.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT./build-$(ConfigurationName)//player.cpp$(ObjectSuffix) -MF./build-$(ConfigurationName)//player.cpp$(DependSuffix) -MM player.cpp

./build-$(ConfigurationName)//player.cpp$(PreprocessSuffix): player.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ./build-$(ConfigurationName)//player.cpp$(PreprocessSuffix) player.cpp


-include ./build-$(ConfigurationName)///*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


