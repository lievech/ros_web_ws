execute_process(COMMAND "/home/lhn/ros_web_ws/build/rosbridge_suite/rosbridge_server/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/lhn/ros_web_ws/build/rosbridge_suite/rosbridge_server/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
