# Text Editing App with Qt
It is a basic text-editing app made in Qt Creator with bold/unbold, superscript/subscript functionalities of an individual text. It also has an About Me dialog box.
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
A text-editing app is created using Qt with the functionalities like Bold, Superscript, and Subscript under the Format menu option. Then when the About Me push button is clicked, it opens a dialog box displaying the resume.
#### Issues/challenges:
The Qt Creator software was new to work with. It took some time to understand and get familiar with its widgets and functions. Because of the new environment, there were a few edge cases and bugs that needed some time to resolve.
#### Features:
1. Bold- the selected text, as well as new text that is entered, is displayed in bold (shortcut- Ctrl+B)
2. Superscript- the selected text, as well as new text that is entered, is displayed in superscript (shortcut- Ctrl+Shift+=)
3. Subscript- the selected text, as well as new text that is entered, is displayed in subscript (shortcut- Ctrl+Shift+-)
4. A dialog box with the resume is displayed when the About Me push button is clicked.
