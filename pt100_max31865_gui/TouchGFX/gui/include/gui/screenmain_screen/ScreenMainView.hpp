#ifndef SCREENMAINVIEW_HPP
#define SCREENMAINVIEW_HPP

#include <gui_generated/screenmain_screen/ScreenMainViewBase.hpp>
#include <gui/screenmain_screen/ScreenMainPresenter.hpp>

class ScreenMainView : public ScreenMainViewBase
{
public:
    ScreenMainView();
    virtual ~ScreenMainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void UpdateTemp(double temp);
protected:

    float data[100] = {0};
    int dataCounter = 0;
};

#endif // SCREENMAINVIEW_HPP
