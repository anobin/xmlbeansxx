if (WIN32)
  if (CMAKE_BUILD_TYPE STREQUAL Debug) 
    set(LIB_SUF "d")
  else (CMAKE_BUILD_TYPE STREQUAL Debug) 
    set(LIB_SUF "")
  endif (CMAKE_BUILD_TYPE STREQUAL Debug) 
else (WIN32) 
  set(LIB_SUF "")
endif (WIN32)

FIND_PATH(GMP_INCLUDE_DIR gmp.h /usr/include /usr/local/include)
FIND_LIBRARY(GMP_LIBRARY NAMES gmp${LIB_SUF} PATHS /usr/lib /usr/local/lib)

IF (GMP_INCLUDE_DIR AND GMP_LIBRARY)
   SET(GMP_FOUND TRUE)
ENDIF (GMP_INCLUDE_DIR AND GMP_LIBRARY)

IF (GMP_FOUND)
   IF (NOT Gmp_FIND_QUIETLY)
      MESSAGE(STATUS "Found Gmp: ${GMP_LIBRARY}")
   ENDIF (NOT Gmp_FIND_QUIETLY)
ELSE (GMP_FOUND)
   IF (Gmp_FIND_REQUIRED)
      MESSAGE(FATAL_ERROR "Could not find Gmp")
   ENDIF (Gmp_FIND_REQUIRED)
ENDIF (GMP_FOUND)
