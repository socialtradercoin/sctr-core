
Debian
====================
This directory contains files used to package sctrd/sctr-qt
for Debian-based Linux systems. If you compile sctrd/sctr-qt yourself, there are some useful files here.

## sctr: URI support ##


sctr-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install sctr-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your sctrqt binary to `/usr/bin`
and the `../../share/pixmaps/sctr128.png` to `/usr/share/pixmaps`

sctr-qt.protocol (KDE)

