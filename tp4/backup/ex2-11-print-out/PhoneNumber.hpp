#pragma once

#include <vector>
#include <ostream>
class PhoneNumber
{
    private:
        std::vector<int> _numbers;

    public:
        PhoneNumber(int n1, int n2, int n3,int n4,int n5):
        _numbers{n1,n2,n3,n4,n5}
        {}

        bool is_valid() const
        {
            for(auto i : _numbers)
            {
                if( i < 0 || i > 99 )
                {
                    return false;
                }
            }
            return true;
        }

        int operator[](int index) const
        {
            if(index < 0 || index > 4)
            {
                return -1;
            }
            return _numbers.at(index);
        }

        friend std::ostream& operator<<(std::ostream& stream, PhoneNumber phone)
        {
            for(auto n : phone._numbers)
            {
                stream << n;
            }
            return stream;
        }
};