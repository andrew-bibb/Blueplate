#ifndef __BLUEPLATE_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/inotify.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>
#include <fcntl.h>
#include <signal.h>
#include <X11/Xlib.h>
#include <X11/Xatom.h>

#define INOTIFY_FLAGS IN_CREATE | IN_DELETE | IN_MODIFY | IN_CLOSE_WRITE | IN_MOVE

enum { WinList, NoDesks, CurDesk, WinDesk, IconGeo, TrayWin, TrayCmd, AtomNum };

typedef struct MBox {
	const char *path;
	unsigned long int color;
	Window win;
} MBox;

typedef struct Desktop {
	int status, x, y, w, h;
} Desktop;

Display *dpy;
Window root, tray;
Bool running;
Atom atom[AtomNum];

/* blueplate.c */
int init_atoms();
//Window trayer_window();
int embed_window(Window);

/* modules */
#ifdef module_desktop
int desktop();
#endif
#ifdef module_mail
int mail();
#endif
#ifdef module_connman
int connman();
#endif

#endif /* __BLUEPLATE_H__ */

