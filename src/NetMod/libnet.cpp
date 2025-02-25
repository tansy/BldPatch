#include <NetMod/libnet.h>

#include <NetMod/NullNetInterface.h>
#include <bld_system.h>
#include "bld_misc_funcs.h"


/*
* Module:                 Blade.exe
* Entry point:            0x005B64C0
*/
#ifndef BLD_NATIVE
void SetDedicatedServer(bool isDedicated)
{
}
#endif

/*
* Module:                 Blade.exe
* Entry point:            0x005B64CD
*/
#ifndef BLD_NATIVE
bool IsDedicatedServer()
{
    return false;
}
#endif

/*
................................................................................
................................................................................
................................................................................
................................................................................
*/


/*
* Module:                 Blade.exe
* Entry point:            0x005B65C8
*/
#ifndef BLD_NATIVE
const char *GetServerMap()
{
    return NULL;
}
#endif

/*
* Module:                 Blade.exe
* Entry point:            0x005B65D2
*/

bool LoadNetModule(char *fileName)
{
    FILE *logFile = fopen("NetInterface.log", "wt");
    netLibrary = LoadLibrary(fileName);
    if (netLibrary != NULL)
    {
        getNetInterface = (GetNetInterfaceFunc)
            GetProcAddress(netLibrary, "GetNetInterface");
        closeConnection = (CloseConnectionFunc)
            GetProcAddress(netLibrary, "CloseConection");
        if (getNetInterface != NULL)
        {
            netCallbacks = new B_NetCallbacks();
            gbl_net = getNetInterface(netCallbacks, netLibrary);
            if (logFile)
            {
                fprintf(logFile, "%s was sucessfully loaded.\n", fileName);
                fclose(logFile);
            }
            return true;
        }
    }
    if (logFile)
    {
        fprintf(logFile, "Failed to load %s.\n", fileName);
        fprintf(logFile, "Net game is not available.\n");
        fclose(logFile);
    }
    static B_NullNetInterface nullNetInterface;
    gbl_net = &nullNetInterface;
    return false;
}


/*
* Module:                 Blade.exe
* Entry point:            0x005B668D
*/
#ifndef BLD_NATIVE
bool FreeNetData(bool freeNetLibrary)
{
    return false;
}
#endif

/*
* Module:                 Blade.exe
* Entry point:            0x005B6750
* VC++ mangling:          ?message_received@B_NetCallbacks@@UAEXKPAXK@Z
*/
#ifndef BLD_NATIVE
void B_NetCallbacks::message_received(
    unsigned long idFrom, void *message, unsigned long messageSize)
{
}
#endif

/*
* Module:                 Blade.exe
* Entry point:            0x005B6780
* VC++ mangling:          ?player_destroyed@B_NetCallbacks@@UAEXK@Z
*/
#ifndef BLD_NATIVE
void B_NetCallbacks::player_destroyed(unsigned long playerId)
{
}
#endif

/*
* Module:                 Blade.exe
* Entry point:            0x005B67F0
* VC++ mangling:          ?player_created@B_NetCallbacks@@UAEXKPBD@Z
*/
#ifndef BLD_NATIVE
void B_NetCallbacks::player_created(unsigned long playerId, const char *name)
{
}
#endif

/*
* Module:                 Blade.exe
* Entry point:            0x005B6840
* VC++ mangling:          ?unknown00C@B_NetCallbacks@@UAEXHHHPBD@Z
*/
#ifndef BLD_NATIVE
void B_NetCallbacks::unknown00C(int i1, int i2, int i3, const char *s)
{
}
#endif
