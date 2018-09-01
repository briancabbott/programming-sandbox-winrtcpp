

#include <iostream>
#include <winrt/base.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Devices.WiFi.h>

#include <initializer_list>

#include "WiFiExperimentBench.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Devices::WiFi;

int main(int argc, char *argv[]) {
	winrt::init_apartment();

	WiFiExperimentBench web; // = new WiFiExperimentBench();
	std::initializer_list<IWiFiAdapter> adapters = web.EnumerateWiFiAdaptors();


	return 0;
}