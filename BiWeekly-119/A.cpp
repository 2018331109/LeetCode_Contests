class Solution
{
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2)
    {

        int n=nums1.size(), m=nums2.size();

//        vector<int>v;
//        v.push_back(0);
//        v.push_back(0);
//
//        for(int i=0; i<n; i++)
//        {
//            if(nums2.find(nums1[i]) != nums2.end())
//            {
//                v[0]=nums1[i];
//                break;
//            }
//        }
//        for(int i=0; i<m; i++)
//        {
//            if(numsa.find(nums2[i]) != nums1.end())
//            {
//                v[1]=nums2[i];
//                break;
//            }
//        }

        map<int, int>a, b;
        for(int i=0; i<n; i++)
        {
            a[nums1[i]]++;
        }

        for(int i=0; i<m; i++)
        {
            b[nums2[i]]++;
        }

        vector<int>v(2, 0);
        for(int i=0; i<n; i++)
        {
            if(b[nums1[i]]>0)
            {
                v[0]++;
            }
        }

        for(int i=0; i<m; i++)
        {
            if(a[nums2[i]]>0)
            {
                v[1]++;
            }
        }
        return v;





    }
};


