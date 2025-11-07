set(SOURCES "BSP/wifi/wifi.c"
            "Protocol/mqtt.c"
            "app_main.c")

set(INCLUDE_DIRS "." 
        "BSP/wifi"
        "Protocol") 

idf_component_register( SRCS ${SOURCES}
                        INCLUDE_DIRS ${INCLUDE_DIRS})

target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-format")
