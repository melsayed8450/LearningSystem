#ifndef PROFESSORPAGE_H
#define PROFESSORPAGE_H

#include <QDialog>

namespace Ui {
class ProfessorPage;
}

class ProfessorPage : public QDialog
{
    Q_OBJECT

public:
    explicit ProfessorPage(QWidget *parent = nullptr);
    ~ProfessorPage();

private:
    Ui::ProfessorPage *ui;
};

#endif // PROFESSORPAGE_H
