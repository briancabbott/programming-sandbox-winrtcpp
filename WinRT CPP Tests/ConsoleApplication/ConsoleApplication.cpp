// ConsoleApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <initializer_list>

#include <winrt/base.h>
#include <winrt/Windows.Devices.WiFi.h>

#include "WiFiExperimentBench.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Devices::WiFi;

int main(int argc, char *argv[]) {
	winrt::init_apartment();

	WiFiExperimentBench web; // = new WiFiExperimentBench();
	std::initializer_list<IWiFiAdapter> adapters = web.EnumerateWiFiAdaptors();

	std::cout << "Adapters length: " << adapters.size() << std::endl;
	std::cout << "Press a key to end execution." << std::endl;
	std::cin.get();
	
	return 0;
}
