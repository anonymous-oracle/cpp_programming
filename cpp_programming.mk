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
Date                   :=25/07/20
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
Objects0=./build-$(ConfigurationName)//test_move.cpp$(ObjectSuffix) ./build-$(ConfigurationName)//Move.cpp$(ObjectSuffix) 



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
./build-$(ConfigurationName)//test_move.cpp$(ObjectSuffix): test_move.cpp ./build-$(ConfigurationName)//test_move.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/test_move.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test_move.cpp$(ObjectSuffix) $(IncludePath)
./build-$(ConfigurationName)//test_move.cpp$(DependSuffix): test_move.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT./build-$(ConfigurationName)//test_move.cpp$(ObjectSuffix) -MF./build-$(ConfigurationName)//test_move.cpp$(DependSuffix) -MM test_move.cpp

./build-$(ConfigurationName)//test_move.cpp$(PreprocessSuffix): test_move.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ./build-$(ConfigurationName)//test_move.cpp$(PreprocessSuffix) test_move.cpp

./build-$(ConfigurationName)//Move.cpp$(ObjectSuffix): Move.cpp ./build-$(ConfigurationName)//Move.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/Move.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Move.cpp$(ObjectSuffix) $(IncludePath)
./build-$(ConfigurationName)//Move.cpp$(DependSuffix): Move.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT./build-$(ConfigurationName)//Move.cpp$(ObjectSuffix) -MF./build-$(ConfigurationName)//Move.cpp$(DependSuffix) -MM Move.cpp

./build-$(ConfigurationName)//Move.cpp$(PreprocessSuffix): Move.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ./build-$(ConfigurationName)//Move.cpp$(PreprocessSuffix) Move.cpp


-include ./build-$(ConfigurationName)///*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


