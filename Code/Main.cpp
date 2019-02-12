// HelloSFML.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Engine.h"

int main()
{
    // Declare an instance of Engine
	Engine engine;

	// Start the engine
	engine.run();

	// Quit in the usual way when the engine is stopped
	return 0;
}