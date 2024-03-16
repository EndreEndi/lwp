#ifndef MAIN_H
#define MAIN_H

#include <gtk/gtk.h>

// G_APPLICATION_DEFAULT_FLAGS doesn't exist in older versions of glib
#ifndef G_APPLICATION_DEFAULT_FLAGS
//#define G_APPLICATION_DEFAULT_FLAGS G_APPLICATION_FLAGS_NONE
#endif

#include "../common.h"

extern GtkApplication *app;

extern GtkWidget *mainWnd;
extern GtkWidget *exitDialog;
extern GtkWidget *wallpaperMgrWnd;
extern GtkWidget *monitorWnd;
extern GtkWidget *monitorListBox;
extern GtkWidget *wallpaperListBox;
extern GtkWidget *wallpaperComboBox;
extern GtkWidget *xPosSpinBtn;
extern GtkWidget *yPosSpinBtn;
extern GtkWidget *widthSpinBtn;
extern GtkWidget *heightSpinBtn;
extern GtkWidget *monitorNameLabel;
extern GtkWidget *appSettingsWnd;
extern GtkWidget *targetFpsComboBox;
extern GtkWidget *renderQualityComboBox;
extern GtkWidget *drawOnRootWndComboBox;

void runWlp();
void killWlp();

#ifdef __WIN32
void initTrayIcon();
void removeTrayIcon();
#endif

#endif
