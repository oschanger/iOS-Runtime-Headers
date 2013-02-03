/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSTimer, UITableView;

@interface UIInputSwitcherView : UIView <UITableViewDataSource, UITableViewDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    NSInteger m_currentInputModeIndex;
    NSInteger m_firstVisibleRow;
    NSInteger m_mode;
    } m_point;
    float m_pointerOffset;
    } m_referenceRect;
    NSInteger m_scrollDirection;
    double m_scrollStartTime;
    NSTimer *m_scrollTimer;
    BOOL m_scrollable;
    BOOL m_scrolling;
    UIView *m_selExtraView;
    UIView *m_shadowView;
    UITableView *m_table;
    NSInteger m_visibleRows;
}

@property(readonly) NSInteger mode;

+ (void)_initializeSafeCategory;
+ (id)activeInstance;
+ (id)sharedInstance;

- (void)applicationWillSuspend:(id)arg1;
- (void)autoscrollTimerFired:(id)arg1;
- (void)dealloc;
- (void)endScrolling:(id)arg1;
- (void)fade;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)fadeWithDelay:(double)arg1;
- (id)font;
- (void)hide;
- (NSInteger)indexForIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isVisible;
- (NSInteger)mode;
- (id)nextInputMode;
- (id)previousInputMode;
- (void)removeFromSuperview;
- (void)selectInputMode:(id)arg1;
- (void)selectNextInputMode;
- (void)selectPreviousInputMode;
- (void)selectRowForInputMode:(id)arg1;
- (id)selectedInputMode;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setInputMode:(id)arg1;
- (void)setNeedsDisplayForCell:(id)arg1;
- (void)setNeedsDisplayForTopBottomCells;
- (void)show;
- (void)showAsHUD;
- (void)showAsPopupFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)stopAnyAutoscrolling;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)updateSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
