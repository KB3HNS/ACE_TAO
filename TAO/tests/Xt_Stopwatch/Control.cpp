#include "Control.h"


Control::Control (Widget &parent)
{
  // Instantiate the  sub-components of the Control
  this->frame_ = XmCreateFrame (parent,
                                (char *) "frame",
                                0,
                                0 );

  this->rowcolumn_ = XmCreateRowColumn (this->frame_,
                                         (char *)"rwc",
                                        0,
                                        0 );

  this->startwidget_ = XmCreatePushButton (this->rowcolumn_,
                                           (char *) "Start",
                                           0,
                                           0);

  this->stopwidget_ = XmCreatePushButton (this->rowcolumn_,
                                          (char *) "Stop",
                                          0,
                                          0);
}

Control::~Control ()
{
}

void
Control::manage ()
{
  XtManageChild (frame_);
  XtManageChild (rowcolumn_);
  XtManageChild (startwidget_);
  XtManageChild (stopwidget_);
}

Widget &
Control::startwidget ()
{
  return this->startwidget_;
}

Widget &
Control::stopwidget ()
{
  return this->stopwidget_;
}

