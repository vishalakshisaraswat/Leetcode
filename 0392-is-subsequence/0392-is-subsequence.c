bool isSubsequence(char * s, char * t){
    int i=0,j=0;
    if(strlen(s)==0)
        return 1;
    while(t[j] != 0)
    {
        if(t[j]==s[i])
        {
            i++;
            j++;
        }
        else {
            j++;
        }
    }
    if(i== strlen(s))
    return i;
    return 0;
}