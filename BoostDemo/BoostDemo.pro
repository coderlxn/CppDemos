TEMPLATE = subdirs


SUBDIRS += \
    Lambda \
    Asio \
    AsioDemo \
    AsioClient

QMAKE_CXXFLAGS += /MP
