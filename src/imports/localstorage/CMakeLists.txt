# Generated from localstorage.pro.

#####################################################################
## qmllocalstorageplugin Plugin:
#####################################################################

qt_add_qml_module(qmllocalstorageplugin
    URI "QtQuick.LocalStorage"
    VERSION "${CMAKE_PROJECT_VERSION}"
    CLASSNAME QQmlLocalStoragePlugin
    SKIP_TYPE_REGISTRATION
    GENERATE_QMLTYPES
    SOURCES
        plugin.cpp
        qquicklocalstorage.cpp qquicklocalstorage_p.h
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::QmlPrivate
        Qt::Sql
)

#### Keys ignored in scope 1:.:.:localstorage.pro:<TRUE>:
# CXX_MODULE = "qml"
# OTHER_FILES = "localstorage.json"
# QML_IMPORT_VERSION = "$$QT_VERSION"
# TARGETPATH = "QtQuick/LocalStorage"
