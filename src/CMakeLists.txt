set(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/solve.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/input.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/output.cpp)

target_sources(${TARGET} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
                                 ${SOURCES})

target_sources(${TEST_TARGET} PRIVATE ${SOURCES})