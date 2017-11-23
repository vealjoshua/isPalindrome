bool checkPalindrome(char * inputString) {
    bool isPalindrome = true;
    size_t length = strlen(inputString);
    for (int i = 0; i < ((length % 2) == 0 ? length/2: length/2 + 1); i++)
    {
        printf("%c, %c\n", inputString[i], inputString[length - i - 1]);
        if (inputString[i] != inputString[length - i - 1])
        {
            isPalindrome = false;
            return isPalindrome;
        }
    }
    return isPalindrome;
}
