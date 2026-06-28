class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;       // current altitude
        int maximum = 0;        // highest altitude seen
        for(int g : gain) {
            altitude += g;      // accumulate altitude
            maximum = max(maximum, altitude);
        
        return maximum;
    }
};
