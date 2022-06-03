# Text Editing App with Qt
It is a basic text-editing app made in Qt Creator with file options such as New, Open, Save, Save As and formatting functionalities like bold/unbold, italics, and superscript/subscript of an individual text. It also has an About Me dialog box.
##
#### How to run the code:
1. Install qt5:
```sh
$ sudo apt-get install qt5-default
```
2. Go to the project folder text-editing-app, compile qpadfinal.pro and make:
```sh
$ cd text-editing-app
$ qmake qpadfinal.pro
$ make
```
3. Execute file qpadfinal in folder "text-editing-app":
```sh
$ ./qpadfinal
```
#### What has been done:
A text-editing app is created using Qt with the features like New, Open, Save and Save As under the File menu option. Other functionalities like Bold, Superscript, and Subscript are included under the Format menu option. Then under More option, when the About Me option is triggered, it opens a dialog box displaying the resume. All the above functions are displayed as icons on the tool bar for easy access.
#### Issues/challenges:
The Qt Creator software was new to work with. It took some time to understand and get familiar with its widgets and functions. Because of the new environment, there were a few edge cases and bugs that needed some time to resolve.
#### Features:
1. New- opens a new blank file (shortcut- Ctrl+N)
2. Open- helps the user to open any existing file (shortcut- Ctrl+O)
3. Save- saves the current file that is open (shortcut- Ctrl+S)
4. Save As- helps the user to specify the name of the file to be saved while saving it (shortcut- Ctrl+Shift+S)
5. Bold- the selected text, as well as new text that is entered, is displayed in bold (shortcut- Ctrl+B)
6. Italic- the selected text, as well as new text that is entered, is displayed in italic (shortcut- Ctrl+I)
7. Superscript- the selected text, as well as new text that is entered, is displayed in superscript (shortcut- Ctrl+Shift+=)
8. Subscript- the selected text, as well as new text that is entered, is displayed in subscript (shortcut- Ctrl+Shift+-)
9. About Me- a dialog box with the resume is displayed when selecting this option (shortcut- Ctrl+A)
