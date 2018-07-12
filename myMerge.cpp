#include "solution.hpp"

vector<Interval> Solution::myMerge(vector<Interval> &intervals)
{
    vector<Interval> megeIntervals;
    auto it = intervals.end();
    while(--it != intervals.begin() - 1)
    {
        auto itp = it;
        while(--itp != intervals.begin() - 1)
        {
            if(((*it).start <= (*itp).start && (*it).end >= (*itp).start) ||
                ((*it).start >= (*itp).start && (*it).start <= (*itp).end))
            {
                (*itp).start = min((*itp).start, (*it).start);
                (*itp).end = max((*itp).end, (*it).end);
                break;
            }
        }
        if(itp == intervals.begin() - 1)
            megeIntervals.push_back(*it);
        intervals.pop_back();
    }

    return megeIntervals;
}