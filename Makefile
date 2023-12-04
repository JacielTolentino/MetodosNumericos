CXX = g++
CXXFLAGS = -IC:\msys64\mingw64\include\SDL2 -LC:\msys64\mingw64\lib -w -Wl,-subsystem,windows -lmingw32 -lSDL2main -lSDL2
all : RungeKutta #tuto1

bin/RungeKutta : src/metodos.cpp
	$(CXX) $<  $(CXXFLAGS) -o $@

#bin/tuto1  : src/02_getting_an_image_on_the_screen.cpp
#	$(CXX) $< $(CXXFLAGS) -o $@

run0: bin/RungeKutta
	./$<

#run1 : bin/tuto1
#	./$<
	