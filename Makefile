CXX = g++

#SFML
SFML_DIR = /usr
SFML_INCLUDE_DIR = $(SFML_DIR)/include
SFML_LIB_DIR = $(SFML_DIR)/lib

INCLUDES = -I$(SFML_INCLUDE_DIR)
LIBS = -L$(SFML_LIB_DIR) -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

all: main

%.o : %.cpp
	$(CXX) -c $(INCLUDES) $< KPPSound.cpp KPPDrums.cpp KPPBass.cpp KPPGuitar.cpp KPPKeyboard.cpp
 
KPP_OBJECTS = KPPSound.o KPPDrums.o KPPBass.o KPPGuitar.o KPPKeyboard.o
main: main.o
	$(CXX) -o $@ $< $(KPP_OBJECTS) $(LIBS)
	
clean:
	$(RM) *.o main
