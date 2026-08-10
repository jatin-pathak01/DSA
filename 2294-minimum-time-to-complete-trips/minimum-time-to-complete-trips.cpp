class Solution {
public:
    bool possible_hai(vector<int>& time, long long giventime, long long totaltrips) {
        long long actualtrip = 0;

        for (int &t : time) {
            actualtrip += giventime / t;

            if (actualtrip >= totaltrips)
                return true;
        }

        return false;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l = 1;

        long long r = (long long)*min_element(time.begin(), time.end()) * totalTrips;

        while (l < r) {
            long long mid = l + (r - l) / 2;

            if (possible_hai(time, mid, totalTrips)) {
                r = mid;
            }
            else {
                l = mid + 1;
            }
        }

        return l;
    }
};