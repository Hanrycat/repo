#ifndef SWVIEWMODELSINK_H
#define SWVIEWMODELSINK_H

#include "../../common/etlbase.h"

class SWViewModel;
class SWViewModelSink: public IPropertyNotification
{
public:
    SWViewModelSink(SWViewModel *ptr);
    virtual void OnPropertyChanged(const std::string& str);
private:
    SWViewModel *ptr_SWViewModel;
};

#endif // SWVIEWMODELSINK_H
