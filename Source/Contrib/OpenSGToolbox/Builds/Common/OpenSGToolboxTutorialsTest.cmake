
MACRO(TOOLBOX_TUTORIALS_TESTS TUTORIAL_DIR LIBRARY_NAME)
    #Configure some tests to ensure that the tutorials built
    FILE(GLOB TUTORIAL_SOURCES "${TUTORIAL_DIR}/[0-9][0-9]*.cpp")
    FOREACH(TUTORIAL ${TUTORIAL_SOURCES})
        #Get the path to the tutorial executable
        STRING(LENGTH ${TUTORIAL} SOURCE_PATH_LENGTH)
        MATH(EXPR SOURCE_PATH_LENGTH '${SOURCE_PATH_LENGTH}-4')
        STRING(SUBSTRING ${TUTORIAL} 0 ${SOURCE_PATH_LENGTH} TUTORIAL_EXE_PATH )
        SET(TUTORIAL_EXE_PATH "${TUTORIAL_EXE_PATH}${CMAKE_EXECUTABLE_SUFFIX}")

        #Extract a short name for the tutorial test
        STRING(REGEX MATCH "([0-9][0-9].*)[.]cpp" TUTORIAL_NAME ${TUTORIAL})
        SET(TUTORIAL_NAME ${CMAKE_MATCH_1})

        #Add a test to see if the tutorial exists
        MESSAGE("Adding Test for Tutorial: ${TUTORIAL_NAME}")
        ADD_TEST(${LIBRARY_NAME}_${TUTORIAL_NAME} test -e ${TUTORIAL_EXE_PATH})
    ENDFOREACH(TUTORIAL ${TUTORIAL_SOURCES})
ENDMACRO(TOOLBOX_TUTORIALS_TESTS TUTORIAL_DIR LIBRARY_NAME)
