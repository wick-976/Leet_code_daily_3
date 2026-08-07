vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i=0;
    int j=0;

    vector<int>ans;

    int s1=a.size();
    int s2=b.size();

    while(i<s1 && j<s2)
    {
        if(a[i] <= b[j])
        {
            if(ans.size()==0 || ans.back()!=a[i])
            {
                ans.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if(ans.size()==0 || ans.back()!=b[j])
                {
                    ans.push_back(b[j]);
                }

            j++;
        }

    }

    while(i<s1)
    {
        if(a[i]!=ans.back() || ans.size()==0)

        {
            ans.push_back(a[i]);
        }
        i++;
    }
    while(j<s2)
    {
        if(b[j]!=ans.back() || ans.size()==0)

        {
            ans.push_back(b[j]);
        }
        j++;
    }

    return ans;
}