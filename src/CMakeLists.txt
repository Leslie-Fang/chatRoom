SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
INCLUDE_DIRECTORIES(../include)
ADD_EXECUTABLE(main main.cpp add.cpp)
target_link_libraries(main gflags)
target_link_libraries(main glog)
#INSTALL(TARGETS main 
#	RUNTIME DESTINATION bin)