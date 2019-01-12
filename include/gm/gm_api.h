#ifndef GM_API
#ifdef _WIN32
#     if defined(GM_BUILD_SHARED) /* build dll */
#         define GM_API __declspec(dllexport)
#     elif !defined(GM_BUILD_STATIC) /* use dll */
#         define GM_API __declspec(dllimport)
#     else /* static library */
#         define GM_API
#     endif
#  else
#     if __GNUC__ >= 4
#         define GM_API __attribute__((visibility("default")))
#     else
#         define GM_API
#     endif
#  endif
#endif
