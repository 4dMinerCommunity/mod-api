#define APIHEADER 1
/*
Api for The Game
*/
//#include <cpr/cpr.h>

#include <functional>
#include <iostream>
#include <fstream>
#include "../lib/external/curl/curl.h" //networking
#include <stdio.h>
using namespace std;

namespace lib {
string GetDllSrc(string DllName) {
	
	
	
	throw "GetDllRepo is not made yet sry";
}
}; // namespace lib

class GameModAPI {
public:
	void overide(string funcc, int(*func)) {
		printf("%s\n", ("overiding funcion" + funcc).c_str());
		begining(funcc, func); // todo early return from beginin one
	};

	void end(string funcc, int(*func)){
		// not implemented
	};

	void begining(string funcc, int(*func)){

		// not implememnted
	};

	GameModAPI(string Mod, string dllname, string gamepath) noexcept {
		this->DllName = dllname;
		this->GamePath = gamepath;
		this->DllPath = gamepath + dllname + ".dll";
		this->DllCode = lib::GetDllSrc(this->DllName);
		printf("%s\n", ("GameModAPI::Initilised mod API for " + Mod).c_str());
	};

	void Overite_filepth()	{
		ofstream DllCodeFile;
		DllCodeFile.open(this->GamePath + this->DllName + ".temp.cpp" );
		DllCodeFile << this->DllCode;
		DllCodeFile.close();
	};
	void free_API() {
		free(this->pointers);

		// none

	};

private:
	string DllName;
	string GamePath;
	string DllPath;
	string DllCode;
	int pointers[1000];

}; // class GameModAPI
