#include <iostream>
using namespace std;


/* 
 * subStrName 
 * s: input string
 * sub: substring
 * numTimes: integer for number times to check for sub in s
 * return: true if sub shows up in s at LEAST numTimes times
 */ 
bool subStrNum(string s, string sub, int numTimes) {
  if (numTimes == 0) { // base case, if we are looking for 0 substrings, we can return true
    return true;
  } else if (s.length() < sub.length()) { // base case, if the actual string is smaller than the substring, it can't contain that substring
    return false;
  }

  string temp = s.substr(0, sub.length()); // substring s into a string of the same size as sub
  // example
  // s = "hello"
  // sub = "it"
  // temp = s.substr(0, 2) = he
  if (sub.compare(temp) == 0) { // compare takes a string and returns 0 if they are the same, and a different integer otherwise
    // In this case we our first part of the string is equal to the substring
    // we need to make a smaller string, pass in sub and subtract 1 from the numTimes since we encountered the substring
    return subStrNum(s.substr(1), sub, numTimes - 1); // working towards base case.
    // using the "catwowcat" example below:
    // subStrNum("atwowcat", "cat", 1)
    // now run this function again with the above parameters
  } else {
    // we don't have the substring at the front, so we keep numTimes the same
    return subStrNum(s.substr(1), sub, numTimes);
    // using the hello example, we get:
    // subStrNum("ello", "it", numTimes)
  }
}


int main() {
  string s = "catwowcat";
  string sub = "cat";
  
  cout << subStrNum(s, sub, 2) << endl;
  
  return 0;
}
