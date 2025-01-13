//
// Created by m.fuster on 02/12/2024.
//

#ifndef DLLEXPORT_H
#define DLLEXPORT_H

#ifdef _WIN32
    #ifdef DLL_EXPORT
        #define DLL_API __declspec(dllexport)
    #else
        #define DLL_API __declspec(dllimport)
    #endif
#else
    #define DLL_EXPORT_FAILED
#endif

#endif //DLLEXPORT_H
