#pragma once

#if defined(PS4)
	#include <platforms/ps4/sdk/engine_plugin_api/c_api/c_api_ps4_ime_dialog.h>
#else
	#ifdef __cplusplus
		extern "C" {
	#endif
			struct Ps4ImeDialogCApi;
	#ifdef __cplusplus
		}
	#endif
#endif
