#include <nsysnet/socket.h>
#include <coreinit/ios.h>
#include "Application.h"
#include "system/memory.h"
#include "utils/logger.h"
#include "utils/utils.h"
#include <whb/log_udp.h>

/* Entry point */
extern "C" int Menu_Main(void) {
    WHBLogUdpInit();

    DEBUG_FUNCTION_LINE("Initialize memory management");
    memoryInitialize();

    //!*******************************************************************
    //!                    Initialize heap memory                        *
    //!*******************************************************************

    DEBUG_FUNCTION_LINE("Start main application");
    Application::instance()->exec();
    Application::destroyInstance();

    return 0;
}
