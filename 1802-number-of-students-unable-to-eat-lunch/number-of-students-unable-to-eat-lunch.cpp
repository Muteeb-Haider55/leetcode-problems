class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count=0;
        while (!students.empty() && count < students.size()) {
            if(students.front()==sandwiches.front()){
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                count = 0;
            }
            else{
                int front = students.front();
                students.erase(students.begin());
                students.push_back(front);
                count++;
            }
            
        }
        return students.size();



    }
};