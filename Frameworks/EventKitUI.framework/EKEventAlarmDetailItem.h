/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableArray, EKEventDetailAlarmCell;

@interface EKEventAlarmDetailItem : EKEventDetailItem {
    EKEventDetailAlarmCell *_cell;
    NSMutableArray *_cells;
}

- (BOOL)_alarmsAreEditable;
- (id)cellForSubitemAtIndex:(NSInteger)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(NSInteger)arg1 forWidth:(float)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(NSInteger)arg2;
- (BOOL)eventEditItemViewControllerCommit:(id)arg1;
- (NSInteger)numberOfSubitems;
- (void)reset;

@end
