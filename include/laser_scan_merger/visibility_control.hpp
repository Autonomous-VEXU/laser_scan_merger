#ifndef LASER_SCAN_MERGER__VISIBILITY_CONTROL_HPP_
#define LASER_SCAN_MERGER__VISIBILITY_CONTROL_HPP_

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define LASER_SCAN_MERGER_EXPORT __attribute__ ((dllexport))
    #define LASER_SCAN_MERGER_IMPORT __attribute__ ((dllimport))
  #else
    #define LASER_SCAN_MERGER_EXPORT __declspec(dllexport)
    #define LASER_SCAN_MERGER_IMPORT __declspec(dllimport)
  #endif
  #ifdef LASER_SCAN_MERGER_BUILDING_LIBRARY
    #define LASER_SCAN_MERGER_PUBLIC LASER_SCAN_MERGER_EXPORT
  #else
    #define LASER_SCAN_MERGER_PUBLIC LASER_SCAN_MERGER_IMPORT
  #endif
  #define LASER_SCAN_MERGER_PUBLIC_TYPE LASER_SCAN_MERGER_PUBLIC
  #define LASER_SCAN_MERGER_LOCAL
#else
  #define LASER_SCAN_MERGER_EXPORT __attribute__ ((visibility("default")))
  #define LASER_SCAN_MERGER_IMPORT
  #if __GNUC__ >= 4
    #define LASER_SCAN_MERGER_PUBLIC __attribute__ ((visibility("default")))
    #define LASER_SCAN_MERGER_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define LASER_SCAN_MERGER_PUBLIC
    #define LASER_SCAN_MERGER_LOCAL
  #endif
  #define LASER_SCAN_MERGER_PUBLIC_TYPE
#endif

#endif
