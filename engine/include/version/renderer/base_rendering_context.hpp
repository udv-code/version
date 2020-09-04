// Copyright (c) 2020 udv. All rights reserved.

#ifndef VN_RENDERING_CONTEXT_BASE
#define VN_RENDERING_CONTEXT_BASE

#include "version/core.hpp"

namespace vn {
	class VN_API rendering_context {
		// TODO: extend supported rendering api list
		enum class api : char {
			none = -1,
			GL = 0,
		};
	public:
		virtual void init() = 0;
		virtual void swap_buffers() = 0;
		virtual void vsync(bool enabled) = 0;

		static rendering_context *make(api api);
	};
}

#endif //VN_RENDERING_CONTEXT_BASE
