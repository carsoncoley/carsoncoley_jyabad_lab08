#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
  if(s1.length() != s2.length())
	  return false;
  bool isInside = false;
  for(char c : s1){
	  for(char c2 : s2){
		  if(toupper(c) == toupper(c2))
			  isInside = true;
	  }
  }
  if(!isInside)
	  return false;
  return true;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
  for(unsigned int i = 0; i < s1.length()/2 + 1; i++){
	  if(toupper(s1[i]) != toupper(s1[s1.length()-1-i])){
		  return false;
	  }
  }
  return true;
}


