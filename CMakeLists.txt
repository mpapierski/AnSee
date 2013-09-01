cmake_minimum_required (VERSION 2.8.7)
project (AnSee)

find_package (wxWidgets REQUIRED COMPONENTS
	core
	base)
include (${wxWidgets_USE_FILE})
set (AnSee_LIBRARIES
	${wxWidgets_LIBRARIES})

if (WIN32)
	list (APPEND AnSee_LIBRARIES
		winmm)
endif ()

set (AnSee_SOURCES
	AnSee.cpp
	AnSeeDoc.cpp
	AnSeeView.cpp
	LeftView.cpp
	MainFrm.cpp
	Sprite.cpp
	StdAfx.cpp
	TimeDialog.cpp)

set (AnSee_HEADERS
	AnSeeDoc.h
	AnSee.h
	AnSeeView.h
	LeftView.h
	MainFrm.h
	resource.h
	Sprite.h
	StdAfx.h
	TimeDialog.h)

source_group ("Header Files"
	FILES ${AnSee_HEADERS})

include_directories (
	.
	${wxWidgets_INCLUDE_DIRS})
add_definitions (
	-D_AFXDLL
	-D__AFXWIN_H__)

add_executable (AnSee
	${AnSee_SOURCES}
	${AnSee_HEADERS})

target_link_libraries (AnSee
	${AnSee_LIBRARIES})

IF (WIN32)
	IF (MSVC)
		set_target_properties(AnSee PROPERTIES LINK_FLAGS_DEBUG "/SUBSYSTEM:windows")
		set_target_properties(AnSee PROPERTIES LINK_FLAGS_RELWITHDEBINFO "/SUBSYSTEM:windows")
		set_target_properties(AnSee PROPERTIES LINK_FLAGS_RELEASE "/SUBSYSTEM:windows")
		set_target_properties(AnSee PROPERTIES LINK_FLAGS_MINSIZEREL "/SUBSYSTEM:windows")
	ENDIF (MSVC)
ENDIF (WIN32)