/*A bus has n stops numbered from 0 to n - 1 that form a circle. We know the distance between all pairs of neighboring stops where distance[i] is the distance between the stops number i and (i + 1) % n.

The bus goes along both directions i.e. clockwise and counterclockwise.

Return the shortest distance between the given start and destination stops.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start > destination){
            int temp = start;
            start = destination;
            destination = temp;
        }
        int total =0;
        int n= distance.size();
        for(int i=0;i<n;i++){
            total += distance[i];
        }
        
        int cwdist =0;
        for(int i= start ; i < destination ;i++){
            cwdist += distance[i];
        }
        
        int acwdist=0;

        acwdist = total - cwdist;

        // if(cwdist<=0) return acwdist;

        return min(cwdist,acwdist);

    }
};