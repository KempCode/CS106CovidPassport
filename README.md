# CS106CovidPassport
This is a Yoobee College CS106 Software Engineering conceptual project that is built in C++ with QT, to allow citizens of New Zealand to access their Covid Vaccination and test details easily.

![CovidApp](https://github.com/Kempster33/CS106CovidPassport/assets/15764472/5eeae9f9-4a2d-46fa-81be-00c16dc8bcf4)

# Setting up a Qt Widgets Application on Windows

Before you begin, make sure you have Visual Studio installed.

## Prerequisites

1. Download and Install Qt 5.15 or Qt 6 for 64-bit Windows.

## Create a New Project

1. Launch Qt Creator.
2. Go to `File -> New File or Project`.
3. Select `Application (Qt)` and then choose `Qt Widgets Application`.
4. Name your application and set the project location.
5. Configure the project settings as follows:
   - Build system: qmake
   - Class name: mainwindow
   - Kits: Desktop Qt 6.3.1 MinGW 64-bit
6. Click `Finish`.

## Set up Your Project Directory

1. Open the Qt project location you specified earlier.
2. Clone or create all the necessary header files, UI files, and .cpp files.
3. Copy and paste these files into the directory Qt has created.
4. Replace any existing files in the destination folder.
5. Delete the `issues.cpp` file.
6. Qt Creator will prompt you that files have been changed on disk; click `Yes to All`.

## Add Existing Files to Your Project

1. Right-click the project name in the left pane of Qt Creator.
2. Select `Add Existing Files`.
3. Add all the files in the directory. Some files may not be added because they already exist; this is normal.

## Build and Run Your Application

1. Double-click on `main.cpp` to open it.
2. Build and compile your application.
3. Run your application, and it should start.

## Creating an MSI Installer

To convert your application into an MSI installer, follow this tutorial: [MSI Installer Tutorial](https://www.youtube.com/watch?v=hCXAgB6y8eA).

## Reopening Your Project

To reopen your project, open it with the `.pro` file.
Launch Application: Username and Password are "Admin"
