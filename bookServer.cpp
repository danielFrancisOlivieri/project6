/***************************************************************************
* copyright : (C) 2009 by Jim Skon
***************************************************************************/
//File Name: chatServer.cpp
//Email Addresses: olivierid@kenyon.edu, riveraj@kenyon.edu murphy1@kenyon.edu
//Project Number: 4
//Description: The server for a multi-user chat program.
//Last Changed: March 1st, 2017
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>
#include <ostream>
#include "fifo.h"

using namespace std;


int main() {

// read in file 
 ifstream myfile ("testFile.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 




}