#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>

// Link with ws2_32.lib
#pragma comment(lib, "Ws2_32.lib")

#include <iostream>
using namespace std;

const unsigned short PORT = 59202;
const int BUF_SIZE = 64;

int main()
{
	cout << "hey tom" << endl;
  return 0;
}