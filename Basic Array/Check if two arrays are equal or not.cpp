        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<N;i++)
        {
            if(A[i]!=B[i])
            return false;
        }
        return true;
    }
};
