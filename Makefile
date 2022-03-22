# Compiler
CXX 		= g++

# Build flags
CXXFLAGS 	= -Wall -g

TESTLIBLINK = -lgtest

# Directories
SOURCEDIR 	= src
BUILDDIR 	= obj
TESTDIR 	= tests

include Rules.mk
