if(MSVC)
    string(REPLACE "/MD" "/MT" CMAKE_CXX_FLAGS_DEBUG_INIT ${CMAKE_CXX_FLAGS_DEBUG_INIT})
    string(REPLACE "/MD" "/MT" CMAKE_CXX_FLAGS_MINSIZEREL_INIT ${CMAKE_CXX_FLAGS_MINSIZEREL_INIT})
    string(REPLACE "/MD" "/MT" CMAKE_CXX_FLAGS_RELEASE_INIT ${CMAKE_CXX_FLAGS_RELEASE_INIT})
    string(REPLACE "/MD" "/MT" CMAKE_CXX_FLAGS_RELWITHDEBINFO_INIT ${CMAKE_CXX_FLAGS_RELWITHDEBINFO_INIT})
endif()
