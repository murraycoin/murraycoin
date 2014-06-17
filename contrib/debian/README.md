
Debian
====================
This directory contains files used to package murraycoind/murraycoin-qt
for Debian-based Linux systems. If you compile murraycoind/murraycoin-qt yourself, there are some useful files here.

## murraycoin: URI support ##


murraycoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install murraycoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your murraycoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/murraycoin128.png` to `/usr/share/pixmaps`

murraycoin-qt.protocol (KDE)

