/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENMAINVIEWBASE_HPP
#define SCREENMAINVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screenmain_screen/ScreenMainPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/graph/GraphScroll.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/graph/GraphLabels.hpp>

class ScreenMainViewBase : public touchgfx::View<ScreenMainPresenter>
{
public:
    ScreenMainViewBase();
    virtual ~ScreenMainViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box boxBackground;
    touchgfx::GraphScroll<100> dynamicGraph;
    touchgfx::GraphElementLine dynamicGraphLine1;
    touchgfx::PainterRGB565 dynamicGraphLine1Painter;
    touchgfx::GraphElementGridY dynamicGraphMinorYAxisGrid;
    touchgfx::GraphElementGridY dynamicGraphMajorYAxisGrid;
    touchgfx::GraphLabelsY dynamicGraphMajorYAxisLabel;

private:

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 12000;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // SCREENMAINVIEWBASE_HPP