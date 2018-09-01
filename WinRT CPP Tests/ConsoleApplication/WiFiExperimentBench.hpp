#pragma once

#include <initializer_list>

#include <winrt/base.h>
#include <winrt/Windows.Devices.WiFi.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Networking.Connectivity.h>

using namespace winrt;
using namespace Windows::Foundation::Collections;
using namespace Windows::Devices::WiFi;
using namespace Windows::Networking::Connectivity;

class WiFiExperimentBench {

public:
	std::initializer_list<IWiFiAdapter> EnumerateWiFiAdaptors() {
		struct IVectorView<WiFiAdapter> adapters = WiFiAdapter::FindAllAdaptersAsync().get();
		for (WiFiAdapter adapter : adapters) {
			NetworkAdapter netAdapter = adapter.NetworkAdapter();
			GUID networkAdapterId = netAdapter.NetworkAdapterId();

			NetworkItem networkItem = netAdapter.NetworkItem();
			NetworkTypes networkTypes = networkItem.GetNetworkTypes();
			GUID networkId = networkItem.NetworkId();
			
			// netAdapter.NetworkAdapterId;

			hstring guidstr = to_hstring(networkAdapterId);

			std::cout << "Network Adapter-ID: " << guidstr.c_str() << std::endl;
		}

		// static IAsyncOperation<IVectorView<WiFiAdapter>> FindAllAdaptersAsync() const;

		return std::initializer_list<IWiFiAdapter>();
	}
};
