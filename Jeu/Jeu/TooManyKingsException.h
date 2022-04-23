#pragma once
#include <QException>
#include <QString>

class TooManyKingsException {

public:
    TooManyKingsException();

    QString message();

private:
    QString msg_ = "Plus de trois instances de Roi";
};

