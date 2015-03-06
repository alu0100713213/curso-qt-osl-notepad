#ifndef NOTEPADWINDOW_H
#define NOTEPADWINDOW_H

#include <QMainWindow>
//Incluimos librerias necesarias
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QTextEdit> // Si queremos dar controlador de sintaxis , hay que usar TextEdit.
#include <QFileDialog> // Ventana para nombrar, elegir .
#include <QFile> // Abrir ficheros, leerlos y escribirlos.
#include <QFontDialog>
#include <QClipboard>
#include <QKeySequence> // Accesos directos.
#include <QToolBar>
#include <QMessageBox>
#include <QDebug>
#include <QFont>
#include <QJsonDocument>

class NotepadWindow : public QMainWindow
{
    Q_OBJECT

public:
    NotepadWindow(QWidget *parent = 0);
    ~NotepadWindow();

private slots:
    void alAbrir();
    void alGuardar();
    void alFuente();
    void textBold();
    void textItalic();
    void textUnderline();

private:
    QMenuBar*       mainMenu_;
    QMenu*          mnuArchivo_;
    QAction*        actArchivoAbrir_;
    QAction*        actArchivoGuardar_;
    QMenu*          mnuFormato_;
    QAction*        actFormatoFuente_;
    QMenu*          mnuEditar_;
    QAction*        actEditarCopiar_;
    QAction*        actEditarPegar_;
    QAction*        actArchivoSalir_;
    QAction*        actEditarCortar_;
    QAction*        actEditarDeshacer_;
    QAction*        actEditarRehacer_;
    QAction*        actBold_;
    QAction*        actUnder_;
    QAction*        actItalic_;
    QMenu*          mnuAyuda_;
    QAction*        actAyudaAcerca_;
    QTextEdit* txtEditor_;
    QClipboard *    portapapeles_;
    QToolBar*       toolbar_;

};

#endif // NOTEPADWINDOW_H
