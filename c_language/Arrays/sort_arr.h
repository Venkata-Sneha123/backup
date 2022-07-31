void sortarray(int n, int *p)
{
	int i, j, k;
    	for (i = 0; i < n; i++) 
	{
		for (j = i + 1; j < n; j++) 
		{
  			if (*(p + j) < *(p + i)) 
			{
                		k = *(p + i);
                		*(p + i) = *(p + j);
                		*(p + j) = k;
            		}
        	}
    	}
}
