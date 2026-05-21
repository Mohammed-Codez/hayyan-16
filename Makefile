# Compiler
CXX = clang++

# Paths for M1 Homebrew
BREW_PREFIX = $(shell brew --prefix)
INCLUDES = -I$(BREW_PREFIX)/include
LIBS = -L$(BREW_PREFIX)/lib -lraylib

# macOS Frameworks needed for raylib
FRAMEWORKS = -framework OpenGL -framework Cocoa -framework IOKit -framework CoreAudio -framework CoreVideo

# Source and Output
SRC = src/*.cpp
OUT = bin/main

all:
	$(CXX) $(SRC) -o $(OUT) $(INCLUDES) $(LIBS) $(FRAMEWORKS) -std=c++2b

