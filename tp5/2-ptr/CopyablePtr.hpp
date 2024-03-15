#pragma once

#include<memory>

#include "Object.hpp"

class CopyablePtr 
{
    private:
        Object* object = nullptr;

    public:
        CopyablePtr() = default;

        CopyablePtr(int value):
        object(new Object(value))
        {}

        bool operator==(std::nullptr_t null_ptr)
        {
            return this->object == null_ptr;
        }

        Object& operator*() const
        {
            return *object;
        }

        CopyablePtr& operator=(std::nullptr_t null_ptr)
        {
            delete object;
            object = nullptr;
            return *this;
        }


        CopyablePtr(const CopyablePtr& other):
            object {other.object == nullptr ? nullptr : new Object(*other.object)}
        {}

        CopyablePtr(CopyablePtr&& other)
        {
            object = other.object;
            other.object = nullptr;
        }


        CopyablePtr& operator=(const CopyablePtr& other)
        {   
            
            if(this != &other)
            {
                delete object;
                object = other.object == nullptr ? nullptr : new Object(*other.object);
            }
            return *this;
        }

        CopyablePtr& operator=(const CopyablePtr&& other)
        {
            if(this != &other)
            {
                delete object;
                object =std::move(other.object);
            }
            return *this;
        }

        ~CopyablePtr()
        {
            delete object;
        }

};
