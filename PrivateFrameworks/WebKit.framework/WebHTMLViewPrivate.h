/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebDataSource, NSTimer, WAKView, WebPluginController, WebEvent, NSString, NSMutableDictionary, NSArray;

@interface WebHTMLViewPrivate : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    NSTimer *autoscrollTimer;
    WebEvent *autoscrollTriggerEvent;
    BOOL avoidingPrintOrphan;
    BOOL closed;
    WebDataSource *dataSource;
    BOOL exposeInputContext;
    BOOL handlingMouseDownEvent;
    NSMutableDictionary *highlighters;
    BOOL ignoringMouseDraggedEvents;
    BOOL inScrollPositionChanged;
    struct WebHTMLViewInterpretKeyEventsParameters { struct KeyboardEvent {} *x1; BOOL x2; BOOL x3; BOOL x4; } *interpretKeyEventsParameters;
    WebEvent *keyDownEvent;
    } lastScrollPosition;
    WAKView *layerHostingView;
    WebEvent *mouseDownEvent;
    BOOL needsToApplyStyles;
    NSArray *pageRects;
    WebPluginController *pluginController;
    BOOL printing;
    BOOL receivedNOOP;
    SEL selectorForDoCommandBySelector;
    NSString *toolTip;
    id trackingRectOwner;
    void *trackingRectUserData;
    BOOL transparentBackground;
}

+ (void)initialize;

- (void)clear;
- (void)dealloc;
- (void)finalize;

@end
