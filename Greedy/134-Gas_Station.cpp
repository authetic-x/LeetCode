//
// Created by authetic on 2018/12/30.
//

/*
 * Give a circular route of gas stations, find a start point
 * to travel around the circuit with tank >= 0.
 *
 * If all_total >= 0, there must be an answer, and use the index
 * to find it, refresh index with the point where it failed.
 */

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if (gas.empty()) {
            return -1;
        }
        int total = 0, temp = 0, index = 0;
        for (int i = 0; i < gas.size(); i ++ ) {
            total += gas[i] - cost[i];
            if (temp >= 0) {
                temp += gas[i] - cost[i];
            } else {
                temp = gas[i] - cost[i];
                index = i;
            }
        }
        return total >= 0 ? index : -1;
    }
};