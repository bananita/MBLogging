//
//  MBLogging.h
//  Logging
//
//  Created by Michał Banasiak on 19.02.2013.
//
//  This code is free to use under the terms of the MIT license.
 
//  These macros allows you to show logs on number of levels:
//  info, debug, warning, error, fatal, trace.
//
//  They show log level, name of class and number of line in a code.
//
//  They will automatically dissappear in release version od application.
//  You can also turn off them in debug session by comment line with
//  define LOGGING_ENABLE.
 
 
// To turn-off loging during debugging, please comment this line.
#define LOGGING_ENABLE
 
 
 
#if defined DEBUG && defined LOGGING_ENABLE
    #define LogInfo(...) __LOG(@"INFO", __VA_ARGS__)
    #define LogDebug(...) __LOG(@"DEBUG", __VA_ARGS__)
    #define LogWarning(...) __LOG(@"WARNING", __VA_ARGS__)
    #define LogError(...) __LOG(@"ERROR", __VA_ARGS__)
    #define LogFatal(...) __LOG(@"FATAL", __VA_ARGS__)
    #define LogTrace(...) __LOG(@"TRACE", __VA_ARGS__)
 
    #define __LOG(type, ...) \
        NSLog(@"[%@] [%@:%d] %@", \
        type, \
        NSStringFromClass([self class]), \
        __LINE__, \
        [NSString stringWithFormat:__VA_ARGS__])
#else 
    #define LogInfo(...)
    #define LogDebug(...)
    #define LogWarning(...)
    #define LogError(...)
    #define LogFatal(...)
    #define LogTrace(...)
 
    #define __LOG(...)
#endif
