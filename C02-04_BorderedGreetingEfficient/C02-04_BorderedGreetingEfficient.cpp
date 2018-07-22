#include <iostream>
#include <string>

// say what standard-library functions we're using
using std::cout;
using std::cin;
using std::endl;
using std::string;

int
main (int argc, char **argv)
{
  int vPad;
  // ask the user for vertical padding value
  cout << "Please enter the padding for rows: ";
  cin >> vPad;

  int hPad;
  // as the user for horizontal padding value
  cout << "Please enter the padding for columns: ";
  cin >> hPad;

  // ask for the person's name
  cout << "Please enter your first name: ";

  // read the name
  string name;
  cin >> name;

  // build the message that we intend to write
  const string greeting = "Hello, " + name + "!";

  // the number of rows and columns to write
  const int rows = vPad * 2 + 3;
  const string::size_type cols = greeting.size () + hPad * 2 + 2;

  // write a blank line to separate the output from the input
  cout << endl;

  // create a buffer to hold the entire display
  string buffer;

  // write rows row of output
  // invariant: we have written r rows so far
  for (int r = 0; r != rows; ++r)
    {
      string::size_type c = 0;

      // invariant: we have written c characters so far in the current row
      while (c != cols)
	{
	  // is it time to write the greeting
	  if (r == vPad + 1 && c == hPad + 1)
	    {
	      buffer += greeting;
	      c += greeting.size ();
	    }
	  else
	    {
	      // are we on the border?
	      if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
		buffer += '*';
	      else
		buffer += ' ';

	      ++c;
	    }
	}

      buffer += '\n';

    }

  buffer += '\n';

  cout << buffer;

  return 0;
}
