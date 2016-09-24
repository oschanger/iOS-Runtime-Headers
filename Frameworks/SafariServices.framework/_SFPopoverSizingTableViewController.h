/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFPopoverSizingTableViewController : UITableViewController {
    BOOL  _didHaveTranslucentAppearance;
    BOOL  _didUpdateTranslucentAppearanceAtLeastOnce;
}

@property (nonatomic, readonly) BOOL hasTranslucentAppearance;

+ (float)standardMinimumHeightInPopoverView;

- (void)_updateTranslucentAppearanceIfNeeded;
- (id)backgroundColorUsingTranslucentAppearance:(BOOL)arg1;
- (BOOL)hasTranslucentAppearance;
- (float)minimumHeightInPopoverView;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)updateTranslucentAppearance;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end