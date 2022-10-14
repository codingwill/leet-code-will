class Solution {
public:
    
    int num = 1;
    
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>> a(n, vector<int>(n, 0));
        int kanan = a.size() - 1;
        int kiri = 0;
        int bawah = a.size() - 1;
        int atas = 0;
        for (int i = 0; i <= kanan; ++i)
        {
            a[0][i] = num;
            num++;
            
        }
        atas++;
        for (int i = 1; i <= a.size(); ++i)
        {
            if (kanan < kiri || bawah < atas) break;
            if (i % 2 == 1)
            {
                for (int j = atas; j <= bawah; ++j)
                {
                    a[j][kanan] = num;
                    num++;
                }
                kanan--;
                for (int j = kanan; j >= kiri; --j)
                {
                    a[bawah][j] = num;
                    num++;
                }
                bawah--;
            }
            else
            {
                for (int j = bawah; j >= atas; --j)
                {
                    a[j][kiri] = num;
                    num++;
                }
                kiri++;
                for (int j = kiri; j <= kanan; ++j)
                {
                    a[atas][j] = num;
                    num++;
                }
                atas++;
            }
        }
        return a;
    }
};