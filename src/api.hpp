#define APIHEADER 1
/*
Api for The Game	
*/
#include <iostream>
#include <stdio.h>
using namespace std;


class GameModAPI {
public:
	void overide(string funcc, int(*func));

	void end(string funcc, int(*func));

	void begining(string funcc, int(*func));
	
	GameModAPI(string Mod, string dllpath) noexcept;
	
	void free_API();
	
private:
	
}; // class GameModAPI
	
	
// Definin things
GameModAPI::GameModAPI(string Mod, string dllpath) noexcept {
	printf("%s\n", ("GameModAPI::Initilised mod API for " + Mod).c_str());
}

void GameModAPI::overide(string funcc, int(*func)) {
	begining(funcc, func); //todo early return from beginin one
}

void GameModAPI::end(string funcc, int(*func)) {
	// not implemented
}

void GameModAPI::begining(string funcc, int(*func)) {
	
	// not implememnted
}

void GameModAPI::free_API() {
	//None, dummy
}
