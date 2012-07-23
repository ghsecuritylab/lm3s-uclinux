
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_print_NoPrinterJob__
#define __java_awt_print_NoPrinterJob__

#pragma interface

#include <java/awt/print/PrinterJob.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace print
      {
          class NoPrinterJob;
          class PageFormat;
          class Pageable;
          class Printable;
      }
    }
  }
}

class java::awt::print::NoPrinterJob : public ::java::awt::print::PrinterJob
{

public: // actually package-private
  NoPrinterJob();
public:
  virtual jint getCopies();
  virtual void setCopies(jint);
  virtual ::java::lang::String * getJobName();
  virtual void setJobName(::java::lang::String *);
  virtual ::java::lang::String * getUserName();
  virtual void cancel();
  virtual jboolean isCancelled();
  virtual ::java::awt::print::PageFormat * defaultPage(::java::awt::print::PageFormat *);
  virtual ::java::awt::print::PageFormat * pageDialog(::java::awt::print::PageFormat *);
  virtual void print();
  virtual jboolean printDialog();
  virtual void setPageable(::java::awt::print::Pageable *);
  virtual void setPrintable(::java::awt::print::Printable *);
  virtual void setPrintable(::java::awt::print::Printable *, ::java::awt::print::PageFormat *);
  virtual ::java::awt::print::PageFormat * validatePage(::java::awt::print::PageFormat *);
  static ::java::lang::Class class$;
};

#endif // __java_awt_print_NoPrinterJob__