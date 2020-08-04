##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=oops_challenge
ConfigurationName      :=Debug
WorkspacePath          :=/home/suhas/cpp_programming
ProjectPath            :=/home/suhas/cpp_programming/oops_challenge
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=suhas
Date                   :=26/07/20
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
ObjectsFileList        :="oops_challenge.txt"
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
Objects0=$(IntermediateDirectory)/up_test_oops.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_Movie.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_Movies.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/up_test_oops.cpp$(ObjectSuffix): ../test_oops.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_test_oops.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_test_oops.cpp$(DependSuffix) -MM ../test_oops.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/test_oops.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_test_oops.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_test_oops.cpp$(PreprocessSuffix): ../test_oops.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_test_oops.cpp$(PreprocessSuffix) ../test_oops.cpp

$(IntermediateDirectory)/up_Movie.cpp$(ObjectSuffix): ../Movie.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_Movie.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_Movie.cpp$(DependSuffix) -MM ../Movie.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/Movie.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_Movie.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_Movie.cpp$(PreprocessSuffix): ../Movie.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_Movie.cpp$(PreprocessSuffix) ../Movie.cpp

$(IntermediateDirectory)/up_Movies.cpp$(ObjectSuffix): ../Movies.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_Movies.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_Movies.cpp$(DependSuffix) -MM ../Movies.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/suhas/cpp_programming/Movies.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_Movies.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_Movies.cpp$(PreprocessSuffix): ../Movies.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_Movies.cpp$(PreprocessSuffix) ../Movies.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


