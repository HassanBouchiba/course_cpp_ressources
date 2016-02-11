file(GLOB_RECURSE mareva_lib_SRC "mareva_lib/*.h"
                                 "mareva_lib/*.cc")								  
add_library(mareva_lib_s STATIC ${mareva_lib_SRC})
set_target_properties(mareva_lib_s PROPERTIES FOLDER "libraries")
