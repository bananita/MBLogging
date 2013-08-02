MBLogging
=========

Set of macros allowing to show logs on number of levels: info, debug, warning, error, fatal, trace.

They show log level, name of class and number of line in a code.

They will automatically dissappear in release version od application. You can also turn off them in debug session by comment line with define LOGGING_ENABLE.

Installation
------------

Insert the line below into your Podfile:

    pod 'MBLogging', :git => 'https://github.com/bananita/MBLogging.git', :tag => '0.1.0'

Next insert import to your application prefix file (.pch)
    #ifdef __OBJC__
    . . .
    #import <MBLogging/MBLogging.h>
    . . .
    #endif