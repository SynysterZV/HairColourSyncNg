#define VERSION_MAJOR 1
#define VERSION_MINOR 3
#define VERSION_PATCH 1
#define VERSION_BUILD 0

#define AUTHOR "kingeric1992"
#define EMAIL "king_eric1992@hotmail.com"
#define FILE_DESC "A SKSE64 plugin to sync wig color to hair. NGify from https://github.com/jgernandt/skyrim-hair-colour-sync"
#define PLUGIN_NAME "HairColourSyncNG"

#define VERSION_STRING stringify(VERSION_MAJOR) "." stringify(VERSION_MINOR) "." stringify(VERSION_PATCH)
#define VERSION_STRINGEX VERSION_STRING "." stringify(VERSION_BUILD)
#define MAKE_EXE_VERSION_EX(major, minor, build, sub)	((((major) & 0xFF) << 24) | (((minor) & 0xFF) << 16) | (((sub) & 0xF) << 12) | (((build) & 0xFFF) << 0))

#define PACKED_VERSION MAKE_EXE_VERSION_EX(VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH, VERSION_BUILD)