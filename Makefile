CXX = g++
all: bin

bin/bin : src/proyecto.cpp include/*
	$(CXX) $< -o $@ -I include

run: bin/bin
	./$<