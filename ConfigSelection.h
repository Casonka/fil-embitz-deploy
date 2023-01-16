#pragma once
/*!
*
*   @file ConfigSelection.h
*   @author Resourse center of robotics group developers - Caska
*   @date   28/07/2022 - last update
*
*/

/*!
*   @arg 0 - Demo test
*   @arg 1 - Your configuration
*/
#define _configUSEBoards                (0)

#if (_configUSEBoards == 0)
    #include "DemoTest.h"
#endif /*_configUSEBoards*/
#if (_configUSEBoards == 1)
    #include "Configuration.h"
#endif /*_configUSEBoards*/
#if ((_configUSEBoards < 0) || (_configUSEBoards > 1))
    #error Invalid argument of Development Board
#endif /*_configUSEBoards*/

