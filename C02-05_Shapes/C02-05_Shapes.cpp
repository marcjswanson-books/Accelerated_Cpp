// Write a set of "*" characters so that they form a
// square, a rectangle, and a triangle.

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int
main (int argc, char **argv)
{
  string buffer;
  int row;
  int column;

  // define character to use for drawing
  const char PEN = '*';
  const char SPACE = ' ';
  const char FILL = SPACE;

  // define a fudge factor to comPENsate for
  // difference between horizontal and vertical
  const float RATIO = 1.8;

  ////////////////
  // Square
  const int SQR_DIM = 10;
  const int SQR_HOR_DIM = SQR_DIM * RATIO;

  buffer = "Square:\n";

  // invariant: row rows written so far...
  for (row = 0; row != SQR_DIM; ++row)
    {
      for (column = 0; column != SQR_HOR_DIM; ++column)
	{
	  if (row == 0 || row == SQR_DIM - 1 || column == 0
	      || column == SQR_HOR_DIM - 1)
	    buffer += PEN;
	  else
	    buffer += FILL;

	}

      buffer += '\n';
    }

  buffer += '\n';

  cout << buffer << endl;

  ////////////////
  // Rectangle
  const int RECT_HOR_DIM = 10 * RATIO;
  const int RECT_VER_DIM = 5;

  buffer = "Rectangle:\n";

  // invariant: row rows written so far...
  for (row = 0; row != RECT_VER_DIM; ++row)
    {
      for (column = 0; column != RECT_HOR_DIM; ++column)
	{
	  if (row == 0 || row == RECT_VER_DIM - 1 || column == 0
	      || column == RECT_HOR_DIM - 1)
	    buffer += PEN;
	  else
	    buffer += FILL;
	}

      buffer += '\n';
    }

  buffer += '\n';

  cout << buffer << endl;

  ////////////////
  // Triangle
  const int TRI_BASE = 15;
  const int TRI_HEIGHT = 8;

  buffer = "Triangle (Right):\n";

  // invariant: row rows written so far...
  for (row = 0; row != TRI_HEIGHT; ++row)
    {
      buffer += PEN;

      for (column = 1; column < row; ++column)
	{
	  if (row == TRI_HEIGHT - 1)
	    buffer += PEN;
	  else
	    buffer += FILL;
	}

      if (row != 0)
	buffer += PEN;

      buffer += '\n';

    }

  buffer += '\n';

  cout << buffer << endl;

  buffer = "Triangle (isosceles):\n";

  const int MIDPOINT = TRI_BASE / 2;

  for (row = 0; row != TRI_HEIGHT; ++row)
    {
      // SPACEs before side...
      for (column = 0; column != MIDPOINT - row; ++column)
	{
	  buffer += SPACE;
	}

      // every row has at least 1 point
      buffer += PEN;

      if (row != 0 && row != TRI_HEIGHT - 1)
	{
	  for (column = 0; column != 2 * row - 1; ++column)
	    {
	      buffer += FILL;
	    }

	  buffer += PEN;
	}
      else if (row == TRI_HEIGHT - 1)
	{
	  buffer += string (TRI_BASE - 1, PEN);
	}

      buffer += '\n';

    }

  cout << buffer << endl;

  return 0;
}
