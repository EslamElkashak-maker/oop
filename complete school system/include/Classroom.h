#ifndef CLASSROOM_H
#define CLASSROOM_H


class Classroom
{
private:
    int roomNumber;
    int capacity;
public:
    Classroom()
    {
        roomNumber=-1;
        capacity=-1;
    }
    Classroom(int roomNumber,int capacity)
    {
        this->roomNumber=roomNumber;
        this->capacity=capacity;
    }
    int getRoomNumber()
    {
        return roomNumber;
    }
    int getCapacity()
    {
        return capacity;
    }
    void setRoomNumber(int roomNumber)
    {
        this->roomNumber=roomNumber;
    }
    void setCapacity(int capacity)
    {
        this->capacity=capacity;
    }
    void print()
    {
        cout<<"RoomNumber is : "<<roomNumber<<endl;
        cout<<"Capacity is : "<<capacity<<endl;
    }

};

#endif // CLASSROOM_H
