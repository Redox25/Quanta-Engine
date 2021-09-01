#pragma once
#include <iostream>
#include <fstream>
#include "core.h"
namespace Quanta {
	void __declspec(dllexport) QEConsoleLog(std::string str) {
		std::cout << str << std::endl;
	}
	class QE_API App
	{
	public:
		App();
		~App();
		void Run();
		void ConsoleLog(std::string str);
	};
	class Game : public Quanta::App {
	public:
		std::string Name;
		Game(std::string name) {
			this->Name = name;
			Quanta::QEConsoleLog("Game Created: " + name);
		}
		virtual ~Game() {

		}

	};

	
	App* CreateApp(std::string str) {
		return new Game(str);
	}
}