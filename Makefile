## Build tools
# Compiler
CXX		= ./ccd-g++

# Build flags
CXXF 	= -Wall -g
CXXLF	= 

COMP     = $(CXX) $(CXXF) $(CXXF_T) -o $@ -c $<
LINK 	 = $(CXX) $(CXXLF) $(CXXLF_T) -o $@ $^
COMPLINK = $(CXX) $(CXXF) $(CXXF_T) $(CXXLF) $(CXXLF_T) -o $@ $^


# Test lib flag
TESTLIBFLAG = -lgtest


# Directories
SOURCEDIR 	= src
TESTDIR 	= tests
BINDIR		= bin

include Rules.mk
