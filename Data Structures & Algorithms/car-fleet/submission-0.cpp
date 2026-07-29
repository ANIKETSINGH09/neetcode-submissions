class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> car;

        for(int i=0;i<position.size();i++)
        {
            double time=(double)(target-position[i])/speed[i];
            car.push_back({position[i],time});
        }

        sort(car.begin(),car.end());

        stack<double> s;

        for(int i=car.size()-1;i>=0;i--)
        {
            double ct=car[i].second;
            
            if(s.empty() || ct>s.top())
            {
                s.push(ct);
            }
        }

        return s.size();
    }
};
                 