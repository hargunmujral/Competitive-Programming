class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> out;
        int beginning = newInterval.at(0);
        int end = newInterval.at(1);
        
        // setting a flag for whether or not the newInterval has been inserted
        bool insertion = false;
        
        for(auto& i: intervals){

            // in the case that the end of a subinterval is less than the beginning of the
            // new interval, we can simply insert it into the output array and move on.
            if(i[1] < beginning){
               out.push_back({i[0], i[1]});
               continue;
            }
            
            // in the case that the beginning of newinterval is contained in a subinterval,
            // we know to adjust "end" as the larger end value, and to adjust our beginning
            // so we can account for the subinterval, in effect "consuming" it
            if(i[0] <= beginning && i[1] >= beginning){
                end = max(end, i[1]);
                beginning = i[0];
            }

            // in the case that the beginning of the subinterval in contained in the new
            // interval, we know that we can "consume" the beginning, adjusting only the 
            // end as the larger of the two end values
            if(i[0] <= end && i[0] >= beginning){
                end = max(end, i[1]);
            }

            // Finally, in the case that a beginning is greater than the end of the new
            // interval, we know that we can simply insert the new interval into the 
            // output array because the new interval has now been dealt with.
            if(i[0] > end){
                if(!insertion) {
                    out.push_back({beginning, end});
                    insertion = true;
                }

                // we can finally move on to add the rest of the subintervals to the output
                out.push_back({i[0], i[1]});

            } 
        }
            // after we have looped through the entire array, in the off chance that the new
            // interval has no overlap with any of the subintervals, we can simply add it to
            // the end of the output array and return.
            if(!insertion) out.push_back({beginning, end});
            return out;
    }
};