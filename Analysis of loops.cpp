void fun (int n){
    for (int i = 0; i < n; i++) //Segement 1
    {
        // Some theta(1) work
    }
    for (int i = 0; i < n; i * i) //Segment 2
    {
        // Some theta(1) work
    }
    for (int i = 1; i < 100; i ++) //Segment 3
    {
        // Some theta(1) work
    }
}

// Nested loops
void fun(int n){
    for (int i = 0; i < n; i++) // Section 1
    {
        for (int j = 0; j < n; j = j * 2) //Section 2
        {
            // Some theta(1) work
        }
    }
}

// Mxed loop
void fun(int n){
    for (int i = 0; i < n; i++) // Section 1
    {
        for (int j = 0; j < n; j = j * 2) //Section 2
        {
            // Some theta(1) work
        }
    }
    for (int i = 0; i < n; i++) // Section 3
    {
        for (int j = 0; j < n; j = j * 2) //Section 4
        {
            // Some theta(1) work
        }
    }
}

// Different inputs
void fun(int n, int m){
    for (int i = 0; i < n; i++) // Section 1
    {
        for (int j = 0; j < m; j = j++) 
        {
            // Some theta(1) work
        }
    }
    for (int i = 0; i < n; i++) // Section 2
    {
        for (int j = 0; j < m; j = j * 2) 
        {
            // Some theta(1) work
        }
    }
}