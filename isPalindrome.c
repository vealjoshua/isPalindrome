bool checkPalindrome(char * inputString) {
    size_t length = strlen(inputString);
    if (length == 0)
        return false;
    for (int i = 0; i < ((length % 2) == 0 ? length/2: length/2 + 1); i++)
        if (inputString[i] != inputString[length - i - 1])
            return false;
    return true;
}
