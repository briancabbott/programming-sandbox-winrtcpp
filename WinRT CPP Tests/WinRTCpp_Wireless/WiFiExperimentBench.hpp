#pragma once

#include <iostream>
#include <winrt/base.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Devices.WiFi.h>

#include <initializer_list>

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Devices::WiFi;

class WiFiExperimentBench {

public:
	std::initializer_list<IWiFiAdapter> EnumerateWiFiAdaptors() {
		return std::initializer_list<IWiFiAdapter>();
	}
};
