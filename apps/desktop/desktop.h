#ifndef _desktop_h
#define _desktop_h

void* fb;
void* bb;

void desktop_init(unsigned long fbaddr, int width, int height, int pitch);

#endif
