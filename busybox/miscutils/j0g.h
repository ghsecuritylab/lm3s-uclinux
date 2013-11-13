// these are handy utility functions to make working with js0n easier

// dumbed down parser, expects null terminated json, if fails the *index is 0 (and safe to pass into j0g_*)
// returns json, for chaining
char *j0g(char *json, unsigned short *index, int ilen);

// for the rest -
// first arg is the key to find in the json
// second is the original json passed to js0n
// third is the array returned by js0n
// these functions will modify the json arg in place (to null terminate strings)

// return the null-terminated string value matching the given key
char *j0g_str(char *key, char *json, unsigned short *index);

// return 1 if the value is the bool value true, number 1, or even the string "true", false otherwise
int j0g_test(char *key, char *json, unsigned short *index);

// return the index offset of the value matching the given key
int j0g_val(char *key, char *json, unsigned short *index);
