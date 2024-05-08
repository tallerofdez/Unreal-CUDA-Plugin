
#ifndef shared_EXPORTS_H
#define shared_EXPORTS_H

#ifdef SHARED_EXPORTS_BUILT_AS_STATIC
#  define shared_EXPORTS
#  define SHARED_NO_EXPORT
#else
#  ifndef shared_EXPORTS
#    ifdef dll_EXPORTS
        /* We are building this library */
#      define shared_EXPORTS __declspec(dllexport)
#    else
        /* We are using this library */
#      define shared_EXPORTS __declspec(dllimport)
#    endif
#  endif

#  ifndef SHARED_NO_EXPORT
#    define SHARED_NO_EXPORT 
#  endif
#endif

#ifndef SHARED_DEPRECATED
#  define SHARED_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef SHARED_DEPRECATED_EXPORT
#  define SHARED_DEPRECATED_EXPORT shared_EXPORTS SHARED_DEPRECATED
#endif

#ifndef SHARED_DEPRECATED_NO_EXPORT
#  define SHARED_DEPRECATED_NO_EXPORT SHARED_NO_EXPORT SHARED_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SHARED_NO_DEPRECATED
#    define SHARED_NO_DEPRECATED
#  endif
#endif

#endif /* shared_EXPORTS_H */
