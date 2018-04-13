#pragma once

#include <cstdint>
#include <limits>

namespace gtirb
{
    namespace constants
    {
    	/// The initial value for an EA.
        static const uint64_t BadAddress{std::numeric_limits<uint64_t>::max()};

        /// Used by Microsoft's debug HeapAlloc() to mark uninitialized allocated heap memory
        static const uint64_t BadFood{0xbaadf00d};

        /// Used by Mach-O to identify flat (single architecture) object files.
        static const uint64_t FaceFeed{0xcefaedfe};

        /// Dead beef, it's a hex code of 4 bytes, typically used as an example IP address. 0xDEADBEEF
        /// ("dead beef") is used by IBM RS/6000 systems, Mac OS on 32-bit PowerPC processors and the
        /// Commodore Amiga as a magic debug value. On Sun Microsystems' Solaris, it marks freed kernel
        /// memory.
        static const uint64_t DeadBeef{0xdeadbeef};

        ///
        static const uint64_t DeadDead{0xdeaddead};
    }
}
