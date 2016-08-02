#ifndef __LCD_I2C__H_
#define __LCD_I2C__H_

namespace LCDI2C
{
  // Send init() before doing anything else.  Will initialize the Hitachi screen
  void init(void);

  // Clear the screen
  void clear();

  // Move the cursor to the beginning of line y (y=0 or 1)
  void cursorToLine(unsigned char y);

  // Print a string
  void print(const char value[]);

  // Print a number as a decimal
  void print(unsigned short);
};


#endif


