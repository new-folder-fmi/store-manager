#ifndef STORAGEINTERFACE_H
#define STORAGEINTERFACE_H



class StorageUnit
{
    public:
    virtual void storageMenu()
    {
        /*
            Welcome to the Sample Menu!
            1. Add item
            2. Do a thing
            3. Do another thing
            4. ...
            5. List everything
        */
    }
    virtual void newItem()
    {
        /*
            Prompt for info
            Create a new instance of a class (call constructor)
            Create space in the itemList array
            Copy created object to itemList
            Delete the temporarily created object
        */
    }
    virtual void removeItem()
    {
        /*
            Utilize the search function (maybe)
            Find the item
            Delete the item
            Shrink itemList array
        */
    }
    virtual bool itemExists()
    {
        /*
            Utilize the search function (maybe)
            Find the item -> 1
            Don't         -> 0
        */
    }

};

#endif // STORAGEINTERFACE_H
