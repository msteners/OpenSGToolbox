
MESSAGE(STATUS "Prepare OSGContribVideo")

GET_FILENAME_COMPONENT(_CMAKE_CURRENT_LIST_DIR ${CMAKE_CURRENT_LIST_FILE} PATH)

SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${_CMAKE_CURRENT_LIST_DIR}/CMake")

INCLUDE(ConfigurePackages.OSGContribVideo)

OSG_CONFIGURE_VLC()
OSG_ADD_OPT(VLC_FOUND)

#LIST(APPEND OSG_ADDITIONAL_CONFIGURE_LINES "#cmakedefine OSG_WITH_VLC 1")

IF(UNIX)
  OSG_ADD_OPT(VLC_LIBRARIES)
  OSG_ADD_OPT(VLC_INCLUDE_DIR)
ENDIF(UNIX)

INSTALL(FILES "${_CMAKE_CURRENT_LIST_DIR}/CMake/FindFmod.cmake"
        DESTINATION share/OpenSG/cmake)

INSTALL(FILES "${_CMAKE_CURRENT_LIST_DIR}/CMake/ConfigurePackages.OSGContribVideo.cmake"
        DESTINATION share/OpenSG/cmake)
