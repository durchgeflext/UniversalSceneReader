#pragma once

// Export/import macro for Windows shared library builds
#if defined(_WIN32) || defined(__CYGWIN__)
#  ifdef USCR_EXPORTS
#    define USCR_API __declspec(dllexport)
#  else
#    define USCR_API __declspec(dllimport)
#  endif
#else
#  define USCR_API
#endif

class USCR_API FileReader
{
public:
    static void printMessage();
};