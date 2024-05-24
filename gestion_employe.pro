QT += core gui multimedia multimediawidgets
QT += sql
QT += xml
QT += widgets printsupport
QT += core network
QT += serialport
QT += charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS
# Paths to the SmtpClient-for-Qt-1.1 library
INCLUDEPATH += C:/SmtpClient/src
INCLUDEPATH += C:/Users/youssef/Desktop/integration_crud/camera

DEPENDPATH += C:/SmtpClient/src
INCLUDEPATH += C:/Users/youssef/Desktop/integration_crud/Arduino
# Specify the library file
LIBS += -LC:/SmtpClient/build

# Link against the SMTP library
LIBS += -LC:/SmtpClient/build \
        -llibSmtpClient
# Specify your header files
HEADERS += \
    Arduino/arduino.h \
    C:/SmtpClient/src/SmtpClient.h \
 \    # Add other header files here if needed
    gestion_abonnement/abonnement.h \
    gestion_equipement_f/equipement.h \
    gestion_equipement_f/qrcode.h \
    gestion_evenements/evenement.h \
    gestion_formation/formation.h \
    gestion_membre/membre.h

# Chemins d'inclusion des bibliothèques OpenCV
INCLUDEPATH += C:/opencv/build/include
INCLUDEPATH += C:\opencv\build\install\include
DEPENDPATH += C:/opencv/build/include

LIBS += -LCC:/opencv/build/install/x86/mingw/bin
# Ajouter les bibliothèques OpenCV
LIBS += -LC:\opencv\build\install\x86\mingw\bin \
        -lopencv_calib3d320 \
        -lopencv_core320 \
        -lopencv_features2d320 \
        -lopencv_flann320 \
        -lopencv_highgui320 \
        -lopencv_imgcodecs320 \
        -lopencv_imgproc320 \
        -lopencv_ml320 \
        -lopencv_objdetect320 \
        -lopencv_photo320 \
        -lopencv_stitching320 \
        -lopencv_video320 \
        -lopencv_videoio320 \
        -lopencv_face320
SOURCES += \
    Arduino/arduino.cpp \
    camera/camera.cpp \
    camera/imagesettings.cpp \
    camera/videosettings.cpp \
    connection.cpp \
    employe.cpp \
    gestion_abonnement/abonnement.cpp \
    gestion_abonnement/mainwindow_ab.cpp \
    gestion_equipement_f/eq.cpp \
    gestion_equipement_f/equipement.cpp \
    gestion_equipement_f/qrcode.cpp \
    gestion_evenements/evenement.cpp \
    gestion_evenements/mainwindow_ev.cpp \
    gestion_formation/formation.cpp \
    gestion_formation/mainwindow_formation.cpp \
    gestion_membre/mainwindowem.cpp \
    gestion_membre/membre.cpp \
    main.cpp \
    mainwindow.cpp


HEADERS += \
    camera.h \
    camera/camera.h \
    camera/imagesettings.h \
    camera/videosettings.h \
    connection.h \
    employe.h \
    mainwindow.h \



FORMS += \
    camera/camera.ui \
    camera/imagesettings.ui \
    camera/videosettings.ui \
    gestion_abonnement/mainwindow_ab.ui \
    gestion_equipement_f/eq.ui \
    gestion_evenements/mainwindow_ev.ui \
    gestion_formation/mainwindow_formation.ui \
    gestion_membre/mainwindowem.ui \
    mainwindow.ui \


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../Downloads/Background.jpg \
    FormulaireForm.ui.qml \
    back.gif \
    camera/doc/images/camera-example.png \
    camera/doc/src/camera.qdoc \
    camera/images/shutter.svg \
    image/background.jpg \
    image/background.jpg \
    image/background_2.png \
    image/background_3.png \
    image/login.jpg \
    image/logo.ico \
    image/logo.png \
    image/menu.jpg \
    image/ocean.gif \
    image/pngegg (1).png \
    image/pngwing.com.png \
    image/produit.png \
    image/refresh-button_61444.png \
    image/search-512.webp \
    image/stat.jpg \
    image/undefined - Imgur.gif \
    image/youssef.jpg
RC_ICONS += C:\Users\youssef\Desktop\integration_crud\image\logo_ico.ico

RESOURCES += \
    camera/camera.qrc \
    gestion_abonnement/image/image.qrc \
    image/image.qrc
