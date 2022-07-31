void copy_string(char *target, char *source)
{
    while(*source)
    {
        *target = *source;        
        source++;        
        target++;
    }    
    *target = '\0';
}

int str_len(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}

