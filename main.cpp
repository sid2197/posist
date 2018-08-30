 #include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include "encrypt.h"

using namespace std;

struct node{
date timestamp;
string data[]={"oid","value","oname",hash_set};
int nno;
string nid;
string refnid;
string childrefnid;
string grefnid;
string hash_set;

}node *parent;

int encrypt(string data[]) {
 	std::string key = "THISISMYKEY";
 	std::cout << "  message to send: " << msg << std::endl;
 	std::string encrypted_msg = encrypt(msg, key);
 	std::cout << "encrypted message: " << encrypted_msg << std::endl;
 	std::string decrypted_msg = decrypt(encrypted_msg, key);
 	std::cout << "decrypted message: " << decrypted_msg << std::endl;
return 0
}
